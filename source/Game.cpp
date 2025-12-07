#include "Game.h"
#include <iostream>
bool Game::Init() {
    return true;
}
void Game::Update(float deltaTime) {
    std::cout << "Game update " << deltaTime << std::endl;
}

void Game::Destroy() {

}


