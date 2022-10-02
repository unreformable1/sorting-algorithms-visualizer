#pragma once

#include <algorithm>
#include <iostream>
#include <random>
#include <string>
#include <vector>

#include <SDL2/SDL.h>


struct WindowProps
{
    int width;
    int height;
    std::string title;

    WindowProps(int width, int height, const std::string& title)
    :   width(width), height(height), title(title)
    {

    }
};

class Application
{
public:
    Application(const WindowProps& props);
    void run();
    void showMenu() const;
    void bubble_sort() const;
    void draw(const std::vector<int>& data, int compared1, int compared2) const;


private:
    SDL_Renderer* m_renderer = nullptr;
    SDL_Window* m_window = nullptr;

    bool m_running = true;

    WindowProps m_windowProps;
};