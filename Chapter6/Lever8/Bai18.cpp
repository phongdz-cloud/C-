#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Cho 2 mảng A,B mỗi mãng có n phần tử. Thực hiện việc trộn xen kẽ 
    1 phần tử mảng A tới phần tử mảng B để tạo ra mảng C
*/
void input(int A[], int B[], int &n);
void mergeArray(int A[], int B[], int C[], int n);
void output(int C[], int n);
int main()
{
    int A[SIZE], B[SIZE], C[2 * SIZE];
    int n;
    input(A, B, n);
    mergeArray(A, B, C, n);
    output(C, n);
    return 0;
}
void input(int A[], int B[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
}
void mergeArray(int A[], int B[], int C[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        C[count++] = A[i];
        C[count++] = B[i];
    }
}
void output(int C[], int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        cout << C[i] << " ";
    }
}
