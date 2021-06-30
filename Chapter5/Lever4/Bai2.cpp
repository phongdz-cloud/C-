#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào số nguyên n. Cho biết n có phải là số nguyên tố hay không?
// VD: 2,3,5,7
void input(int &n);
bool checkPrimeNumber(int n);
void output(bool flag);
int main()
{
    int n;
    bool flag;
    input(n);
    flag = checkPrimeNumber(n);
    output(flag);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
bool checkPrimeNumber(int n)
{
    if(n<2) return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void output(bool flag)
{
    if (flag == true)
    {
        cout << "n la so nguyen to";
    }
    else
        cout << "n khong la so so nguyen to";
}
