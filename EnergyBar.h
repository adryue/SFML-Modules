#ifndef ENERGYBAR_H_INCLUDED
#define ENERGYBAR_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>

class bar_t : public sf::RectangleShape
{
private:
    float maxSize;
    float maxEnergy;
    float currentEnergy;
    float percent;
public:
    bar_t(sf::Vector2f barSize, sf::Color color, int capacity);

    //void setMaxEnergy(int energyAmount);
    void setEnergy(float energyAmount);
    void setPercent(float newPercent);

    void addEnergy(float energyAmount);
    void addPercent(float addPercent);

    float getMaxEnergy();
    float getEnergy();
    float getPercent();
};

#endif // ENERGYBAR_H_INCLUDED
