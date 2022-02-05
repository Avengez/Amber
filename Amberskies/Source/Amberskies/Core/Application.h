//
// Created by DAOCa on 05/02/2022.
//

#ifndef AMBER_APPLICATION_H
#define AMBER_APPLICATION_H



#include "Common.h"



namespace Amber
{

    class Application
    {

    public:

        Application();

        virtual ~Application();

        void Run();

    };

    Application* CreateApplication();

}



#endif //AMBER_APPLICATION_H
