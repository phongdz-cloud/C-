#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Nhập vào một mảng có n số nguyên. Xuất ra mảng vừa nhập
*/
void input(int A[], int &n);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n;
    input(A, n);
    output(A, n);
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
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
