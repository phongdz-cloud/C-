#include <iostream>
using namespace std;
// Nhập vào 2 số nguyên a,b. Tìm nghiệm phương trình ax+b=0;
void input(int &a, int &b);
bool solution(int a, int b, float &result);
void output(int b, bool flag, float result);
int main()
{
    int a, b;
    float result;
    bool flag;
    input(a,b);
    flag = solution(a, b, result);
    output(b, flag, result);
    return 0;
}
void input(int &a, int &b)
{
    cin >> a >> b;
}
bool solution(int a, int b, float &result)
{
    if (a == 0)
        return false;
    result = (-b * 1.0) / a;
    return true;
}
void output(int b, bool flag, float result)
{
    if (flag == false)
    {
        if (b == 0)
            cout << "Phuong trinh co vo so nghiem!";
        if (b != 0)
            cout << "Phuong trinh vo nghiem!";
    }
    else
    {
        cout << result;
    }
}