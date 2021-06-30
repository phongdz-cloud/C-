#include <iostream>
using namespace std;
//Nhập một số thực a. Xuất ra số nguyên lớn nhất nhưng nhỏ hơn a.
//Ví dụ: a = 3.2 thì xuất 3. a=5 thì xuất 4).
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
    if (a - (int)a > 0)
        return a; // Ep ngầm về kiểu int;
    return (int)a - 1;
}
void output(int result)
{
    cout << result;
}