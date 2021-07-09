#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Viết chương trình nhập vào một số ở hệ 16, đổi số này sang hệ 10
*/
void input(string &s);
bool checkValid(string s);
int checkHexDigit(char s, char hex[]);
int solution(string s, char hex[]);
void output(int result);
int main()
{
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D','E','F'};
    string s;
    int result;
    input(s);
    result = solution(s, hex);
    output(result);
    return 0;
}
void input(string &s)
{
    getline(cin, s);
}
bool checkValid(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] < 'A' || s[i] > 'F') && (s[i] < '0' || s[i] > '9'))
            return false;
    }
    return true;
}
int checkHexDigit(char s, char hex[])
{
    int decimal;
    for (int i = 0; i < 15; i++)
    {
        if (s == hex[i])
        {
            decimal = i;
            break;
        }
    }
    return decimal;
}
int solution(string s, char hex[])
{
    if (checkValid(s))
    {
        int sum, k, convertToDecimal;
        sum = k = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            convertToDecimal = checkHexDigit(s[i], hex);
            sum += convertToDecimal * (int)pow(16, k++);
        }
        return sum;
    }
    return -1;
}
void output(int result)
{
    if (result != -1)
        cout << result;
    else
        cout << "Dao vao khong hop le!";
}
