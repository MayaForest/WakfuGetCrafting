#include "ProgressUpdater.h"

ProgressUpdater* ProgressUpdater::instance = nullptr;

ProgressUpdater::ProgressUpdater(){}

ProgressUpdater* ProgressUpdater::getInstance() {
    if(!instance) {
        instance = new ProgressUpdater();
    }
    return instance;
}

string ProgressUpdater::readLine(int lineNumber){
    ifstream file("GameInfo/Progress.txt");
    string line;

    for(int i = 0; i <= lineNumber; i++){
        getline(file, line);
    }

    return line;
}

int ProgressUpdater::getJobDetail(int jobTitle, const int interval){
    string line = readLine(PROFESSIONS_START_LINE_NBR);
    int currentLine = PROFESSIONS_START_LINE_NBR;
    
    for(int i = 0; i < NBR_OF_JOBS; i++){
        if(line == JOBS[jobTitle]) {
            line = readLine(currentLine + interval);
            return stoi(line);
        }
        currentLine += INTERVAL_TO_NEXT_PROFESSION;
        line = readLine(currentLine);
    }
    
    throw ("Not Found");
}
