//
// Created by DAOCa on 05/02/2022.
//

#include <Amberskies.h>




class FirstLayer : public Amber::Layer
{

    float m_SimpleTimer = 0.0f;

public:

    FirstLayer() :
            Amber::Layer("FirstLayer")
    {

        DEV_INFO(
                "First Layer Constructed"
                );

    }



    void OnUpdate(Amber::DeltaTime deltaTime) override
    {

        float dt =
                deltaTime.GetSeconds();

        m_SimpleTimer +=
                dt;

        if (m_SimpleTimer >= 1)
        {

            DEV_INFO(
                    "Delta time : {0}s   {1}ms",
                    dt,
                    deltaTime.GetMilliseconds()
            );

            m_SimpleTimer = 0.0f;

        }

    }

};



class Sandbox : public Amber::Application
{

public:

    Sandbox()
    {

        PushLayer(
                new FirstLayer()
        );

    }

    ~Sandbox() override = default;

};



Amber::Application* Amber::CreateApplication()
{

    return new Sandbox();

}



int main(/*int argc, char* argv[]*/)
{

    Amber::Welcome();

    auto app =
            Amber::CreateApplication();

    app->Run();

    delete app;

    return 0;

}
