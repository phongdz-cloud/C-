#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
  Viết chương trình kiểm tra các phần tử trong một mảng có lập thành cấp 
  số cộng hay không.
*/
void input(int A[], int &n);
bool checkValid(int n);
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
bool checkValid(int n)
{
    return n >= 2 ? true : false;
}
bool solution(int A[], int n)
{
    if (checkValid(n))
    {
        int k;
        k = A[1] - A[0];
        for (int i = 1; i < n - 1; i++)
        {
            if (A[i + 1] - A[i] != k)
                return false;
        }
        return true;
    }
    return false;
}
void output(bool result)
{
    if (result)
        cout << "Lap thanh mot cap so cong";
    else
        cout << "Khong lap thanh mot cap so cong";
}
