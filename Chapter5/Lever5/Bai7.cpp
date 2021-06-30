#include <iostream>
#include <math.h>
using namespace std;
//Đếm xem n có bao nhiêu ước số là số nguyên tố
void input(int &n);
void output(int n);
bool checkPrimeNumber(int n);
int solution(int n);
int main()
{
    int n, result;
    input(n);
    result = solution(n);
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
int solution(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && checkPrimeNumber(i))
            count++;
    }
    return count;
}
void output(int result)
{
    cout << result;
}