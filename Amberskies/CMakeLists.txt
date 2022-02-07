
add_library(
        Amberskies

        Source/Common.h
        Source/Amberskies/Core/Application.cpp  Source/Amberskies/Core/Application.h
                                                Source/Test.cpp Source/Test.h
                                                Source/Amberskies.h
        Source/Amberskies/Core/Log.cpp          Source/Amberskies/Core/Log.h
                                                Source/Amberskies/Events/Event.h
                                                Source/Amberskies/Events/ApplicationEvent.h
                                                Source/Amberskies/Events/MouseEvent.h
                                                Source/Amberskies/Events/KeyEvent.h
                                                Source/Amberskies/Core/Window.h
                                                Source/Amberskies/Renderer/GFXContext.h
        Source/Amberskies/Core/Layer.cpp        Source/Amberskies/Core/Layer.h
        Source/Amberskies/Core/LayerStack.cpp   Source/Amberskies/Core/LayerStack.h
                                                Source/Amberskies/Core/DeltaTime.h

        Source/Platform/OpenGL/glad.c           Source/Platform/OpenGL/glad.h
                                                Source/Platform/OpenGL/khrplatform.h
        Source/Platform/OpenGL/OpenGLContext.cpp Source/Platform/OpenGL/OpenGLContext.h

        Source/Platform/Windows/WindowsWindow.cpp Source/Platform/Windows/WindowsWindow.h
)

include_directories(Amberskies
        ${CMAKE_CURRENT_SOURCE_DIR}/Source)

target_include_directories(Amberskies
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Dependencies/spdlog/include
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Dependencies/GLFW/include)

target_link_libraries(Amberskies glfw)
