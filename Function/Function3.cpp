// Exercise Start
#include<iostream>

int sumFunc(int n) // Sum from 1 to N
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}

int fact(int n) // Factorial
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    std::cout<<"Enter a Number: ";
    std::cin>>n;
    std::cout<<"Sum is: "<<sumFunc(n)<<std::endl;
    std::cout<<"Fact is: "<<fact(n);
    return 0;
}