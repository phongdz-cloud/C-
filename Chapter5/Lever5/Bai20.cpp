#include <iostream>
#include <math.h>
using namespace std;
/*
    Phân tích n thành các thừa số nguyên tố
*/
bool checkPrimeNumber(int n);
void input(int &n);
void solution(int n);
void output(int n);
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
void solution(int n)
{
    int i = 2;
    while (n > 1)
    {
        if (n % i == 0 && checkPrimeNumber(i))
        {
            n /= i;
            cout << i << " ";
        }
        else
            i++;
    }
}
void output(int n)
{
    solution(n);
}
