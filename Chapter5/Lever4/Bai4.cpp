#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào số nguyên n. Kiểm tra n có phải là số đối xứng hay không?
// VD: 121,12321
void input(int &n);
bool checkSymmetryNumber(int n);
void output(bool flag);
int main()
{
    int n;
    bool flag;
    input(n);
    flag = checkSymmetryNumber(n);
    output(flag);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
bool checkSymmetryNumber(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int temp1 = n % 10;
        n /= 10;
        sum = sum * 10 + temp1;
    }
    if (temp == sum)
        return true;
    return false;
}
void output(bool flag)
{
    if (flag == true)
    {
        cout << "n la so doi xung";
    }
    else
        cout << "n khong la so so doi xung";
}
