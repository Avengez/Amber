
add_executable(
        Sandbox

        Source/Sandbox.cpp
)

target_include_directories(Sandbox PRIVATE
        ../Amberskies/Dependencies
        ${CMAKE_CURRENT_SOURCE_DIR}/../Amberskies/Source
)


target_link_libraries(Sandbox PRIVATE
        Amberskies
        )
