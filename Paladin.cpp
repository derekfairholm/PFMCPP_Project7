#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(const std::string name_, int hitPoints, int armor) : Character(hitPoints, armor, 10), name(name_) 
{ 
    helpfulItems = makeHelpfulItems(rand() % 5 + 1);
    defensiveItems = makeDefensiveItems(rand() % 5 + 1);
}

const std::string& Paladin::getName() { return name; }

std::string Paladin::getStats() { return getCharacterStats(this); }




