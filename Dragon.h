#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string, int, int);

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};

