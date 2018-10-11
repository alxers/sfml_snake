#include "Window.h"

Window::Window()
{
    m_window(sf::VideoMode(640, 480), "Default");
}

Window::Window(const std::string &l_title, const sf::Vector2u &l_size)
{
    m_windowTitle = l_title;
    m_windowSize = l_size;
    create();
}

Window::~Window()
{
    destroy();
}

void Window::startDraw()
{
    m_window.clear();
}

void Window::draw(sf::Drawable &l_drawable)
{
    m_window.draw(&l_drawable);
}

void Window::EndDraw()
{
    m_window.display();
}
    
void Window::update();
void Window::isDone();
void Window::destroy()
{
    m_window.close();
}

