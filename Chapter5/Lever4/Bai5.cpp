#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào số nguyên n.Tìm chữ số lớn nhất của n?
void input(int &n);
int findMaxNumber(int n);
void output(int result);
int main()
{
    int n, result;
    input(n);
    result = findMaxNumber(n);
    output(result);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
int findMaxNumber(int n)
{
    int max = 0;
    while (n > 0)
    {
        if (n % 10 > max)
        {
            max = n % 10;
        }
        n /= 10;
    }
    return max;
}
void output(int result)
{
    cout << result;
}
