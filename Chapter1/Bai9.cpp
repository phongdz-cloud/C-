#include <iostream>
using namespace std;
//Nhập vào một số thực. làm tròn số thực này thành số nguyên theo nguyên tắc làm tròn thông thường
//(phần lẻ >=0.5 thì làm tròn lên)
void input(float &a);
int solution(float a);
void output(int result);
int main()
{
    float a, int result;
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
    if (a < 0 && (a + (int)a * (-1) >= -0.5))
        return (int)a + 1;
    if (a - (int)a >= 0.5)
        return (int)a + 1;
    return (int)a;
}
void output(int result)
{
    cout << result;
}