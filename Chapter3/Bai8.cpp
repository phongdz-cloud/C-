#include <iostream>
using namespace std;
/*
Nhập một số bất kỳ. Hãy viết bằng chữ giá trị của số nguyên đó nếu có giá trị từ 0 đến 9, ngược lại thông báo 
không biết viết
*/
void input(int &number);
void output(string numbers[], int number);
int main()
{
    string numbers[10] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    int number;
    input(number);
    output(numbers, number);
    return 0;
}
void input(int &number)
{
    cin >> number;
}
void output(string numbers[], int number)
{
    if (number >= 0 && number <= 9)
    {
        cout << numbers[number];
    }
    else
        cout << "Khong biet viet";
}