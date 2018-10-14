#include "Game.h"

Game::Game() {
}

Game::Game(const Game& orig) {
}

Game::~Game() {
}

sf::Time Game::getElapsed()
{
    return m_elapsed;
}

void Game::restartClock()
{
    m_elapsed += m_clock.restart();
}
