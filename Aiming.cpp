#include <cmath>
#include <SFML/Graphics/Shape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Mouse.hpp>
#include "Aiming.h"

void pointToMouse(const sf::RenderWindow &window, sf::Shape &aimFrom)
{
    sf::Vector2i mousePosition(sf::Mouse::getPosition(window));
    float xDifference = mousePosition.x - aimFrom.getPosition().x;
    float yDifference = mousePosition.y - aimFrom.getPosition().y;
    float degree =  std::atan(yDifference / xDifference) / (2.0 * M_PI) * 360.0;
    if (xDifference < 0)
    {
        degree += 180;
    }
    aimFrom.setRotation(degree);
}

void pointToObject(const sf::Vector2f &to, sf::Shape &from)
{
    float xDifference = to.x - from.getPosition().x;
    float yDifference = to.y - from.getPosition().y;
    float degree =  std::atan(yDifference / xDifference) / (2.0 * M_PI) * 360.0;
    if (xDifference < 0)
    {
        degree += 180;
    }
    from.setRotation(degree);
}

sf::Vector2f getDirectionVelocity(const sf::Shape &shape, const int speed)
{
    return sf::Vector2f(speed * cos(shape.getRotation() / 360 * 2 * M_PI), speed * sin(shape.getRotation() / 360 * 2 * M_PI));
}

void moveObjectDirection(sf::Shape &shape, const int speed)
{
    shape.move(sf::Vector2f(speed * cos(shape.getRotation() / 360 * 2 * M_PI), speed * sin(shape.getRotation() / 360 * 2 * M_PI)));
}
