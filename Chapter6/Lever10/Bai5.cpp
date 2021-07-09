#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết chương trình xóa bỏ khoảng trắng thừa trong một chuỗi
*/
void input(string &s);
void ouput(string s);
void removeSpace(string &s);
int main()
{
    string s;
    int result;
    input(s);
    removeSpace(s);
    ouput(s);
    return 0;
}

void input(string &s)
{
    getline(cin, s);
}
void removeSpace(string &s)
{
    while (s[0] == ' ')
        s.erase(0, 1);
    while (s.length() != 0 && s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
            s.erase(i--, 1);
    }
}
void ouput(string s)
{
    cout << s;
}
