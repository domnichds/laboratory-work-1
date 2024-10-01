#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << "¬ведите a: ";
    cin >> a;
    cout << "¬ведите b: ";
    cin >> b;
    cout << "¬ведите c: ";
    cin >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "“реугольник существует";
    }
    else {
        cout << "“реугольник не существует";
    }
    system("Pause");
}
