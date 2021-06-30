#include <iostream>
using namespace std;
//Nhập vào một năm. Cho biết năm đó có phải năm nhuận hay không
void input(int &year);
bool solution(int year);
void output(bool result);
int main()
{
    int year;
    bool result;
    input(year);
    result = solution(year);
    output(result);
    return 0;
}
void input(int &year)
{
    cin >> year;
}
bool solution(int year)
{
    // Năm nhuận chia hết cho 500
    if (year % 400 == 0)
        return true;
    // Năm nhuận chia hết cho 4 nhưng không chia hết cho 100
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    return false;
}
void output(bool result)
{
    if (result)
    {
        cout << "Nam nhuan";
    }
    else
        cout << "Khong la nam nhuan";
}