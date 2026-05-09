//Pass by refernce
#include<iostream>

void func(short int a[])
{
    a[1] = 8; *(a+2) = 9;
}

int main()
{
    short int a[5] = {1,2,3,4,5};
    func(a);
    for(int i=0;i<sizeof(a)/sizeof(short int);i++)
    {
        std::cout<<a[i]<<" ";
    }
    return 0;
}