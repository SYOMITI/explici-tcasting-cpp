#include<iostream>
using namespace std;
int main()
{
    float myfloat=10.123;
    int mynum;
    myfloat=static_cast<char>(myfloat);
    cout<<myfloat;
    return 0;
}