#include <iostream>
using namespace std;
// Nhập số nguyên dương n. Tính S = 1/1 + 1/2 + 1/3 + 1/n
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
void output(float result)
{
    cout << result;
}
float solution(int n) a
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0) / i;
    }
    return sum;
}