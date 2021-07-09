#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;
/*
    Cho số nguyên n nhập từ bàn phím. Viết chương trình đổi số này sang
    các hệ nhị phân, bát phân, và thập lục phân. In kết quả ra màn hình
*/
void input(int &n);
string convertToBinary(int n);
string convertToOctal(int n);
string convertToHex(int n, char hex[]);
void swap(char &a, char &b);
void reverseStr(string &s);
void output(string s);
int main()
{
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int n;
    string s;
    input(n);
    s = convertToBinary(n);
    output(s);
    s = convertToOctal(n);
    output(s);
    s = convertToHex(n, hex);
    output(s);
}
void input(int &n)
{
    cin >> n;
}
string convertToBinary(int n)
{
    string s;
    s = "";
    while (n != 0)
    {
        s += n % 2 + 48;
        n /= 2;
    }
    reverseStr(s);
    return s;
}
string convertToOctal(int n)
{
    string s;
    s = "";
    float balance;
    while (n > 7)
    {
        balance = n * 1.0 / 8;
        s += (balance - (int)balance) * 8 + 48;
        n /= 8;
    }
    s += n + 48;
    reverseStr(s);
    return s;
}
string convertToHex(int n, char hex[])
{
    string s;
    s = "";
    float balance;
    int index;
    while (n > 15)
    {
        balance = n * 1.0 / 16;
        index = (balance - (int)balance) * 16;
        s += hex[index];
        n /= 16;
    }
    s += hex[n];
    reverseStr(s);
    return s;
}
void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
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
void output(string s)
{
    cout << s << endl;
}