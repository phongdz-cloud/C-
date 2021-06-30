#include <iostream>
#include <math.h>
using namespace std;
// Nhập số nguyên n và số thực x Tính S = 1 + x/1 + x^2/2! + ... + x^n/n!
void input(int &n, double &x);
void output(double result);
double solution(int n, double x);
int main()
{
    int n;
    double result, x;
    input(n, x);
    result = solution(n, x);
    output(result);
    return 0;
}
void input(int &n, double &x)
{
    cin >> n >> x;
}
double solution(int n, double x)
{
    double result = 1;
    double numerator = 1;
    double mul = 1;
    for (int i = 1; i <= n; i++)
    {
        numerator *= (1.0) / x;
        mul *= (1.0) / i;
        result += mul * ((1.0) / numerator);
    }
    return result;
}
void output(double result)
{
    cout << result;
}
