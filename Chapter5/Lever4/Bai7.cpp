#include <iostream>
#include <math.h>
using namespace std;
//Kiểm tra xem n vừa nhập có phải gồm toàn các chữ số chẵn không?
void input(int &n);
bool findEvenNumber(int n);
void output(bool flag);
int main()
{
    int n;
    bool flag;
    input(n);
    flag = findEvenNumber(n);
    output(flag);
    return 0;
}
void input(int &n)
{
    cin >> n;
}

bool findEvenNumber(int n)
{
    while(n > 0)
    {
        if(n % 2 !=0) return false;
        n/=10;
    }
    return true;
}
void output(bool flag)
{
    if(flag == true)
    {
        cout<<"N vua nhap deu gom cac chu so chan";
    }
    else cout<<"N vua nhap khong gom cac chu so chan";
}
