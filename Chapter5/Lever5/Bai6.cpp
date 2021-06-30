#include <iostream>
#include <math.h>
using namespace std;
//Đếm số lượng số chính phương nhỏ hơn n
void input(int &n);
void output(int n);
bool checkSquareNumber(int n);
int solution(int n);
int main()
{
    int n, result;
    input(n);
    result = solution(n);
    output(result);
    return 0;
}
void input(int &n)
{
    cin >> n;
}
bool checkSquareNumber(int n)
{
    int temp = sqrt(n);
    if (temp * temp == n)
        return true;
    return false;
}
int solution(int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (checkSquareNumber(i))
            count++;
    }
    return count;
}
void output(int result)
{
    cout << result;
}