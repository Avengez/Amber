




include_directories(Amberskies
        ${CMAKE_CURRENT_SOURCE_DIR}/Dependencies/spdlog/include
        ${CMAKE_CURRENT_SOURCE_DIR}/Source
        )

add_library(
        Amberskies

        Source/Common.h
        Source/Amberskies/Core/Application.cpp Source/Amberskies/Core/Application.h
        Source/Test.cpp Source/Test.h Source/Amberskies.h
        Source/Amberskies/Core/Log.cpp Source/Amberskies/Core/Log.h)
