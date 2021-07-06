#include <iostream>
#define SIZE 100
using namespace std;
/*
  Hãy liệt kê các giá trị trong mảng thỏa điều kiện
  lớn hơn giá trị tuyệt đối của giá trị đứng liền sau nó

*/
void input(int A[], int &n);
bool checkValue(int a, int b);
void solution(int A[], int B[], int nA, int &nB);
void output(int A[], int n);
int main()
{
    int A[SIZE], B[SIZE];
    int nA, nB;
    input(A, nA);
    solution(A, B, nA, nB);
    output(B, nB);
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
bool checkValue(int a, int b)
{
    return a > b ? true : false;
}
void solution(int A[], int B[], int nA, int &nB)
{
    nB = 0;
    for (int i = 0; i < nA - 1; i++)
    {
        if (checkValue(A[i], abs(A[i + 1])))
            B[nB++] = A[i];
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
