
#include "Application.h"


namespace Amber
{

    Application::Application()
    {

        Log::Initialize();

        AMBER_INFO(
                "Application Constructed"
                );

        m_Window =
                std::unique_ptr<Window>(
                        Window::Create()
                );

        m_Window->SetEventCallback(
                BIND_EVENT_FN(Application::OnEvent)
                );

    }




    Application::~Application()
    {

        // Empty

    }



    void Application::Run()
    {

        glClearColor(0.05f, 0.12f, 0.20f, 1.00f);

        while(m_Running)
        {

            glClear(GL_COLOR_BUFFER_BIT);

            float time = 2000.0f;
                    //(float)ImGui::GetTime();

            DeltaTime deltaTime =
                    time - m_LastFrameTime;

            m_LastFrameTime = time;

            for (Layer* layer : m_LayerStack)
                layer->OnUpdate(deltaTime);

            m_Window->OnUpdate();

        }

    }



    void Application::OnEvent(Event &event)
    {

        EventDispatcher dispatcher(
                event
                );

        dispatcher.Dispatch<WindowCloseEvent>(
                BIND_EVENT_FN(Application::OnWindowClose)
                );

        for (auto it = m_LayerStack.end(); it != m_LayerStack.begin(); )
        {

            (*--it)->OnEvent(
                    event
            );

            if (event.Handled)
                break;

        }

    }



    void Application::PushLayer(Layer* layer)
    {

        m_LayerStack.PushLayer(
                layer
                );

    }



    void Application::PushOverlay(Layer* overlay)
    {

        m_LayerStack.PushOverLay(
                overlay
                );

    }



    bool Application::OnWindowClose(WindowCloseEvent& event)
    {

        m_Running = false;

        return true;

    }

}