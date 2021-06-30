#include <iostream>
using namespace std;
// Nhập vào số nguyên dương n. Tính tổng các chữ số của n
void input(int &n);
void output(int result);
int solution(int n);
int main()
{
    int n;
    int result;
    input(n);
    result = solution(n);
    output(result);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
void output(int result)
{
    cout << result;
}
int solution(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n /= 10;
        sum += temp;
    }
    return sum;
}