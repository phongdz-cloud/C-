#include <iostream>
#include <math.h>
using namespace std;
// Nhập số nguyên dương n, số thực x (x>0). Tính sqrt(x+(sqrt(x + ...sqrt(x))))
void input(int &n, float &x);
float solution(int n, int x, bool flag);
bool checkValid(int n, int k);
void output(float result);
int main()
{
    int n;
    float x, result;
    bool flag;
    input(n, x);
    flag = checkValid(n, x);
    result = solution(n, x, flag);
    output(result);
    return 0;
}
void input(int &n, float &x)
{
    cin >> n >> x;
}
float solution(int n, int x, bool flag)
{
    if (flag == true)
    {
        float temp, sum;
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            temp = sum + x;
            sum = sqrt(temp);
        }
        return sum;
    }
    return -1;
}
bool checkValid(int n, int k)
{
    if (n > 0 && k > 0)
        return true;
    return false;
}
void output(float result)
{
    if (result != -1)
    {
        cout << result;
    }
    else
        cout << "Khong tinh duoc!";
}
