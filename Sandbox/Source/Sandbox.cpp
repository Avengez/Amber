//
// Created by DAOCa on 05/02/2022.
//

#include <Amberskies.h>




class Sandbox : public Amber::Application
{

public:

    Sandbox() = default;

    ~Sandbox() override = default;

};



Amber::Application* Amber::CreateApplication()
{

    return new Sandbox();

}



int main(int argc, char* argv[])
{
    Amber::Log::Initialize();

    DEV_INFO(
            "({0}) {1}",
            argc,
            argv[0]
            );

    Amber::Welcome();

    auto app =
            Amber::CreateApplication();

    app->Run();

    delete app;

    return 0;

}
