#include "pch.h"
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.h"
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    Foundation::Collections::IVectorView<hstring> StreamingInstallQueue::GetOrderedPackageInstanceIds()
    {
        LOG_FUNCTION_NAME();

		return m_orderedPackageInstanceIds;
    }

    IStreamingPackage StreamingInstallQueue::GetStreamingPackage(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
    	PRINT_UNIMPLEMENTED_FUNCTION();

        return m_streamingPackage;
    }

    event_token StreamingInstallQueue::QueueChanged(Foundation::EventHandler<IStreamingQueueChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();

		return m_queueChangedEvent.add(handler);
    }

    void StreamingInstallQueue::QueueChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();

		m_queueChangedEvent.remove(token);
    }

    event_token StreamingInstallQueue::StreamingPackageStateChanged(Foundation::EventHandler<IStreamingPackageStateChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();

		return m_streamingPackageStateChangedEvent.add(handler);
    }

    void StreamingInstallQueue::StreamingPackageStateChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();

		m_streamingPackageStateChangedEvent.remove(token);
    }
}