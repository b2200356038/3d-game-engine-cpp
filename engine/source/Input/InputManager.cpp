#include "Input/InputManager.h"
namespace eng {
    void InputManager::SetKeyPressed(int keyCode, bool pressed) {
        if ( keyCode<0 || keyCode>= static_cast<int>(m_keys.size()))
        {
            return;
        }
        m_keys[keyCode] = pressed;
    }


    bool InputManager::IsKeyPressed(int keyCode) {
        if ( keyCode<0 || keyCode>= static_cast<int>(m_keys.size()))
        {
            return false;
        }
        return m_keys[keyCode];
    }
}
