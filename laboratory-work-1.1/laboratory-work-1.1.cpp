#include <iostream>

using namespace std;

int main()
{
    int s_hours, s_minutes, s_seconds;
    int en_hours, en_minutes, en_seconds;
    int r_hours, r_minutes, r_seconds, result;
    int start_s, end_s;
    setlocale(LC_ALL, "Russian");
    cout << "Введите время начала" << endl;
    cout << "Часы: ";
    cin >> s_hours;
    cout << "Минуты: ";
    cin >> s_minutes;
    cout << "Секунды: ";
    cin >> s_seconds;
    cout << "Введите время окончания" << endl;
    cout << "Часы: ";
    cin >> en_hours;
    cout << "Минуты: ";
    cin >> en_minutes;
    cout << "Секунды: ";
    cin >> en_seconds;
    start_s = s_hours * 3600 + s_minutes * 60 + s_seconds;
    end_s = en_hours * 3600 + en_minutes * 60 + en_seconds;
    if (end_s >= start_s) {
        result = end_s - start_s;
        r_hours = result / 3600;
        result = result - r_hours * 3600;
        r_minutes = result / 60;
        result = result - r_minutes * 60;
        r_seconds = result;
        cout << r_hours << " ч, " << r_minutes << " м, " << r_seconds << " с";
    }
    else {
        cout << "Ошибка ввода!";
    }
}
