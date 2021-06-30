#include <iostream>
using namespace std;
// Nhập vào số nguyên dương n. Tính tổng các ước số của n
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
int solution(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}