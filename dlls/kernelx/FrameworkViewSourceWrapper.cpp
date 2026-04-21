#include "pch.h"
#include "FrameworkViewSourceWrapper.h"
#include "FrameworkViewWrapper.h"



HRESULT __stdcall FrameworkViewSourceWrapper::CreateView(ABI::Windows::ApplicationModel::Core::IFrameworkView** viewProvider)
{
	if (!viewProvider)
	{
		return E_POINTER;
	}

	const HRESULT hr = m_realViewSource->CreateView(viewProvider);
	if (FAILED(hr) || !*viewProvider)
	{
		return hr;
	}

	// CreateView transfers ownership of one refcount to *viewProvider; wrap it and own that ref in ~FrameworkViewWrapper.
	IFrameworkView* const inner = *viewProvider;
	*viewProvider = new (std::nothrow) FrameworkViewWrapper(inner);
	if (!*viewProvider)
	{
		inner->Release();
		return E_OUTOFMEMORY;
	}

	return hr;
}

HRESULT FrameworkViewSourceWrapper::QueryInterface(const IID& riid, void** ppvObject)
{
	if (riid == __uuidof(IFrameworkViewSource))
	{
		*ppvObject = this;
		AddRef();
		return S_OK;
	}
	else
	{
		// DEBUG

		char iidstr[sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}")];
		OLECHAR iidwstr[sizeof(iidstr)];
		StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
		WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
		MessageBoxA(nullptr, iidstr, typeid(*this).name(), MB_OK);
	}

	return m_realViewSource->QueryInterface(riid, ppvObject);
}

ULONG FrameworkViewSourceWrapper::AddRef()
{
	return InterlockedIncrement(&m_RefCount);
}

ULONG FrameworkViewSourceWrapper::Release()
{
	ULONG refCount = InterlockedDecrement(&m_RefCount);
	if (refCount == 0)
		delete this;
	return refCount;
}

HRESULT FrameworkViewSourceWrapper::GetIids(ULONG* iidCount, IID** iids)
{
	return m_realViewSource->GetIids(iidCount, iids);
}

HRESULT FrameworkViewSourceWrapper::GetRuntimeClassName(HSTRING* className)
{
	return m_realViewSource->GetRuntimeClassName(className);
}

HRESULT FrameworkViewSourceWrapper::GetTrustLevel(TrustLevel* trustLevel)
{
	return m_realViewSource->GetTrustLevel(trustLevel);
}