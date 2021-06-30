#include <iostream>
#include <math.h>
using namespace std;
//Liệt kê các số nguyên tố nhỏ hơn n
void input(int &n);
void output(int n);
bool checkPrimeNumber(int n);
int main()
{
    int n;
    bool flag;
    input(n);
    output(n);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
bool checkPrimeNumber(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void output(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkPrimeNumber(i))
            cout << i << " ";
    }
}