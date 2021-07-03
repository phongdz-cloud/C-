#include <iostream>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tìm "giá trị chẵn nhỏ nhất" trong mảng một các số nguyên. Nếu mảng không có giá trị
    chẵn thì trả về giá trị không chẵn là -1;
*/
void input(int A[], int &n);
int solution(int A[], int n);
void output(int result);
int main()
{
    int A[SIZE];
    int n, result;
    input(A, n);
    result = solution(A, n);
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
int solution(int A[], int n)
{
    int minEvenNumber = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0 && A[i] < minEvenNumber)
            minEvenNumber = A[i];
    }
    return minEvenNumber != INT32_MAX ? minEvenNumber : -1;
}
void output(int result)
{
    cout << result;
}
