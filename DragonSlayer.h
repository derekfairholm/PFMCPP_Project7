#pragma once

#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string, int, int);

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
    std::unique_ptr<AttackItem> attackItem;
};



