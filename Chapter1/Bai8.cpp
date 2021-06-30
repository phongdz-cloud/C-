#include <iostream>
using namespace std;
//Nhập một chữ cái. Nếu là chữ thường thì đổi sang chữ hóa, ngược lại đổi sang chữ thường.
void input(char &c);
bool solution(char &c);
void output(char c, bool result);
int main()
{
    char c;
    bool result;
    input(c);
    output(c, result);
    return 0;
}
void input(char &c)
{
    cin >> c;
}
bool solution(char &c)
{
    if (c >= 'A' && c <= 'z')
    {
        if (c >= 'A' && c <= 'Z')
            c += 32;
        else
            c -= 32;
        return true;
    }
    return false;
}
void output(char c, bool result)
{
    if (result)
        cout << c;
    else
        cout << "Khong phai ki tu chu cai";
}