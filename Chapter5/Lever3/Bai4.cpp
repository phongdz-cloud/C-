#include <iostream>
using namespace std;
// Nhập số nguyên dương n. Tính S = 1*2*3*n!//note
void input(int &n);
void output(int result);
int solution(int n);
int main()
{
    int n;
    int result;
    input(n);
    result = solution(n);
    output(result);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
void output(int result)
{
    cout << result;
}
int solution(int n) a
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
