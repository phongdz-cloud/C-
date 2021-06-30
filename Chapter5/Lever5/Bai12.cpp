#include <iostream>
#include <math.h>
using namespace std;
// Nhập số nguyên dương n. Tính S = 1 + (1+2)/2! + (1+2+3)/3! + ... + (1+2+3 + ... +n)/n!
void input(int &n);
void output(float result);
float solution(int n);
int main()
{
    int n;
    float result;
    input(n);
    result = solution(n);
    output(result);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
float solution(int n)
{
    float result = 0;
    int sum = 0;
    float mul = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        mul *= (1.0) / i;
        result += (sum)*mul;
    }
    return result;
}
void output(float result)
{
    cout << result;
}
