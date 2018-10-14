#ifndef SNAKE_H
#define SNAKE_H

#include <SFML/System/Vector2.hpp>


class Snake {
public:
    Snake();
    Snake(const Snake& orig);
    virtual ~Snake();
private:

};

struct snakeSegment
{
    snakeSegment(int x, int y) : position(x, y)
    {
        
    }
    
    sf::Vector2i position;
};

#endif /* SNAKE_H */

