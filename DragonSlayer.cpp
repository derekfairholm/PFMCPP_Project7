#include "DragonSlayer.h"
#include "Dragon.h"
#include <assert.h>
#include "Utility.h"

DragonSlayer::DragonSlayer(const std::string name_, int hitPoints, int armor) : Character(hitPoints, armor, 4), name(name_) 
{ 
    helpfulItems = makeHelpfulItems(rand() % 5 + 1);
    defensiveItems = makeDefensiveItems(rand() % 5 + 1);
}

const std::string& DragonSlayer::getName() { return name; }

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if(auto* dragon = dynamic_cast<Dragon*>(&other))
    {
        attackItem.use(this);
        while(dragon->getHP() > 0)
        {
          dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

std::string DragonSlayer::getStats() { return getCharacterStats(this); }



