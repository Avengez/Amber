
add_executable(Sandbox Source/Sandbox.cpp)

target_include_directories(Sandbox
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Dependencies/spdlog/include
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Source
)

target_link_libraries(Sandbox LINK_PUBLIC Amberskies)
