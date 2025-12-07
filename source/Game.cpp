#include "Game.h"
#include <iostream>
#include <GLFW/glfw3.h>
bool Game::Init() {
    return true;
}
void Game::Update(float deltaTime) {
   auto& input = eng::Engine::GetInstance().GetInputManager();
    //testing
    if (input.IsKeyPressed(GLFW_KEY_A)){
        std::cout << "A" << std::endl;
    }
}

void Game::Destroy() {

}


