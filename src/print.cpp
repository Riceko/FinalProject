#include "../header/calendar.h"
#include "../header/time.h"
#include "../header/print.h"
#include "../header/task.h"
#include <string>
#include <iostream>
using namespace std;

Print::Print() {

}

void Print::printTime(Time* clock) {
    cout << clock->getHours() << ":" << clock->getMins();
    if (!clock->getPm()) {
        cout << "am";
    } else {
        cout << "pm";
    }
}

void Print::printTask(Task* taskPtr) {
    cout << "Name: " << taskPtr->getName() << endl;
    cout << "Category: " << taskPtr->getCategory() << endl;
    cout << "Time: ";
    printTime(taskPtr->getStartTime());
    cout << " - ";
    printTime(taskPtr->getEndTime());
    cout << endl << "Location: " << taskPtr->getLocation() << endl;
    cout << "Description: " << taskPtr->getDescription() << endl;
    cout << "Priority: " << taskPtr->getPriority() << endl;
}