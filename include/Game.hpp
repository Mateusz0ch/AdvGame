#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdint.h>
#include <string>

class Game {
public:
  Game(std::string _gameName, uint32_t _width, uint32_t _height);
  void run();

private:
  sf::RenderWindow window;
  sf::CircleShape shape{100.f};
  uint32_t width = 640;
  uint32_t height = 640;
  std::string gameName = "default";
};