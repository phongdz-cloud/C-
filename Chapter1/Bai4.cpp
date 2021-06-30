#include <iostream>
using namespace std;
//Nhập 2 số nguyên a, b. Xuất ra số lớn nhất
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
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return a;
}
void output(int result)
{
    cout << result;
}