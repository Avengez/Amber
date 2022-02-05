//
// Created by DAOCa on 05/02/2022.
//

#include <Amberskies.h>

#include <iostream>


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

    std::cout << argc << " " << argv[0] << std::endl;

    Amber::Welcome();

    auto app =
            Amber::CreateApplication();

    app->Run();

    delete app;

    return 0;

}
