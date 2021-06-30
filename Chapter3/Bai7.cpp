#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào số nguyên a,b,c. Tìm nghiệm phương trình ax^2 + bx +c =0
void input(int &a, int &b, int &c);
int solution(int a, int b, int c, float &x1, float &x2);
void output(float x1, float x2, int flag);
int main()
{
    int a, b, c;
    float x1, x2;
    int flag;
    input(a, b, c);
    flag = solution(a, b, c, x1, x2);
    output(x1, x2, flag);
}
void input(int &a, int &b, int &c)
{
    cin >> a >> b >> c;
}
int solution(int a, int b, int c, float &x1, float &x2)
{
    float delta = b * b - 4 * a * c;
    if (delta < 0)
        return 0;
    else
    {
        if (delta > 0)
        {
            delta = sqrt(delta);
            x1 = (-b * 1.0 + delta) / (2 * a);
            x2 = (-b * 1.0 - delta) / (2 * a);
            return 2;
        }
        else
            x1 = -(b * 1.0) / (2 * a);
    }
    return 1;
}
void output(float x1, float x2, int flag)
{
    if (flag == 0)
        cout << "Phuong trinh vo nghiem!";
    else if (flag == 1)
        cout << "Phuong trinh da cho co nghiem kep x= " << x1;
    else
        cout << "Phuong trinh da cho co 2 nghiem phan biet " << endl
             << "x1: " << x1 << endl
             << "x2: " << x2;
}
