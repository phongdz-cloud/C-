#include <iostream>
using namespace std;
// Nhập vào bà số nguyên h,m,s. Kiểm tra h,m,s có lập thành một bộ giờ, phút, giây hợp lệ hay không?
// Điều kiện: 0<=h<24 và 0<=m<=60, 0<=s<=60
void input(int &h, int &m, int &s);
bool solution(int h, int m, int s);
void output(bool result);
int main()
{
    int h, m, s;
    bool result;
    input(h, m, s);
    result = solution(h, m, s);
    output(result);

    return 0;
}
void input(int &h, int &m, int &s)
{
    cin >> h >> m >> s;
}
bool solution(int h, int m, int s)
{

    if (h >= 0 && s >= 0 && m >= 0)
    {
        if (h < 24 && m < 60 && s < 60)
        {
            return true;
        }
    }
    return false;
}
void output(bool result)
{
    if (result)
    {
        cout << "Hop le";
    }
    else
        cout << "Khong hop le";
}