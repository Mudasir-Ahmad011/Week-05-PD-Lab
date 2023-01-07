#include <iostream>
using namespace std;
main()
{
    float hour, days, workers;
    cout << "On the first line are the needed hours(0-200000): ";
    cin >> hour;
    cout << "On the second line are the days that the firm has(0-20000): ";
    cin >> days;
    cout << "On the third line are the number of all workers(0-200): ";
    cin >> workers;
    float day1 = (10 * days) / 100;
    float workingday = days - day1;
    float time1 = (workingday * 8 * workers);
    float time2 = (workers * 2 * workingday);
    float time = time1 + time2;
    float result_time = time - hour;
    float not_enough_time = hour - time;
    if (time > hour)
    {
        cout << "Yes! " << result_time << "hours left.";
    }
    if (time < hour)
    {
        cout << "not enough time " << not_enough_time << "hours needed";
    }
}