#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết chương trình đổi chữ cái đầu tiên của mỗi từ trong một chuỗi thành chứ hoa
*/
void input(string &s1);
void standard(string &s);
void output(string s1);
int main()
{
    string s1;
    input(s1);
    standard(s1);
    output(s1);
    return 0;
}
void input(string &s1)
{
    getline(cin, s1);
}
void standard(string &s)
{
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    for (int i = 1; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') && s[i - 1] == ' ')
        {
            s[i] -= 32;
        }
    }
}
void output(string s1)
{
    cout << s1;
}
