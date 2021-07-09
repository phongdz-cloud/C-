#include <iostream>
#include <math.h>
#define SIZE 20
using namespace std;
/*
    Cho ma trận vuông A[20][20], có kích thước N. Viết chương trình sắp xếp lại
    ma trận tăng dần theo dòng và cột
*/
void input(int A[][SIZE], int &n);
void swap(int &a, int &b);
void sortArray(int B[], int nB);
void matrixToArray(int A[][SIZE], int B[], int n, int &nB);
void arrayToMatrix(int A[][SIZE], int B[], int n);
void solution(int A[][SIZE], int B[], int n, int &nB);
void sortMatrix(int A[][SIZE], int i, int j, int n);
void solution(int A[][SIZE], int n);
void output(int A[][SIZE], int n);
int main()
{
    int A[SIZE][SIZE], B[SIZE * SIZE];
    int n, nB;
    input(A, n);
    solution(A, B, n, nB);
    output(A, n);
    return 0;
}
void input(int A[][SIZE], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void sortArray(int B[], int nB)
{
    for (int i = 0; i < nB; i++)
    {
        for (int j = i + 1; j < nB; j++)
        {
            if (B[i] > B[j])
                swap(B[i], B[j]);
        }
    }
}
void matrixToArray(int A[][SIZE], int B[], int n, int &nB)
{
    nB = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[nB++] = A[i][j];
        }
    }
}
void arrayToMatrix(int A[][SIZE], int B[], int n)
{
    int k;
    k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            A[i][j] = B[k++];
    }
}
void solution(int A[][SIZE], int B[], int n, int &nB)
{
    matrixToArray(A, B, n, nB);
    sortArray(B, nB);
    arrayToMatrix(A, B, n);
}
void output(int A[][SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}
