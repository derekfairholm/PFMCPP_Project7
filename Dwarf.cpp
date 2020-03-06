#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(const std::string name_, int hitPoints, int armour) : Character(hitPoints, armour, 4), name(name_) { }

const std::string& Dwarf::getName() { return name; }

std::string Dwarf::getStats() { return getCharacterStats(this); }



