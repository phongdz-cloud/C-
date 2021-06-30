#include <iostream>
#include <math.h>
using namespace std;
//Nhập n in ra số đầu tiên trong dãy Fibonacci
void input(int &n);
int fibonanci(int i, int &f1, int &f2);
void output(int flag);
int main()
{
    int n;
    bool flag;
    input(n);
    output(n);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
int fibonanci(int i, int &f1, int &f2)
{
    if (i == 0)
        return 0;
    if (i == 1 || i == 2)
        return 1;
    int temp = f2;
    f2 += f1;
    f1 = temp;
    return f2;
}
void output(int n)
{
    int f1, f2;
    f1 = f2 = 1;
    for (int i = 0; i < n; i++)
    {
        cout << fibonanci(i, f1, f2) << " ";
    }
}
