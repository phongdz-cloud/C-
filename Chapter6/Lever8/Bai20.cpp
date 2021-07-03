#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Viết chương trình nhập vào một mảng, trong quá trình nhập, 
    mảng được sắp xếp thứ tự luôn (tăng / giảm)
*/
void input(int A[], int &n, int &nA);
int checkIndex(int C[], int n, int x, bool &flag);
void beforeInsert(int A[], int &n, int index, int x);
void afterInsert(int A[], int &n, int index, int x);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n, nA;
    input(A, n, nA);
    output(A, nA);
    return 0;
}
void input(int A[], int &n, int &nA)
{
    int x, index;
    bool flag;
    nA = 0;
    cin >> n;
    cin >> A[nA++];
    for (int i = 1; i < n; i++)
    {
        flag = true;
        cin >> x;
        index = checkIndex(A, nA, x, flag);
        if (flag)
            afterInsert(A, nA, index, x);
        else
            beforeInsert(A, nA, index, x);
    }
}

int checkIndex(int C[], int n, int x, bool &flag)
{
    if (x < C[0])
    {
        flag = false;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (x >= C[i] && x <= C[i + 1])
            return i;
    }
    return n - 1;
}
void beforeInsert(int A[], int &n, int index, int x)
{
    for (int i = n - 1; i >= index; i--)
    {
        A[i + 1] = A[i];
    }
    A[index] = x;
    n++;
}
void afterInsert(int A[], int &n, int index, int x)
{
    for (int i = n - 1; i > index; i--)
    {
        A[i + 1] = A[i];
    }
    A[index + 1] = x;
    n++;
}

void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
