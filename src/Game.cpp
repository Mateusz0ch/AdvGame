#include "Game.hpp"

Game::Game(std::string _gameName, uint32_t _width, uint32_t _height)
    : gameName(_gameName), width(_width), height(_height),
      window(sf::VideoMode(_width, _height), _gameName) {
  appendNewCircle(125);
};
void Game::run() {
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear();
    for(auto &x: shapes){
      window.draw(x);
    }
    window.display();
  }
}
void Game::appendNewCircle(uint32_t radius){
  objCreator.appendObject(shapes,radius);
}