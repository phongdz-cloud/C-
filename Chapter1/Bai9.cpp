#include <iostream>
using namespace std;
//Nhập vào một số thực. làm tròn số thực này thành số nguyên theo nguyên tắc làm tròn thông thường
//(phần lẻ >=0.5 thì làm tròn lên)
void input(float &a);
int solution(float a);
void output(int result);
int main()
{
    float a;
    int result;
    input(a);
    result = solution(a);
    output(result);
    return 0;
}
void input(float &a)
{
    cin >> a;
}
int solution(float a)
{
    int b = (int)a;
    if (a < 0 && (a + b * (-1) < -0.5))
        return (b - 1;
    if (a - b >= 0.5)
        return b + 1;
    return b;
}
void output(int result)
{
    cout << result;
}