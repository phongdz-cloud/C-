#include <iostream>
#include <math.h>
using namespace std;
/*
    Nhập vào ngày, tháng, năm. Hỏi từ ngày vừa nhập là ngày thứ bao nhiêu trong năm?
    (Tính khoảng cách từ ngày đầu năm đến ngày vừa nhập)
*/
void input(int &d, int &m, int &y);
void output(int result);
bool checkValid(int days[], int d, int m, int y);
bool checkLeapYear(int y);
int solution(int days[], int d, int m, bool flag);
int main()
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m, y, result;
    bool flag;
    input(d, m, y)
    flag = checkValid(days, d, m, y);
    result = solution(days, d, m, flag);
    output(result);
    return 0;
}
void input(int &d, int &m, int &y)
{
    cin >> d >> m >> y;
}
void output(int result)
{
    if (result != -1)
        cout << result;
    else
        cout << "Ngay thang nam khong hop le!";
}
int solution(int days[], int d, int m, bool flag)
{
    if (flag == true)
    {
        int count = 0;
        int i = 1;
        while (i <= 12)
        {
            if (i == m)
            {
                count += d;
                break;
            }
            count += days[i - 1];
            i++;
        }
        return count;
    }
    return -1;
}
bool checkValid(int days[], int d, int m, int y)
{
    if (y > 0 && m >= 1 && m <= 12 && d >= 1 && d <= 31)
    {
        if (checkLeapYear(y)) // năm nhuận
        {
            days[1]++;
        }
        if (d > days[m - 1])
            return false;
        return true;
    }
    return false;
}
bool checkLeapYear(int y)
{
    // Năm nhuận chia hết cho 400
    if (y % 400 == 0)
        return true;
    // Năm nhuận chia hết cho 4 nhưng không chia hết cho 100
    if (y % 4 == 0 && y % 100 != 0)
        return true;
    return false;
}
