#include <iostream>
#include <math.h>
using namespace std;
//Đếm số lượng số hoàn hảo nhỏ hơn n
void input(int &n);
void output(int result);
bool checkPerfectNumber(int n);
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
int solution(int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (checkPerfectNumber(i))
        {
            count++;
        }
    }
    return count;
}
void output(int result)
{
    cout << result;
}