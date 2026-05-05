// Sum of digits of a number
#include<iostream>

int func1(int n)
{
    int sum=0;
    while(n>0)
    {
        sum += n%10;
        n /=10;
    }
    return sum;
}

int main()
{
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    std::cout<<"Sum of digit is: "<<func1(n);
    return 0;
}