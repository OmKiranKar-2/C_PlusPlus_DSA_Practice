#include<iostream>

int factorial(int n)
{
    if(n==1)
    {
        return n;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    std::cout<<"Enter number: ";
    std::cin>>n;
    std::cout<<"Factorial is: "<<factorial(n);
    return 0;
}