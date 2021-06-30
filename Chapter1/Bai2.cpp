#include <iostream>
using namespace std;
//Nhập vào số nguyên n, xuất ra giá trị tuyệt đối của n
void input(int &n);
void output(int result);
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
int solution(int n)
{
    return abs(n);
}
void output(int result)
{
    cout << result;
}