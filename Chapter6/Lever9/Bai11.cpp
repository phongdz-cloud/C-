#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
// Hãy cho biết tất cả phần tử trong mảng a có nằm trong mảng b hay không
void input(int A[], int &n);
bool solution(int A[], int B[], int nA, int nB);
void output(bool result);
int main()
{
    int A[SIZE], B[SIZE];
    int nA, nB;
    bool result;
    input(A, nA);
    input(B, nB);
    result = solution(A, B, nA, nB);
    output(result);
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
bool solution(int A[], int B[], int nA, int nB)
{
    int count = 0;
    for (int i = 0; i < nA; i++)
    {
        for (int j = 0; j < nB; j++)
        {
            if (A[i] == B[j])
            {
                count++;
                break;
            }
        }
    }
    return count == nA;
}

void output(bool result)
{
    if (result)
        cout << "Tat ca phan tu mang a nam trong mang b";
    else
        cout << "Tat ca phan tu mang a khong nam trong b";
}
