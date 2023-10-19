#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();

    Time(int h, int m, int s);

    void info();

    void normalizeTime();

    void addSeconds(int sec);

    void subtractSeconds(int sec);

    void addTime(const Time& other);

    void subtractTime(const Time& other);
};

#endif