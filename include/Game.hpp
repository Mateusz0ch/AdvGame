#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdint.h>
#include <string>
#include <vector>
#include <ObjectCreator.hpp>

class Game {
  ObjectCreator objCreator{};
  sf::RenderWindow window;
  sf::CircleShape shape{100.f};
  std::vector<sf::CircleShape> shapes;
  uint32_t width = 640;
  uint32_t height = 640;
  std::string gameName = "default";
public:
  Game(std::string _gameName, uint32_t _width, uint32_t _height);
  void run();
  void appendNewCircle(uint32_t radius);
};