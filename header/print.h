#ifndef PRINT_H
#define PRINT_H
#include "../header/calendar.h"
// #include "../header/day.h"

class Print {
    public:
        Print();
        ~Print(); 
        // void printCalendar(Calendar cal);
        void printDay(Day* dayPtr);
        void printMonth(Month* MonthPtr);
        void printTask(Task* taskPtr);
        void printTime(Time* clock); 
        void DisplayMenu();
};

#endif