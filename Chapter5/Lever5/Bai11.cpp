#include <iostream>
#include <math.h>
using namespace std;
// Nhập số nguyên dương n. Tính S = 1! + 2! + ... + n!
void input(int &n);
void output(int result);
int factorial(int n);
int solution(int n);
int main()
{
    int n, result;
    input(n);
    result = solution(n);
    output(result);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
int factorial(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}
int solution(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += factorial(i);
    }
    return result;
}
void output(int result)
{
    cout << result;
}
