#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết hàm trích ra n ký tự đầu tiên/ cuối cùng bắt đầu từ vị trí pos
*/
void input(string &s, int &n, int &p);
string subStr(int n, int p, string s);
void ouput(string s);
int main()
{
    string s, s1;
    int n, p;
    input(s, n, p);
    s1 = subStr(n, p, s);
    ouput(s1);
    return 0;
}

void input(string &s, int &n, int &p)
{
    getline(cin, s);
    cin >> p >> n;
}
bool checkPosition(int n, int p, string s)
{
    if (p < 0 && n < 0 && p >= s.length())
        return false;
    return true;
}
string subStr(int n, int p, string s)
{
    if (checkPosition(n, p, s))
    {
        string s1 = "";
        int count = 0;
        for (int i = p; i < s.length(); i++)
        {
            if (count != n)
            {
                s1 += s[i];
                count++;
            }
        }
        return s1;
    }
    return "";
}
void ouput(string s)
{
    cout << s;
}
