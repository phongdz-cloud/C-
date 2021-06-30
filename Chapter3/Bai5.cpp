#include <iostream>
using namespace std;
// Nhập 4 số thực a,b,c,d. Tìm số có giá trị lớn nhất
void input(int &a, int &b, int &c, int &d);
void output(int result);
int solution(int a, int b, int c, int d);
int main()
{
    int a, b, c, d, result;
    input(a, b, c, d);
    result = solution(a, b, c, d);
    output(result);
    return 0;
}
void input(int &a, int &b, int &c, int &d)
{
    cin >> a >> b >> c >> d;
}
void output(int result)
{
    cout << result;
}
int solution(int a, int b, int c, int d)
{
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;
    return max;
}