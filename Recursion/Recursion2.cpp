#include<iostream>

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

// // My another approach
// int fibonacci(int firstNum, int secondNum, int n)
// {
//     if(n==0) return firstNum;
//     if(n==1 || n==2)
//     {
//         return firstNum + secondNum;
//     }
//     return fibonacci(secondNum,firstNum + secondNum,n-1);
// }

int main()
{
    int n;
    std::cout<<"Enter Number: ";
    std::cin>>n;
    std::cout<<"Fibonacci is: "<<fibonacci(n);
    // std::cout<<fibonacci(0, 1, n);
    return 0;
}