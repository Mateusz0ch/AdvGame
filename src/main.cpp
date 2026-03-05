#include <SFML/Graphics.hpp>
#include "Game.hpp"

int main()
{
    Game game{"AdvGame",640,640};
    game.run();

    return 0;
}