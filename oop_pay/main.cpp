#include "time.h"

int main() {
    Time currentTime(10, 30, 45);
    currentTime.info();

    currentTime.addSeconds(120);
    currentTime.info();

    Time additionalTime(2, 15, 30);
    currentTime.addTime(additionalTime);
    currentTime.info();

    currentTime.subtractTime(additionalTime);
    currentTime.info();

    return 0;
}