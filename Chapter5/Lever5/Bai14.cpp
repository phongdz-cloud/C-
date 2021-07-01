#include <iostream>
#include <math.h>
using namespace std;
// Nhập 2 số nguyên dương n và k (k<=n). Tính nCk = n!/(k!*(n-k)!)
void input(int &n, int &k);
void output(double result);
bool checkValid(int n, int k);
double solution(int n, int k, bool flag);
int main()
{
    int n, k;
    double result;
    bool flag;
    input(n, k);
    flag = checkValid(n, k);
    result = solution(n, k, flag);
    output(result);
    return 0;
}
void input(int &n, int &k)
{
    cin >> n >> k;
}
bool checkValid(int n, int k)
{
    if (n >= k)
        return true;
    return false;
}
double solution(int n, int k, bool flag)
{
    if (flag == true)
    {
        double result;
        result = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i <= k)
            {
                result *= (1.0) / i;
            }
            if (i > n - k)
                result *= i * (1.0);
        }
        return result;
    }
    return -1;
}
void output(double result)
{
    if (result != -1)
    {
        cout << result;
    }
    else
        cout << "Khong tinh duoc!";
}
