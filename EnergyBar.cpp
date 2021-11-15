#include <SFML/Graphics.hpp>
#include "EnergyBar.h"

bar_t::bar_t(sf::Vector2f barSize, sf::Color color, int capacity)
{
    setSize(barSize);
    setFillColor(color);
    maxSize = barSize.x;
    maxEnergy = capacity;
    currentEnergy = capacity;
    percent = 100.0;
}
void bar_t::setEnergy(float energyAmount)
{
    currentEnergy = energyAmount;
    percent = (currentEnergy / maxEnergy) * 100;
    setSize(sf::Vector2f(maxSize * (currentEnergy / maxEnergy), getSize().y));
}
void bar_t::setPercent(float newPercent)
{
    percent = newPercent;
    currentEnergy = maxEnergy * (percent / 100);
    setSize(sf::Vector2f(maxSize * (currentEnergy / maxEnergy), getSize().y));
}

void bar_t::addEnergy(float energyAmount)
{
    currentEnergy += energyAmount;
    percent = (currentEnergy / maxEnergy) * 100;
    setSize(sf::Vector2f(maxSize * (currentEnergy / maxEnergy), getSize().y));
}
void bar_t::addPercent(float addPercent)
{
    percent += addPercent;
    currentEnergy = maxEnergy * (percent / 100);
    setSize(sf::Vector2f(maxSize * (currentEnergy / maxEnergy), getSize().y));
}

float bar_t::getMaxEnergy()
{
    return maxEnergy;
}
float bar_t::getEnergy()
{
    return currentEnergy;
}
float bar_t::getPercent()
{
    return percent;
}
