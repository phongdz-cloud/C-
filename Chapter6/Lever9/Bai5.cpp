#include <iostream>
#define SIZE 100
using namespace std;
/*
  Cho mảng 1 chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị trong mảng
  có ít nhất 1 lân cận trái dấu nó
*/
void input(float A[], int &n);
bool checkValid(float a, float b);
void solution(float A[], float B[], int nA, int &nB);
void output(float A[], int n);
int main()
{
    float A[SIZE], B[SIZE];
    int nA, nB;
    input(A, nA);
    solution(A, B, nA, nB);
    output(B, nB);
    return 0;
}

void input(float A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
bool checkValid(float a, float b)
{
    return (a < 0 && b > 0) || (a > 0 && b < 0);
}
void solution(float A[], float B[], int nA, int &nB)
{
    if (nA > 1)
    {
        nB = 0;
        if (checkValid(A[0], A[1]))
            B[nB++] = A[0];
        for (int i = 1; i < nA - 1; i++)
        {
            if (checkValid(A[i], A[i - 1]) || checkValid(A[i], A[i + 1]))
                B[nB++] = A[i];
        }
        if (checkValid(A[nA - 1], A[nA - 2]))
            B[nB++] = A[nA - 1];
    }
}
void output(float A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
