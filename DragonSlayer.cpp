#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer(const std::string name_, int hitPoints, int armor) : Character(hitPoints, armor, 4), name(name_) 
{ 
    helpfulItems = makeHelpfulItems(rand() % 5 + 1);
    defensiveItems = makeDefensiveItems(rand() % 5 + 1);
    attackItem.reset(new AttackItem);
    
}

const std::string& DragonSlayer::getName() { return name; }

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if(auto* dragon = dynamic_cast<Dragon*>(&other))
    {
        attackItem->use(this);
        attackItem.reset();
        while(dragon->getHP() > 0)
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

std::string DragonSlayer::getStats() { return getCharacterStats(this); }



