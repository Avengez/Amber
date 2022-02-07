cmake_minimum_required(VERSION 3.21)
project(Amber)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Amberskies/Dependencies/ImGui)
add_subdirectory(Amberskies/Dependencies/GLFW)
add_subdirectory(Amberskies)
add_subdirectory(Sandbox)
