#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào 4 số nguyên a, b, c, d. Tính a/b + c/d. Yêu cầu xuất ra dạng phân số tối giản.
void input(int &a, int &b, int &c, int &d);
void output(int numerator, int demoninator, bool flag);
bool solution(int a, int b, int c, int d, int &numerator, int &demoninator);
int gcd(int a, int b);
int main()
{
    int a, b, c, d, numerator, denominator;
    bool flag;
    input(a, b, c, d);
    flag = solution(a, b, c, d, numerator, denominator);
    output(numerator, denominator, flag);
    return 0;
}
void input(int &a, int &b, int &c, int &d)
{
    cin >> a >> b >> c >> d;
}
void output(int numerator, int demoninator, bool flag)
{
    if (flag == true)
        cout << numerator << "/" << demoninator;
    else
        cout << "Khong chia duoc!";
}
bool solution(int a, int b, int c, int d, int &numerator, int &demoninator)
{
    if (b == 0 || d == 0)
        return false;
    int gcf;
    numerator = a * d + c * b;
    demoninator = b * d;
    gcf = gcd(numerator, demoninator);
    numerator /= gcf;
    demoninator /= gcf;
    return true;
}
int gcd(int a, int b)
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
