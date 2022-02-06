//
// Created by DAOCa on 05/02/2022.
//

#ifndef AMBER_APPLICATION_H
#define AMBER_APPLICATION_H



#include "Common.h"
#include "Amberskies/Core/Window.h"



namespace Amber
{

    class Application
    {

        std::unique_ptr<Window> m_Window;

        bool m_Running = true;

    public:

        Application();

        virtual ~Application();

        void Run();

    };

    Application* CreateApplication();

}



#endif //AMBER_APPLICATION_H
