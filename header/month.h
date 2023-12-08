#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <string>
#include "../header/day.h"
class Month {
    private:
        string month;
        int month_num;
        int special_month_num;
        int year;
        int numDays;
        Day** days;


    public:
        Month(string month_name, int _year);
        ~Month();
  
        int checkDaysInMonth();
        int checkFirstDay();
        bool isLeap();
        Day* getDay(int date);
        int getYear();
        int getNumDays();
        string getMonthName();
        
};


#endif /* MONTH_H */
