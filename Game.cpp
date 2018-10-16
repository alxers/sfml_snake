#include "Game.h"
#include "Window.h"

Game::Game() {
    Window window("test", {640, 480});
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

//sf::Time Game::getElapsed()
//{
//    return m_elapsed;
//}
//
//void Game::restartClock()
//{
//    m_elapsed += m_clock.restart();
//}
