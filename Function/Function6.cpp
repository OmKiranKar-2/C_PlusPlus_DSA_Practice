//Ficonacci Series
#include<iostream>

void fiboFunc(int n)
{
    int firstNum = 0, secondNum=1;
    std::cout<<firstNum<<" "<<secondNum<<" ";
    for(int i=0;i<n-2;i++)
    {
        int num = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = num;
        std::cout<<num<<" ";
    }
}

int main()
{
    int n;
    std::cout<<"Enter Number: ";
    std::cin>>n;
    fiboFunc(n);
    return 0;
}