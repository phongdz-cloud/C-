#include <iostream>
using namespace std;
//Nhập 3 số nguyên a,b,c. Tìm số có giá trị nhỏ nhất (min)
void input(int &a, int &b, int &c);
int solution(int a, int b, int c);
void output(int result);
int main()
{
    int a, b, c, result;
    input(a, b, c);
    result = solution(a, b, c);
    output(result);
    return 0;
}
void input(int &a, int &b, int &c)
{
    cin >> a >> b >> c;
}
int solution(int a, int b, int c)
{
    int min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    return min;
}
void output(int result)
{
    cout << result;
}