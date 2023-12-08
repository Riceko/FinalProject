#include "gtest/gtest.h"
#include "../header/day.h"
#include "../header/task.h"
#include "../header/time.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(TaskTests, taskConstructor1) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1", startTime, endTime, "math", "class", 1);
    ASSERT_EQ(newTask->getStartTime()->getHours(),4);
}

TEST(TaskTests, taskConstructor2) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1", startTime, endTime, "math", "class", 1);
    EXPECT_EQ(newTask->getEndTime()->getHours(),5);
}

TEST(TaskTests, taskConstructor4) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1",startTime, endTime, "class", "math", 1);
    EXPECT_EQ(newTask->getLocation(), "class");
}
TEST(TaskTests, taskConstructor5) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1",startTime, endTime, "math", "class", 1);
    EXPECT_EQ(newTask->getDescription(), "class");
}

TEST(TaskTests, taskConstructor6) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1",startTime, endTime, "math", "class", 1);
    EXPECT_EQ(newTask->getPriority(), 1);
}

TEST(TaskTests, failedTaskConstructor) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1",startTime, endTime, "math", "class", 1);
    EXPECT_EQ(newTask->getPriority(), 1);
}

TEST(TaskTests, testDestructor) {
    Time *startTime = new Time(4, 30, true);
    Time *endTime = new Time(5, 30, true);
    Task *newTask = new Task("Test1",startTime, endTime, "math", "class", 1);
    EXPECT_NO_THROW(delete newTask);
}

TEST(dayTests, testDestructor) {
    Day* dayTester = new Day("Sunday");
    EXPECT_NO_THROW(delete dayTester);
}