
add_executable(Sandbox Source/Sandbox.cpp)

target_include_directories(Sandbox
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Dependencies/spdlog/include
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Dependencies/GLFW/include
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Dependencies/ImGui
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Source
)

target_link_libraries(Sandbox
        opengl32
        glfw
        imgui
        Amberskies)
