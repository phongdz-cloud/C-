#include <iostream>
#include <math.h>
using namespace std;
//Tìm ước số lẻ lớn nhất của số nguyên dương n
void input(int &n);
void output(int n);
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
int solution(int n)
{
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 != 0 && i > max)
            max = i;
    }
    return max;
}
void output(int result)
{
    cout << result;
}