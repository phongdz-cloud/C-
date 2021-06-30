#include<iostream>
using namespace std;
//Nhập vào 2 số nguyên a, b. Xuất ra thương của 2 số nguyên (trường hợp b = 0 thì báo không chia được)
void input(int &a, int&b);
bool solution(int a, int b,float &result);
void output(bool flag,float result);
int main()
{
    int a, b;
    float result,flag;
    input(a,b);
    flag = solution(a,b,result);
    output(flag,result);
    return 0;
}
void input(int &a, int&b)
{
    cin >>a>>b;
}
bool solution(int a, int b,float &result)
{
    if( b == 0) return false;
    result = (a*1.0)/b;
    return true;
}
void output(bool flag,float result)
{
    if(flag == true){
        cout<<result;
    }
    else cout<<"Khong chia duoc";
}

