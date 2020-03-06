#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(const std::string name_, int hitPoints, int armour) : Character(hitPoints, armour, 10), name(name_) { }

const std::string& Paladin::getName() { return name; }

std::string Paladin::getStats() { return getCharacterStats(this); }




