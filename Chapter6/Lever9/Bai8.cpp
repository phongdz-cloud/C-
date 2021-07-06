#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Liệt kê tần suất xuất hiện các giá trị trong mảng (Lưu ý: mỗi giá trị liệt kê 1 lần)
void input(int A[], int &nA);
bool checkMatch(int B[], int n, int x);
void solution(int A[], int C[], int B[], int nA, int &n);
void output(int B[], int C[], int n);

int main()
{
    int A[SIZE], B[SIZE], C[SIZE];
    int nA, n;
    input(A, nA);
    solution(A, C, B, nA, n);
    output(B, C, n);
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
bool checkMatch(int B[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (B[i] == x)
            return false;
    }
    return true;
}
void solution(int A[], int C[], int B[], int nA, int &n)
{
    int count;
    n = 0;
    for (int i = 0; i < nA; i++)
    {
        if (checkMatch(B, n, A[i]))
        {
            count = 0;
            for (int j = 0; j < nA; j++)
            {
                if (A[j] == A[i])
                    count++;
            }
            B[n] = A[i];
            C[n++] = count;
        }
    }
}
void output(int B[], int C[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " " << C[i] << endl;
    }
}
