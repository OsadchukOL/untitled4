#include <iostream>
#include "time.h"
using namespace std;

// int main() {
//     const int n = 10;
//     int mass[n];
//     int mn, mx;
//
//     srand(time(NULL));
//
//     cout << "Massiv: ";
//     for (int i = 0; i < n; i++) {
//         mass[i] = 10 + rand() % (20 - 10);
//         cout << mass[i] << " ";
//     }
//     cout << endl;
//
//     mn = mass[0];
//     mx = mass[0];
//     for (int i = 1; i < n; i++) {
//         if (mass[i] > mx) mx = mass[i];
//         if (mass[i] < mn) mn = mass[i];
//     }
//
//     cout << "Minimum: " << mn << ", Maksimum: " << mx << endl;
// }

int main() {
    const int n = 10;
    int mass[n];
    int a, b, x, sum = 0;

    srand(time(NULL));

    cout << "Vvedi start diapazona:\n";
    cin >> a;
    cout << "Vvedi konec diapazona:\n";
    cin >> b;
    cout << "Vvedi chislo:\n";
    cin >> x;

    cout << "Massiv: ";
    for (int i = 0; i < n; i++) {
        mass[i] = a + rand() % (b - a);
        cout << mass[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (mass[i] < x) {
            sum = sum + mass[i];
        }
    }

    cout << "Summa: " << sum << endl;
}
