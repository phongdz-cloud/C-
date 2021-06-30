#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào số nguyên n. Cho biết n có phải là số chính phương hay không?
// VD: 4,9,16
void input(int &n);
bool checkSquareNumber(int n);
void output(bool flag);
int main()
{
    int n;
    bool flag;
    input(n);
    flag = checkSquareNumber(n);
    output(flag);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
bool checkSquareNumber(int n)
{
    int temp = sqrt(n);
    if (temp * temp == n)
        return true;
    return false;
}
void output(bool flag)
{
    if (flag == true)
    {
        cout << "n la so chinh phuong";
    }
    else
        cout << "N khong la so chinh phuong";
}
