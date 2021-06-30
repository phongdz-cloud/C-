#include <iostream>
#include <math.h>
using namespace std;
//Nhập vào số nguyên n.Cho biết n có bao nhiêu chữ số là số nguyên tố
void input(int &n);
int findPrimeNumber(int n);
void output(int result);
bool checkPrimeNumber(int n);
int main()
{
    int n, result;
    input(n);
    result = findPrimeNumber(n);
    output(result);
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
int findPrimeNumber(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (checkPrimeNumber(n % 10) == true)
            count++;
        n /= 10;
    }
    return count;
}
void output(int result)
{
    cout << result;
}
