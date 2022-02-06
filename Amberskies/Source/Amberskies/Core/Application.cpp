
#include "Application.h"


namespace Amber
{

    Application::Application()
    {

        //Log::Initialize();

        AMBER_INFO(
                "Application Constructed"
                );

    }




    Application::~Application()
    {

        // Empty

    }



    void Application::Run()
    {

        WindowResizeEvent event(
                1280,
                720
                );

        AMBER_TRACE(
                event
                );

        while(
                true
                );

    }

}