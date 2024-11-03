#pragma once

#include <iostream>
#include <string>
#include <list>

#include "GameInfo/Constants.h"
#include "Job.h"

using namespace std;
using namespace Wakfu;

class JobManager {
private:
    static JobManager* instance;
    Job jobs[NBR_OF_JOBS];
    list<Job> jobsToLvlUp;

    JobManager();

    int getLowestRange();
public:

    JobManager(const JobManager& obj) = delete;

    static JobManager* getInstance();

    list<string> getJobsToLvlUp();
    list<pair<int, string>> getCrops();
    list<pair<int, string>> getRecipes();
};
