#include <iostream>
using namespace std;

struct stTaskDuration
{
    int days;
    int hours;
    int minutes;
    float seconds;
};

stTaskDuration ReadStTaskDurationSt(){

    // Make instance from stTaskDuration class (struct)
    stTaskDuration duration;
    // Read
    cout << "Enter number of days: \n";
    cin >> duration.days;

    cout << "Enter number of hours: \n";
    cin >> duration.hours;

    cout << "Enter number of minutes: \n";
    cin >> duration.minutes;

    cout << "Enter number of seconds: " << endl;
    cin >> duration.seconds;

    return duration;
}
 