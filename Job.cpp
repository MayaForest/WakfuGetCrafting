#include "Job.h"

Job::Job(int title){
    this->title = title;
    
    level = ProgressUpdater::getInstance()->getJobDetail(title, 
        ProgressUpdater::getInstance()->LEVEL_INTERVAL);

    exp = ProgressUpdater::getInstance()->getJobDetail(title, 
        ProgressUpdater::getInstance()->EXP_INTERVAL);

    nextRange = ((level / RANGE_VALUE) * RANGE_VALUE) + RANGE_VALUE;
    expUntilNextRange = initExpUntilNextRange();

    nbrToCraft = (expUntilNextRange + ExpBonus::getInstance()->getExpPerCraft() - 1) / ExpBonus::getInstance()->getExpPerCraft();
}

int Job::initExpUntilNextRange(){
    int expLeft = 0;
    for (int i = level; i < nextRange; i++) {
        expLeft += (150 * i) + 75;
    }
    expLeft -= exp;
    return expLeft;
}

int Job::getTitle(){return title;}
int Job::getLevel(){return level;}
int Job::getExp(){return exp;}
int Job::getExpUntilNextRange(){return expUntilNextRange;}
int Job::getNextRange(){return nextRange;}
int Job::getNbrToCraft(){return nbrToCraft;}
