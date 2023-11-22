#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

class Task {
private:
    Time startTime;
    Time endTime;
    string category;
    string location;
    string decription;
    int priority;

public:
    Task(Time _start, Time _end, string _catagory, string _location, string _decription, int _priority);

};

#endif