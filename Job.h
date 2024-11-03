#pragma once

#include <iostream>
#include <string>

#include "ProgressUpdater.h"
#include "GameInfo/Constants.h"
#include "ExpBonus.h"

using namespace std;
using namespace Wakfu;

class Job {
private :
    int title;
    int level;
    int exp;
    int expUntilNextRange;
    int nextRange;
    int nbrToCraft;

    int initExpUntilNextRange();
    
public :
    Job() = default;
    Job(int title);

    int getTitle();
    int getLevel();
    int getExp();
    int getExpUntilNextRange();
    int getNextRange();
    int getNbrToCraft();
};