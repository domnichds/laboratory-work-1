#include <iostream>

using namespace std;

int main()
{
    int s_hours, s_minutes, s_seconds;
    int en_hours, en_minutes, en_seconds;
    int r_hours, r_minutes, r_seconds, result;
    int start_s, end_s;
    setlocale(LC_ALL, "Russian");
    cout << "������� ����� ������" << endl;
    cout << "����: ";
    cin >> s_hours;
    cout << "������: ";
    cin >> s_minutes;
    cout << "�������: ";
    cin >> s_seconds;
    cout << "������� ����� ���������" << endl;
    cout << "����: ";
    cin >> en_hours;
    cout << "������: ";
    cin >> en_minutes;
    cout << "�������: ";
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
        cout << r_hours << " �, " << r_minutes << " �, " << r_seconds << " �";
    }
    else {
        cout << "������ �����!";
    }
}
