#pragma once
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct StreamingInstallQueue : StreamingInstallQueueT<StreamingInstallQueue>
    {
        StreamingInstallQueue() = default;

        Foundation::Collections::IVectorView<hstring> GetOrderedPackageInstanceIds();
        IStreamingPackage GetStreamingPackage(hstring const& packageInstanceId);
        event_token QueueChanged(Foundation::EventHandler<IStreamingQueueChangedEventArgs> const& handler);
        void QueueChanged(event_token const& token) noexcept;
        event_token StreamingPackageStateChanged(Foundation::EventHandler<IStreamingPackageStateChangedEventArgs> const& handler);
        void StreamingPackageStateChanged(event_token const& token) noexcept;

    private:
		Foundation::Collections::IVectorView<hstring> m_orderedPackageInstanceIds = single_threaded_vector<hstring>().GetView();

        IStreamingPackage m_streamingPackage{};

		event<Foundation::EventHandler<IStreamingQueueChangedEventArgs>> m_queueChangedEvent;
		event<Foundation::EventHandler<IStreamingPackageStateChangedEventArgs>> m_streamingPackageStateChangedEvent;
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct StreamingInstallQueue : StreamingInstallQueueT<StreamingInstallQueue, implementation::StreamingInstallQueue>
    {
    };
}