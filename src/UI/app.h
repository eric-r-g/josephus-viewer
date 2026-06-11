#ifndef MNUI_APP
#define MNUI_APP

// Dear ImGui: standalone example application for SDL2 + OpenGL
// (SDL is a cross-platform general purpose library for handling windows, inputs, OpenGL/Vulkan/Metal graphics context creation, etc.)

// Learn about Dear ImGui:
// - FAQ                  https://dearimgui.com/faq
// - Getting Started      https://dearimgui.com/getting-started
// - Documentation        https://dearimgui.com/docs (same as your local docs/ folder).
// - Introduction, links and more at the top of imgui.cpp

//#include "imgui.h"
#include "../../deps/include/imgui.h"
//#include "imgui_impl_sdl2.h"
#include "../../deps/include/imgui_impl_sdl2.h"
//#include "imgui_impl_opengl3.h"
#include "../../deps/include/imgui_impl_opengl3.h"
#include <cfloat>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <string>
#include <iostream>
#include <vector>
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <SDL2/SDL_opengles2.h>
#else
#include <SDL2/SDL_opengl.h>
#endif
#ifdef _WIN32
#include <windows.h>        // SetProcessDPIAware()
#endif

class App{
    public:
        App();
        void run();

    protected:
        ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
        ImU32 alive_color =  IM_COL32(50, 150, 250, 255);
        ImU32 dead_color = IM_COL32(190, 00, 16, 255);
        ImU32 text_color = IM_COL32(255, 255, 255, 255);

        SDL_Window* window;
        ImGuiIO* io;
        SDL_GLContext gl_context;
        std::vector <bool> alive;

    private:
        void draw_circle_with_label(const char* label, float x, float y, float radius, ImU32 circle_color, ImU32 text_color);
        int get_next(int atual, int k, int n, std::vector <bool>& alive);
};

#endif