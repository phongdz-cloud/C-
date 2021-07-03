#include <iostream>
#include <cfloat>
#include <math.h>
#define SIZE 100
using namespace std;
/*
    Tìm "vị trí giá trị âm lớn nhất" trong mảng các số nguyên thực. Nếu mảng
    không có giá trị âm thì trả về -1
*/
void input(float A[], int &n);
int solution(float A[], int n);
void output(int result);
int main()
{
    float A[SIZE];
    int n, result;
    input(A, n);
    result = solution(A, n);
    output(result);
    return 0;
}
void input(float A[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
int solution(float A[], int n)
{
    float maxNegative = FLT_MAX * (-1);
    int indexMaxNegative;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxNegative && A[i] < 0)
        {
            maxNegative = A[i];
            indexMaxNegative = i;
        }
    }
    return (maxNegative != FLT_MAX * (-1)) ? indexMaxNegative : -1;
}
void output(int result)
{
    cout << result;
}
