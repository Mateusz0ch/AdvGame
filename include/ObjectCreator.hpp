#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class ObjectCreator{
    public:
    void appendObject(std::vector<sf::CircleShape>&v,uint32_t radius){
        v.emplace_back(radius);
    }
};