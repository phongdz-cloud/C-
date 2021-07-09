#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết chương trình kiểm tra một chuỗi có phải là chuỗi con
    của chuỗi kia hay không
*/
void input(string &s1, string &s2);
bool solution(string s1, string s2);
void ouput(bool result);
int main()
{
    string s1, s2;
    bool result;
    input(s1, s2);
    result = solution(s1, s2);
    ouput(result);
}
void swap(string &s1, string &s2)
{
    string temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
}

void input(string &s1, string &s2)
{
    getline(cin, s1);
    getline(cin, s2);
}
bool solution(string s1, string s2)
{
    if (s1.length() > s2.length())
        swap(s1, s2);
    int k;
    k = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (k == s1.length())
            return true;
        if (s2[i] == s1[k])
            k++;
        else
            k = 0;
    }
    return k == s1.length();
}
void ouput(bool result)
{
    if (result)
        cout << "Chuoi nay nam trong chuoi kia";
    else
        cout << "Chuoi nay khong nam trong chuoi kia";
}
