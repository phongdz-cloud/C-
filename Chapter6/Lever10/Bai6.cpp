#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết chương trình tính tổng các ký tự số có trong chuỗi
*/
void input(string &s);
int solution(string s);
void ouput(int result);
int main()
{
    string s;
    int result;
    input(s);
    result = solution(s);
    ouput(result);
}

void input(string &s)
{
    getline(cin, s);
}
int solution(string s)
{
    int sum, temp;
    bool flag;
    temp = sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            temp = temp * 10 + s[i] - 48;
            if (s[i - 1] == '-')
                flag = true;
        }
        else
        {
            if (temp != 0)
            {
                if (flag)
                    sum += (-1) * temp;
                else
                    sum += temp;
                flag = false;
                temp = 0;
            }
        }
    }
    if (flag)
        sum += (-1) * temp;
    else
        sum += temp;
    return sum;
}
void ouput(int result)
{
    cout << result;
}
