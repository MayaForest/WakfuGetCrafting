#include "JobManager.h"

JobManager* JobManager::instance = nullptr;

JobManager::JobManager(){
    for(int i = 0; i < NBR_OF_JOBS; i++){
        jobs[i] = Job(i);
    }

    int range = getLowestRange();
    for(Job job : jobs){
        if(job.getNextRange() == range){
            jobsToLvlUp.push_back(job);
        }
    }
}

JobManager* JobManager::getInstance(){
    if(!instance) {
        instance = new JobManager();
    }
    return instance;
}

int JobManager::getLowestRange(){
    int range = NBR_OF_RANGES * 10;
    for(Job job : jobs){
        if(job.getNextRange() < range)
            range = job.getNextRange();
    }
    return range;
}

list<string> JobManager::getJobsToLvlUp(){
    list<string> jobsUnderRange;
    for(Job job : jobsToLvlUp){
        jobsUnderRange.push_back(JOBS[job.getTitle()]);
    }
    return jobsUnderRange;
}

list<pair<int, string>> JobManager::getCrops(){
    list<pair<int, string>> list; // Qty and Crop
    for(Job job : jobsToLvlUp){
        list.push_back({
            (job.getNbrToCraft() * NBR_CROPS_PER_RECIPE[job.getTitle()]),
            FIRST_RESSOURCES[HARVEST_INDEX_BY_JOB[job.getTitle()]][(job.getNextRange() / 10) - 1]
        });
        list.push_back({
            (job.getNbrToCraft() * NBR_CROPS_PER_RECIPE[job.getTitle()]),
            SECOND_RESSOURCES[HARVEST_INDEX_BY_JOB[job.getTitle()]][(job.getNextRange() / 10) - 1]
        });
    }
    return list;
}

list<pair<int, string>> JobManager::getRecipes(){
    list<pair<int, string>> list; // Qty and recipe
    for(Job job : jobsToLvlUp){
        string recipe = RECIPE_ADJECTIVES[(job.getNextRange() / 10) - 1];
        recipe += " ";
        recipe += RECIPE_NAMES[job.getTitle()];

        list.push_back({
            job.getNbrToCraft(),
            recipe
        });
    }
    return list;
}