#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Cho 2 mảng a,b. Liệt kê các giá trị chỉ xuất hiện 1 trong 2 mảng
void input(int A[], int &n);
bool checkMatch(int A[], int n, int x);
void MatchArray(int A[], int B[], int C[], int nA, int nB, int &nC);
bool checkMatch(int A[], int n, int x);
int solution(int A[], int B[], int C[], int nA, int nB, int &nC);
void output(int C[], int nC);
int main()
{
    int A[SIZE], B[SIZE], C[SIZE];
    int nA, nB, nC, result;
    input(A, nA);
    input(B, nB);
    result = solution(A, B, C, nA, nB, nC);
    output(C, nC);
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
bool checkMatch(int A[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
            return false;
    }
    return true;
}
void MatchArray(int A[], int B[], int C[], int nA, int nB, int &nC)
{
    bool flag;
    for (int i = 0; i < nA; i++)
    {
        if (checkMatch(C, nC, A[i]))
        {
            flag = true;
            for (int j = 0; j < nB; j++)
            {
                if (A[i] == B[j])
                    flag = false;
            }
            if (flag)
                C[nC++] = A[i];
        }
    }
}
int solution(int A[], int B[], int C[], int nA, int nB, int &nC)
{
    nC = 0;
    MatchArray(A, B, C, nA, nB, nC);
    MatchArray(B, A, C, nB, nA, nC);
    return nC;
}

void output(int C[], int nC)
{
    for (int i = 0; i < nC; i++)
    {
        cout << C[i] << " ";
    }
}
