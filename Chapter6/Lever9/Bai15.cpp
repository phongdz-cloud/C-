#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Hãy xóa tất cả các phần tử có tần suất xuất hiện trong mảng lớn hơn 1 lần
void input(int A[], int &n);
bool checkValid(int n, int index);
bool remove(int A[], int &n, int index);
bool checkMatch(int A[], int n, int x);
void matchArray(int A[], int B[], int nA, int &nB);
void solution(int A[], int B[], int &nA, int nB);
void output(int A[], int n);
int main()
{
    int A[SIZE], B[SIZE];
    int nA, nB;
    input(A, nA);
    matchArray(A, B, nA, nB);
    solution(A, B, nA, nB);
    output(A, nA);
}
void input(int A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
bool checkValid(int n, int index)
{
    return index >= 0 && index < n;
}

bool remove(int A[], int &n, int index)
{
    if (checkValid(n, index))
    {
        for (int i = index; i < n - 1; i++)
        {
            A[i] = A[i + 1];
        }
        n--;
        return true;
    }
    return false;
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
void matchArray(int A[], int B[], int nA, int &nB)
{
    int count;
    nB = 0;
    for (int i = 0; i < nA; i++)
    {
        if (checkMatch(B, nB, A[i]))
        {
            count = 0;
            for (int j = 0; j < nA; j++)
            {
                if (A[i] == A[j])
                    count++;
            }
            if (count >= 2)
                B[nB++] = A[i];
        }
    }
}
void solution(int A[], int B[], int &nA, int nB)
{
    for (int i = 0; i < nB; i++)
    {
        for (int j = 0; j < nA; j++)
        {
            if (A[j] == B[i] && remove(A, nA, j))
                j = -1;
        }
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
