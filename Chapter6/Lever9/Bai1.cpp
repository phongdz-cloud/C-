#include <iostream>
#define SIZE 100
using namespace std;
/*
    Cho mảng số nguyên A. Tạo ra 2 mảng B va C theo quy tắc: mảng B gồm
    các phần tử dương hoặc bằng 0 của A và mảng C gồm các phần tử âm của A
*/
void input(int A[], int &nA);
bool checkValid(int n);
void solution(int A[], int B[], int C[], int nA, int &nB, int &nC);
void output(int A[], int n);
int main()
{
    int A[SIZE], B[SIZE], C[SIZE];
    int nA, nB, nC;
    input(A, nA);
    solution(A, B, C, nA, nB, nC);
    output(B, nB);
    output(C, nC);
    return 0;
}
void input(int A[], int &nA)
{
    cin >> nA;
    for (int i = 0; i < nA; i++)
    {
        cin >> A[i];
    }
}
bool checkValid(int n)
{
    return n >= 0 ? true : false;
}
void solution(int A[], int B[], int C[], int nA, int &nB, int &nC)
{
    nB = nC = 0;
    for (int i = 0; i < nA; i++)
    {
        if (checkValid(A[i]))
            B[nB++] = A[i];
        else
            C[nC++] = A[i];
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
