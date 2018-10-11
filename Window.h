#ifndef WINDOW_H
#define WINDOW_H

class Window
{
public:
    Window();
    Window(const std::string &l_title, const sf::Vector2u &l_size);
    ~Window();
    
    void startDraw();
    void draw(sf::Drawable &l_drawable);
    void EndDraw();
    
    void update();
    void isDone();
private:
    void setup(const std::string &l_title, const sf::Vector2u &l_size);
    void create();
    void destroy();
    
    sf::RenderWindow m_window;
    sf::Vector2u m_windowSize;
    std::string m_windowTitle;
    
    bool m_isDone;
};

#endif /* WINDOW_H */

