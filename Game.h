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
private:

};

#endif /* GAME_H */

