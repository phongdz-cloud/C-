#include <iostream>
#include <math.h>
using namespace std;
//Liệt kê các số hoàn hảo nhỏ hơn n
void input(int &n);
void output(int n);
bool checkPerfectNumber(int n);
int main()
{
    int n;
    input(n);
    output(n);
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

void output(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (checkPerfectNumber(i))
            cout << i << " ";
    }
}