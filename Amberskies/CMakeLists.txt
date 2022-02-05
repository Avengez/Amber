
add_library(
        Amberskies

        Source/Common.h
        Source/Amberskies/Core/Application.cpp Source/Amberskies/Core/Application.h
        Source/Test.cpp Source/Test.h Source/Amberskies.h
)



include_directories(Amberskies
        ${CMAKE_CURRENT_SOURCE_DIR}/Source
        )


