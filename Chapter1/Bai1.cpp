// Nhập một số nguyên a,b. Xuất ra tổng 2 số nguyên vừa nhập
#include <iostream>
using namespace std;
void input(int &a, int &b);
void output(int result);
int solution(int a, int b);
int main()
{
    int a, b, result;
    input(a, b);
    result = solution(a, b);
    output(result);
    return 0;
}
void input(int &a, int &b)
{
    cin >> a >> b;
}
int solution(int a, int b)
{
    return a + b;
}
void output(int result)
{
    cout << result;
}