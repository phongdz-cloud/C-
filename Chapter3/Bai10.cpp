#include <iostream>
using namespace std;
/*
Nhập vào giờ, phút, giây. Cho biết một giây sau đó là mấy giờ, mấy phút, mấy giây
*/
void input(int &h, int &m, int &s);
bool checkTime(int h, int m, int s);
void solution(int &h, int &m, int &s,bool flag);
void output(int h, int m, int s, int flag);
int main()
{
    int h, m, s;
    bool flag;
    input(h, m, s);
    flag = checkTime(h,m,s);
    solution(h,m,s,flag);
    output(h, m, s, flag);
}
void input(int &h, int &m, int &s)
{
    cin >> h >> m >> s;
}
bool checkTime(int h, int m, int s)
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
void solution(int &h, int &m, int &s, bool flag)
{
    if (flag == true)
    {
        if (s == 59)
        {
            s = 0;
            if (m == 59)
            {
                m = 0;
                if (h == 23)
                {
                    h = 0;
                }
                else
                    h++;
            }
            else
                m++;
        }
        else
            s++;
    }
}
void output(int h, int m, int s, int flag)
{
    if (flag == false)
    {
        cout << "Gio phut giay khong hop le";
    }
    else
        cout << h << " " << m << " " << s;
}
