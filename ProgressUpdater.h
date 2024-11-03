#pragma once

#include <iostream>
#include <string>
#include <fstream>

#include "GameInfo/Constants.h"

using namespace std;
using namespace Wakfu;

class ProgressUpdater {
private:
    static ProgressUpdater* instance;

    ProgressUpdater();
public:

    ProgressUpdater(const ProgressUpdater& obj) = delete;

    static ProgressUpdater* getInstance();

    const int BASE_EXP_LINE_NBR = 3; // starting at 0
    const int GUILD_BONUS_LINE_NBR = 5;
    const int POTION_LINE_NBR = 7;

    const int PROFESSIONS_START_LINE_NBR = 14;
    const int INTERVAL_TO_NEXT_PROFESSION = 4;
    const int LEVEL_INTERVAL = 1;
    const int EXP_INTERVAL = 2;

    // returns string of nth line
    string readLine(int lineNumber);

    // Job titles are available in constants
    // Intervals are available above
    // returns converted line [interval] lines after [jobTitle].
    int getJobDetail(int jobTitle, const int interval);
};
