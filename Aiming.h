#ifndef AIMING_H_INCLUDED
#define AIMING_H_INCLUDED

#include <SFML/Graphics/Shape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>


void pointToMouse(const sf::RenderWindow &window, sf::Shape &aimFrom);
void pointToObject(const sf::Vector2f &to, sf::Shape &from);

sf::Vector2f getDirectionVelocity(const sf::Shape &shape, const int speed);
void moveObjectDirection(sf::Shape &shape, const int speed);

#endif // AIMING_H_INCLUDED
