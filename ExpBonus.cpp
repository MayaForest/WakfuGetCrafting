#include "ExpBonus.h"

ExpBonus* ExpBonus::instance = nullptr;

ExpBonus::ExpBonus() {
    baseExp = stoi(ProgressUpdater::getInstance()->
        readLine(ProgressUpdater::getInstance()->BASE_EXP_LINE_NBR));

    guildBonusPercentage = (stof(ProgressUpdater::getInstance()->
        readLine(ProgressUpdater::getInstance()->GUILD_BONUS_LINE_NBR))) / 100;

    string potion = ProgressUpdater::getInstance()->
        readLine(ProgressUpdater::getInstance()->POTION_LINE_NBR);
    if(potion == "true" | potion == "True"){
        isPotionActive = 1;
    }
    else{
        isPotionActive = 0;
    }

    expPerCraft = (baseExp * (1 + guildBonusPercentage + isPotionActive));
}

ExpBonus* ExpBonus::getInstance() {
    if(!instance) {
        instance = new ExpBonus();
    }
    return instance;
}

int ExpBonus::getExpPerCraft(){return expPerCraft;}