#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Viết chương trình kiểm tra các phần tử trong một có lập thành một dãy hình sin
  hay không
*/
void input(int A[], int &n);
bool solution(int A[], int n);
void output(bool result);
int main()
{
    int A[SIZE];
    int n;
    bool flag;
    input(A, n);
    flag = solution(A, n);
    output(flag);
    return 0;
}
void input(int A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
bool solution(int A[], int n)
{
    double result;
    for (int i = 0; i < n; i++)
    {
        result = sin(A[i]);
        if (result < -1 || result > 1)
            return false;
    }
    return true;
}
void output(bool result)
{
    if (result)
        cout << "Lap thanh mot day hinh sin";
    else
        cout << "Khong lap thanh mot day hinh sin";
}
