#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào số nguyên n. Cho biết n có phải là số hoàn hảo hay không?
// VD: 6,28....
void input(int &n);
bool checkPerfectNumber(int n);
void output(bool flag);
int main()
{
    int n;
    bool flag;
    input(n);
    flag = checkPerfectNumber(n);
    output(flag);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
bool checkPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    return false;
}
void output(bool flag)
{
    if (flag == true)
    {
        cout << "n la so hoan hao";
    }
    else
        cout << "n khong la so so hoan hao";
}
