#include <iostream>
using namespace std;
// Tìm ước chung lớn nhất của 2 số nguyên dương a và b nhập từ bàn phím//note
void input(int &a, int &b);
void output(int result);
int solution(int a, int b);
int main()
{
    int a, b;
    int gcd;
    input(a, b);
    gcd = solution(a, b);
    output(gcd);
    return 0;
}
void input(int &a, int &b)
{
    cin >> a >> b;
}
void output(int result)
{
    cout << result; //
}
int solution(int a, int b)
{
    int gcd = 1;
    while (a != b)
    {
        if (a > b)
            a -= b;
        if (a < b)
            b -= a;
        gcd = a;
    }
    return gcd;
}
