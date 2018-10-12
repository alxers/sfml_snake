#include "Window.h"
#include <SFML/Graphics.hpp>
Window::Window()
{
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

void Window::create()
{
    m_window.create({ m_windowSize.x, m_windowSize.y }, m_windowTitle);
}

void Window::startDraw()
{
    m_window.clear();
}

void Window::draw(sf::Drawable &l_drawable)
{
    m_window.draw(l_drawable);
}

void Window::endDraw()
{
    m_window.display();
}
    
void Window::update()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            m_isDone = true;
        }
    }
}

bool Window::isDone()
{
    return m_isDone;
}
void Window::destroy()
{
    m_window.close();
}

