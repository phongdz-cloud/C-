#include <iostream>
#define SIZE 100
using namespace std;
/*
  * Viết chương trình nhập vào một dãy số A gồm m số thực, nhập vào dãy số B gồm
    n số thực. In ra những phần tử xuất hiện ở cả 2 dãy

*/
void input(float A[], int &m);
void solution(float A[], float B[], float C[], int m, int n, int &nC);
bool checkvalid(float B[], int n, float x);
bool checkMatch(float C[], int nC, float x);
void output(float A[], int m);
int main()
{
    float A[SIZE], B[SIZE], C[SIZE];
    int m, n, nC;
    input(A, m);
    input(B, n);
    solution(A, B, C, m, n, nC);
    output(C, nC);
    return 0;
}
void input(float A[], int &m)
{
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }
}
void solution(float A[], float B[], float C[], int m, int n, int &nC)
{
    nC = 0;
    for (int i = 0; i < m; i++)
    {
        if (checkvalid(B, n, A[i]) && checkMatch(C, nC, A[i]))
            C[nC++] = A[i];
    }
}
bool checkMatch(float C[], int nC, float x)
{
    for (int i = 0; i < nC; i++)
    {
        if (x == C[i])
            return false;
    }
    return true;
}
bool checkvalid(float B[], int n, float x)
{
    for (int i = 0; i < n; i++)
    {
        if (B[i] == x)
            return true;
    }
    return false;
}
void output(float A[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << " ";
    }
}
