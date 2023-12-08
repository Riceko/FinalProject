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
    cout << "Time: ";
    printTime(taskPtr->getStartTime());
    cout << " - ";
    printTime(taskPtr->getEndTime());
    cout << endl << "Location: " << taskPtr->getLocation() << endl;
    cout << "Description: " << taskPtr->getDescription() << endl;
    cout << "Priority: " << taskPtr->getPriority() << endl;
}

void Print::DisplayMenu() {
    cout << "Welcome to our Task Manager, choose what you would like to do: " << endl;
    cout << "1. View calendar: " << endl;
    cout << "2. Add a task: " << endl;
    cout << "3. Edit a task: " << endl;
    cout << "4. Change Date" << endl;
    cout << "5. Remove Task: " << endl;
    cout << "6. Quit " << endl;
}

void Print::printMonth(Month* MonthPtr) {
    cout << "---------------- " << MonthPtr->getName() << "----------------" << endl;
    cout << "------------------- " << MonthPtr->getYear
}