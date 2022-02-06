
#include "Application.h"


namespace Amber
{

    Application::Application()
    {

        //Log::Initialize();

        AMBER_INFO(
                "Application Constructed"
                );

        m_Window =
                std::unique_ptr<Window>(
                        Window::Create()
                );

    }




    Application::~Application()
    {

        // Empty

    }



    void Application::Run()
    {

        glClearColor(0.2f, 0.4f, 0.6f, 1.0f);

        while(m_Running)
        {

            glClear(GL_COLOR_BUFFER_BIT);

            m_Window->OnUpdate();

        }

    }

}