#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Hãy xóa tất cả các số chính phương trong mảng 1 chiều các số nguyên
void input(int A[], int &n);
bool checkValid(int n, int index);
bool remove(int A[], int &n, int index);
bool checkSquareNumber(int n);
void solution(int A[], int &n);
void output(int A[], int n);
int main()
{
    int A[SIZE];
    int n;
    input(A, n);
    solution(A, n);
    output(A, n);
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
bool checkSquareNumber(int n)
{
    int temp = sqrt(n);
    if (temp * temp == n)
        return true;
    return false;
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

void solution(int A[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkSquareNumber(A[i]) && remove(A, n, i))
            i--;
    }
}
void output(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
