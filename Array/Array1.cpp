#include<iostream>
using namespace std;
int main()
{
    int a[5] = {6,7,8,9,10};
    *(a+1) = 5;
    for(int i=0;i<sizeof(a)/sizeof(int);i++)
    {
        std::cout<<*(a+i)<<std::endl; // or a[i]
    }
    std::cout<<a[-1];
    return 0;
}