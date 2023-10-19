#include "time.h"

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

void Time::info() {
    cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
}

void Time::normalizeTime() {
    int extraMinutes = seconds / 60;
    seconds %= 60;
    minutes += extraMinutes;

    int extraHours = minutes / 60;
    minutes %= 60;
    hours += extraHours;
}

void Time::addSeconds(int sec) {
    seconds += sec;
    normalizeTime();
}

void Time::subtractSeconds(int sec) {
    seconds -= sec;
    normalizeTime();
}

void Time::addTime(const Time& other) {
    hours += other.hours;
    minutes += other.minutes;
    seconds += other.seconds;
    normalizeTime();
}

void Time::subtractTime(const Time& other) {
    hours -= other.hours;
    minutes -= other.minutes;
    seconds -= other.seconds;
    normalizeTime();
}