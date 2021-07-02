#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x,y] cho truóc
   (x,y là các số nguyên)
*/
void input(int A[], int &n, int &x, int &y);
bool checkValid(int n, int x, int y);
bool solution(int A[], int B[], int n, int &nB, int x, int y);
void output(int B[], int nB, bool flag);
int main()
{
    int A[SIZE], B[SIZE];
    int n, nB, x, y;
    input(A, n, x, y);
    bool flag = solution(A, B, n, nB, x, y);
    output(B, nB, flag);
    return 0;
}
void input(int A[], int &n, int &x, int &y)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> x >> y;
}
bool checkValid(int n, int x, int y)
{
    if (x >= n || x >= y)
        return false;
    return true;
}
bool solution(int A[], int B[], int n, int &nB, int x, int y)
{
    if (checkValid(n, x, y))
    {
        nB = 0;
        int i;
        i = x;
        while (i < n)
        {
            if (A[i] % 2 == 0)
                B[nB++] = A[i];
            if (i > y)
                break;
            i++;
        }
        return true;
    }

    return false;
}
void output(int B[], int nB, bool flag)
{
    if (flag == true)
    {
        for (int i = 0; i < nB; i++)
        {
            cout << B[i] << " ";
        }
    }
    else
        cout << "Dau vao khong hop le!";
}
