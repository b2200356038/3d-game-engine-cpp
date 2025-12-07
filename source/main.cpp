#include "eng.h"
#include "Game.h"
int main()
{
    Game* game = new Game();
    eng:: Engine engine;
    engine.SetApplication(game);

    if (engine.Init()) {
        engine.Run();
    }

    engine.Destroy();

    return 0;
}