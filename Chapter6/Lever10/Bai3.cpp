#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết chương trình nhập vào một mảng ký tự (chuỗi), xuất ra chuỗi đảo ngược
*/
void input(string &s);
void reverseStr(string &s);
void ouput(string s);
int main()
{
    string s;
    input(s);
    reverseStr(s);
    ouput(s);
    return 0;
}
void input(string &s)
{
    getline(cin, s);
}
void reverseStr(string &s)
{
    int i, j;
    i = 0;
    j = s.length() - 1;
    while (j > i)
    {
        swap(s[i++], s[j--]);
    }
}
void ouput(string s)
{
    cout << s;
}
