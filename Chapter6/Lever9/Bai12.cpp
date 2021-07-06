#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Hãy xóa tất cả các số lớn nhất trong mảng các số thực
void input(float A[], int &n);
bool checkValid(int n, int index);
bool remove(float A[], int &n, int index);
float findMaxArray(float A[], int n);
void solution(float A[], int &n);
void output(float A[], int n);
int main()
{
    float A[SIZE];
    int n;
    input(A, n);
    solution(A, n);
    output(A, n);
}
void input(float A[], int &n)
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
bool remove(float A[], int &n, int index)
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
float findMaxArray(float A[], int n)
{
    float max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
void solution(float A[], int &n)
{
    float max;
    max = findMaxArray(A, n);
    for (int i = 0; i < n; i++)
    {
        if (A[i] == max && remove(A, n, i))
            i--;
    }
}
void output(float A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
