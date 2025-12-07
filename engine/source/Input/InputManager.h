#pragma once
#include  <array>
namespace eng {
    class InputManager {
    private:
        InputManager()=default;
        InputManager(const InputManager&)=delete;
        InputManager& operator=(const InputManager&)=delete;
        InputManager& operator=(InputManager&&)=delete;
    public:
        void SetKeyPressed(int keyCode, bool pressed);
        bool IsKeyPressed(int keyCode);

    private:
        friend class Engine;
        std:: array< bool, 256> m_keys = {false};
    };
}