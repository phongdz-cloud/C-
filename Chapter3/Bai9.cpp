#include <iostream>
using namespace std;
//Nhập 3 số nguyên a,b,c đôi một khác nhau. Tìm số có giá trị nhỏ nhì
void input(int &a, int &b, int &c);
int findMax(int a, int b, int c);
int solution(int a, int b, int c);
void output(int result);
int main()
{
    int a, b, c, secondNumber;
    input(a, b, c);
    secondNumber = solution(a, b, c);
    output(secondNumber);
    return 0;
}
void input(int &a, int &b, int &c)
{
    cin >> a >> b >> c;
}
int findMax(int a, int b, int c)
{
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    return max;
}
int solution(int a, int b, int c)
{
    int secondNumber = a;
    int maxNumber = findMax(a, b, c);
    if ((secondNumber < b && b != maxNumber) || (secondNumber > b && secondNumber == maxNumber))
        secondNumber = b;
    if ((secondNumber < c && c != maxNumber) || (secondNumber > c && secondNumber == maxNumber))
        secondNumber = c;
    return secondNumber;
}
void output(int result)
{
    cout << result;
}