// Implementation of a mini project in C++
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);
    tm *lt = localtime(&now);

    int hour = lt->tm_hour;
    int minute = lt->tm_min;
    int second = lt->tm_sec;

    while (true) {
        system("cls"); 

        cout << hour << ":" << minute << ":" << second << endl;

        second++;
        if (second == 60) {
            second = 0;
            minute++;
            if (minute == 60) {
                minute = 0;
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }

        for (int i = 0; i < 1000000000; i++);
    }

    return 0;
}