#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

double Sum(double x, int n, int maxi, double shag)
{
    if (n > maxi)
    {
        return 0; 
    }
    double shags = shag / (2 * n + 1); 
    cout << "Шаг " << n << " значение " << shags << endl; 
    return shags + Sum(x, n + 1, maxi, shag * pow((x - 1) / (x + 1), 2));
}

int main()
{
    setlocale(LC_ALL, "RUS");
    double x;
    int maxi;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите количество шагов рекурсии: ";
    cin >> maxi;
    double shag = (x - 1) / (x + 1);
    double res = Sum(x, 1, maxi, shag); 
    cout << "Результат суммы: " << res << endl;
    return 0;
}
