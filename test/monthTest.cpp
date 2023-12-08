#include "gtest/gtest.h"
#include "../header/month.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(MonthTests, checkDaysInMonth1) {
    Month *aMonth = new Month("February", 2023);
    int numDays = aMonth->checkDaysInMonth();
    EXPECT_EQ(numDays, 28);
}

TEST(MonthTests, checkDaysInMonth2) {
    Month *aMonth = new Month("February", 2020);
    int numDays = aMonth->checkDaysInMonth();
    EXPECT_EQ(numDays, 29);
}

TEST(MonthTests, checkDaysInMonth3) {
    Month *aMonth = new Month("December", 2023);
    int numDays = aMonth->checkDaysInMonth();
    EXPECT_EQ(numDays, 31);
}

TEST(MonthTests, checkFirstDay1) {
    Month *aMonth = new Month("January", 2023);
    int first = aMonth->checkFirstDay();
    EXPECT_EQ(first, 1);
}

TEST(MonthTests, checkFirstDay2) {
    Month *aMonth = new Month("February", 2023);
    int first = aMonth->checkFirstDay();
    EXPECT_EQ(first, 4);
}

TEST(MonthTests, checkFirstDay3) {
    Month *aMonth = new Month("December", 2023);
    int first = aMonth->checkFirstDay();
    EXPECT_EQ(first, 6);
}

TEST(MonthTests, isLeap1) {
    Month *aMonth = new Month("February", 2023);
    bool leap = aMonth->isLeap(); 
    EXPECT_FALSE(leap); 
}

TEST(MonthTests, isLeap2) {
    Month *aMonth = new Month("February", 2021);
    bool leap = aMonth->isLeap(); 
    EXPECT_FALSE(leap); 
}

TEST(MonthTests, isLeap3) {
    Month *aMonth = new Month("February", 2020);
    bool leap = aMonth->isLeap(); 
    EXPECT_TRUE(leap); 
}

TEST(MonthTests, testGetDay) {
    Month* monthTester = new Month("January", 2024);
    EXPECT_EQ(monthTester->getDay(10)->getName(), "Wednesday");
}

TEST(MonthTests, testGetYear) {
    Month* monthTester = new Month("December", 2023);
    EXPECT_EQ(monthTester->getYear(), 2023);
}