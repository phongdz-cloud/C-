#include <iostream>
#include <math.h>
using namespace std;
//Liệt kê các số chính phương nhỏ hơn n
void input(int &n);
void output(int n);
bool checkSquareNumber(int n);
int main()
{
    int n;
    input(n);
    output(n);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
bool checkSquareNumber(int n)
{
    int temp = sqrt(n);
    if (temp * temp == n)
        return true;
    return false;
}

void output(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (checkSquareNumber(i))
            cout << i << " ";
    }
}