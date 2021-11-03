#ifndef ENERGYBAR_H_INCLUDED
#define ENERGYBAR_H_INCLUDED

class bar_t : public sf::RectangleShape
{
private:
    int level;
    int maxEnergy;
    int currentEnergy;
public:
    bar_t(sf::Vector2f barSize, sf::Color::Color color);

    void setMaxEnergy(int energyAmount);
    void setCurrentEnergy(int energyAmount);
    void setPercent(int percent);
};

#endif // ENERGYBAR_H_INCLUDED
