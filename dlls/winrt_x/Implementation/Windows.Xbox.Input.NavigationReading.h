#pragma once
#include "Windows.Xbox.Input.NavigationReading.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct NavigationReading : NavigationReadingT<NavigationReading>
    {
        NavigationReading() = default;

        Foundation::DateTime Timestamp();
        NavigationButtons Buttons();
        bool IsUpPressed();
        bool IsDownPressed();
        bool IsLeftPressed();
        bool IsRightPressed();
        bool IsMenuPressed();
        bool IsViewPressed();
        bool IsPreviousPagePressed();
        bool IsNextPagePressed();
        bool IsAcceptPressed();
        bool IsCancelPressed();
        bool IsXPressed();
        bool IsYPressed();

    private:
		Foundation::DateTime m_Timestamp{ Foundation::DateTime::clock::now() };
		NavigationButtons m_Buttons{ NavigationButtons::None };
		bool m_IsUpPressed{ false };
		bool m_IsDownPressed{ false };
		bool m_IsLeftPressed{ false };
		bool m_IsRightPressed{ false };
		bool m_IsMenuPressed{ false };
		bool m_IsViewPressed{ false };
		bool m_IsPreviousPagePressed{ false };
		bool m_IsNextPagePressed{ false };
		bool m_IsAcceptPressed{ false };
		bool m_IsCancelPressed{ false };
		bool m_IsXPressed{ false };
		bool m_IsYPressed{ false };
    };
}