#include <iostream>
#include <math.h>
using namespace std;
//Kiểm tra các chữ số n có tăng dần hay không
void input(int &n);
bool findAscendingNumber(int n);
void output(bool flag);
int main()
{
    int n;
    bool flag;
    input(n);
    flag = findAscendingNumber(n);
    output(flag);
    return 0;
}
void input(int &n)
{
    cin >> n;
}

bool findAscendingNumber(int n)
{
    int temp;
    temp = n % 10;
    while (n > 0)
    {
        n /= 10;
        if (temp < n % 10)
            return false;
        temp = n % 10;
    }
    return true;
}
void output(bool flag)
{
    if (flag == true)
    {
        cout << "Cac chu so tang dan";
    }
    else
        cout << "Cac chu so khong tang dan";
}
