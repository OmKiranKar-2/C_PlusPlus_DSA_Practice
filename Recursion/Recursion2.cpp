#include<iostream>

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

// My another approach
// int fibonacci(int firstNum, int secondNum, int n)
// {
//     while(n>2)
//     {
//         int thirdNum = firstNum + secondNum;
//         firstNum = secondNum;
//         secondNum = thirdNum;
//         std::cout<<thirdNum<<" ";
//         return fibonacci(firstNum,secondNum,n-1);
//     }
//     return 0;
// }

int main()
{
    int n;
    std::cout<<"Enter Number: ";
    std::cin>>n;
    std::cout<<"Fibonacci is: "<<fibonacci(n);
    // int firstNum=0, secondNum=1;
    // std::cout<<firstNum<<" "<<secondNum<<" ";
    // fibonacci(firstNum, secondNum,n);
    return 0;
}