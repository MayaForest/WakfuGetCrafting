#pragma once

#include <iostream>
#include <list>

#include "JobManager.h"

using namespace std;
using namespace Wakfu;

class PromptManager {
private:
    static PromptManager* instance;

    PromptManager();

    void printProfessions();
    void printCrops();
    void printRecipes();

public:

    PromptManager(const PromptManager& obj) = delete;

    static PromptManager* getInstance();

    void promptMain();
};
