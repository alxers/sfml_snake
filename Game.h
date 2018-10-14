#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game();
    Game(const Game& orig);
    ~Game();
    
    void isDone();
    void handleInput();
    void update();
    void render();
    
    sf::Time getElapsed();
    void restartClock();
private:
    sf::Clock m_clock;
    sf::Time m_elapsed;

};

#endif /* GAME_H */

