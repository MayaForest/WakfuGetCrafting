#pragma once

#include <iostream>

#include "ProgressUpdater.h"

class ExpBonus {
private:
    int baseExp;
    float guildBonusPercentage;
    int isPotionActive;
    int expPerCraft;

    static ExpBonus* instance;

    ExpBonus();

public:

    ExpBonus(const ExpBonus& obj) = delete;
    static ExpBonus* getInstance();

    int getExpPerCraft();
};