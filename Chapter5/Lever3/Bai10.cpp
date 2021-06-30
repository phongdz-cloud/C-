#include <iostream>
using namespace std;
// Nhập 3 số nguyên a, b,  và n với a,b <n. Tính tổng các số nguyên dương nhỏ hơn n chia hết cho a nhưng không
// chia hết cho b
void input(int &a, int &b, int &n);
bool flagCheckNumber(int a, int b, int n);
int solution(int a, int b, int n);
void output(int result, bool flag);
int main()
{
    int a, b, n, result;
    input(a, b, n);
    bool flag;
    flag = flagCheckNumber(a, b, n);
    result = solution(a, b, n);
    output(result, flag);
    return 0;
}
void input(int &a, int &b, int &n)
{
    cin >> a >> b >> n;
}
bool flagCheckNumber(int a, int b, int n)
{
    if (a < n && b < n)
        return true;
    return false;
}
int solution(int a, int b, int n)
{
    int sum = 0;
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = sum + i;
        if (temp % a == 0 && temp % b != 0)
        {
            sum += i;
        }
    }
    return sum;
}
void output(int result, bool flag)
{
    if (flag == false)
    {
        cout << "A hoac B lon hon N";
    }
    else
        cout << result;
}
