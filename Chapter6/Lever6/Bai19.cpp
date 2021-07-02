#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
   Hay liệt kê các số trong mảng 1 chiều các số thực thuộc đoạn [x,y] cho trước
*/
void input(float A[], int &n, int &x, int &y);
bool checkValid(int n, int x, int y);
bool solution(float A[], float B[], int n, int &nB, int x, int y);
void output(float B[], int nB, bool flag);
int main()
{
    float A[SIZE], B[SIZE];
    int n, nB, x, y;
    input(A, n, x, y);
    bool flag = solution(A, B, n, nB, x, y);
    output(B, nB, flag);
    return 0;
}
void input(float A[], int &n, int &x, int &y)
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
bool solution(float A[], float B[], int n, int &nB, int x, int y)
{
    if (checkValid(n, x, y))
    {
        nB = 0;
        int i;
        i = x;
        while (i < n)
        {
            B[nB++] = A[i++];
            if (i > y)
                break;
        }
        return true;
    }

    return false;
}
void output(float B[], int nB, bool flag)
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
