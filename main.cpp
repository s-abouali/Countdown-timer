#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int hours, minutes, seconds;

    cout << "===== Countdown Timer =====\n";

    cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter seconds: ";
    cin >> seconds;

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;

    while (totalSeconds >= 0) {
        int h = totalSeconds / 3600;
        int m = (totalSeconds % 3600) / 60;
        int s = totalSeconds % 60;

        cout << "\rTime Remaining: ";

        if (h < 10) cout << "0";
        cout << h << ":";

        if (m < 10) cout << "0";
        cout << m << ":";

        if (s < 10) cout << "0";
        cout << s << flush;

        this_thread::sleep_for(chrono::seconds(1));
        totalSeconds--;
    }

    cout << "\n\nTime's up!\n";

    return 0;
}