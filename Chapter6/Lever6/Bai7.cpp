#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình xuất ra n phần tử đầu tiên cũa dãy fibonanci
*/
void input(int &n);
int fibonanci(int i, int &f1, int &f2);
void solution(int A[], int n);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n;
    input(n);
    solution(A, n);
    output(A, n);
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
void solution(int A[], int n)
{
    int f1, f2;
    f1 = f2 = 1;
    for (int i = 0; i < n; i++)
    {
        A[i] = fibonanci(i, f1, f2);
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
