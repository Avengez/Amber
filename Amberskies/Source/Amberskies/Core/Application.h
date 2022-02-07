
/**
* ________________________________________________________
* Project Created by Frazor Sharp : 16/01/2022
*
* Twitch : Simple Server Programming in C/C++
*
* Contact Email : daocamberskies@googlemail.com
* Github		: https://github.com/Avengez/Amber.git
* Twitch		: frazorbladezsharp
* Youtube		: Frazor Sharp
*
* ______________________________________________________*/





#ifndef AMBER_APPLICATION_H
#define AMBER_APPLICATION_H



#include "Common.h"
#include "Amberskies/Core/Window.h"
#include "Amberskies/Core/LayerStack.h"
#include "Amberskies/Core/DeltaTime.h"



namespace Amber
{

    class Application
    {

        std::unique_ptr<Window> m_Window;

        bool m_Running = true;

        LayerStack m_LayerStack;

        float m_LastFrameTime = 0.0f;

    public:

        Application();

        virtual ~Application();

        void Run();

        void OnEvent(Event& event);

        void PushLayer(Layer* layer);

        void PushOverlay(Layer* overlay);

    private:

        bool OnWindowClose(WindowCloseEvent& event);

    };

    Application* CreateApplication();

}



#endif //AMBER_APPLICATION_H
