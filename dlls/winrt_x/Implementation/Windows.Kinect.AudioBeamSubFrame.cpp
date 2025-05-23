#include "pch.h"
#include "Windows.Kinect.AudioBeamSubFrame.h"
#include "Windows.Kinect.AudioBeamSubFrame.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
////

namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamSubFrame::Close()
    {
        throw hresult_not_implemented();
    }
    uint32_t AudioBeamSubFrame::FrameLengthInBytes()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::Duration()
    {
        throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngle()
    {
        throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngleConfidence()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeamMode AudioBeamSubFrame::AudioBeamMode()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBodyCorrelation> AudioBeamSubFrame::AudioBodyCorrelations()
    {
        throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToArray(array_view<uint8_t> frameData)
    {
        throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer AudioBeamSubFrame::LockAudioBuffer()
    {
        throw hresult_not_implemented();
    }
}
