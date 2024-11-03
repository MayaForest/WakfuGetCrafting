#include "PromptManager.h"

PromptManager* PromptManager::instance = nullptr;

PromptManager::PromptManager(){}

PromptManager* PromptManager::getInstance() {
    if(!instance) {
        instance = new PromptManager();
    }
    return instance;
}

void PromptManager::promptMain(){
    cout << "" << endl;
    cout << "+----------------------------------------------------------------" << endl;
    cout << "| Leveling all lowest" << endl;
    cout << "+----------------------------------------------------------------" << endl;
    cout << "| Professions to level up:" << endl;
    printProfessions();
    cout << "+----------------------------------------------------------------" << endl;
    cout << "| Crops needed:" << endl;
    printCrops();
    cout << "+----------------------------------------------------------------" << endl;
    cout << "| Amount of each recipe to craft:" << endl;
    printRecipes();
    cout << "+----------------------------------------------------------------" << endl;
    
}

void PromptManager::printProfessions(){
    list<string> jobsUnderRange = JobManager::getInstance()->getJobsToLvlUp();
    for(string job : jobsUnderRange){
        cout << "| " << job << endl;
    }
}

void PromptManager::printCrops(){
    list<pair<int, string>> crops = JobManager::getInstance()->getCrops();
    for(pair<int, string> crop : crops){
        cout << "| " << crop.first << " " << crop.second << endl;
    }
}

void PromptManager::printRecipes(){
    list<pair<int, string>> recipes = JobManager::getInstance()->getRecipes();
    for(pair<int, string> recipe : recipes){
        cout << "| " << recipe.first << " " << recipe.second << endl;
    }
}
