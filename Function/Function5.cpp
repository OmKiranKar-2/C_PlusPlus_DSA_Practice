// Combination Formula - nCr
#include<iostream>

int factFunc(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int combFunc(int n, int r)
{
    return factFunc(n)/(factFunc(r)*factFunc(n-r));
}

int main()
{
    int n, r;
    std::cout<<"Enter total number of items: ";
    std::cin>>n;
    std::cout<<"Enter number of items to be selected: ";
    std::cin>>r;
    std::cout<<"Combination is: "<<combFunc(n,r);
    return 0;
}