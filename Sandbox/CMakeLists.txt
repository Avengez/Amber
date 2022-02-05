
add_executable(
        Sandbox

        Source/Sandbox.cpp
)

target_include_directories(Amberskies INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/../Amberskies/Source)

include_directories(Sandbox PRIVATE
        ../Amberskies/Dependencies/spdlog/include
        ../Amberskies/Source
)


target_link_libraries(Sandbox LINK_PUBLIC Amberskies)
