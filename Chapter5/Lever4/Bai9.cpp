#include <iostream>
#include <math.h>
using namespace std;
//Kiểm tra các chữ số n có giảm dần hay không
void input(int &n);
bool findDecreaseNumber(int n);
void output(bool flag);
int main()
{
    int n;
    bool flag;
    input(n);
    flag = findDecreaseNumber(n);
    output(flag);
    return 0;
}
void input(int &n)
{
    cin >> n;
}

bool findDecreaseNumber(int n)
{
    int temp;
    temp = n % 10;
    while (n > 0)
    {
        n /= 10;
        if (temp > n % 10 && n != 0)
            return false;
        temp = n % 10;
    }
    return true;
}
void output(bool flag)
{
    if (flag == true)
    {
        cout << "Cac chu so giam dan";
    }
    else
        cout << "Cac chu so khong giam dan";
}
