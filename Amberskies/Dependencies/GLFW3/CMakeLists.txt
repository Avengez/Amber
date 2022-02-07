
add_library(
        imgui

                             imconfig.h
        imgui.cpp            imgui.h
        imgui_demo.cpp
        imgui_draw.cpp       imgui_internal.h
        imgui_tables.cpp
        imgui_widgets.cpp    imstb_rectpack.h
                             imstb_textedit.h
                             imstb_truetype.h
        backends/imgui_impl_glfw.cpp    backends/imgui_impl_glfw.h
        backends/imgui_impl_opengl3.cpp backends/imgui_impl_opengl3.h
                            backends/imgui_impl_opengl3_loader.h

)

include_directories(imgui
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_include_directories(imgui
        PUBLIC ${CMAKE_SOURCE_DIR}/Amberskies/Dependencies/GLFW/include)

target_link_libraries(imgui
        opengl32
        glfw)
