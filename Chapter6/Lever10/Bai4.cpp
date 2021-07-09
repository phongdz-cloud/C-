#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết chương trình đếm số từ trong một chuỗi đa nhập từ bàn phím
*/
void input(string &s);
void ouput(int result);
int countWords(string s);
void removeSpace(string &s);
int main()
{
    string s;
    int result;
    input(s);
    removeSpace(s);
    result = countWords(s);
    ouput(result);
    return 0;
}

void input(string &s)
{
    getline(cin, s);
}
int countWords(string s)
{
    int count = 0;
    if (s.length() == 0)
        return count;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            count++;
    }
    return count + 1;
}
void removeSpace(string &s)
{
    while (s[0] == ' ')
        s.erase(0, 1);
    while (s.length() != 0 && s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    for (int i = 0; i < s.length()-1; i++)
    {
        if ((s[i] == ' ' && s[i + 1] == ' ') && i != s.length())
            s.erase(i--, 1);
    }
}
void ouput(int result)
{
    cout << result;
}
