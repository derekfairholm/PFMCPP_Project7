#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(const std::string name_, int hitPoints, int armour) : Character(hitPoints, armour, 4), name(name_) 
{ 
    helpfulItems = makeHelpfulItems(rand() % 5 + 1);
    defensiveItems = makeDefensiveItems(rand() % 5 + 1);
}

const std::string& Dwarf::getName() { return name; }

std::string Dwarf::getStats() { return getCharacterStats(this); }



