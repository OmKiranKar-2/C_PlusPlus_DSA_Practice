// Count Number of digits & check Armstrong Number
#include<iostream>
#include<cmath>

std::string armstrongNumber(int& n2)
{
    int sum=0,num=n2;
    while(n2>0)
    {
        int digit = n2%10;
        sum += digit*digit*digit;
        n2 /= 10;
    }
    return num==sum ? "Armstrong Number" : "Not Armstrong Number";
}

int main()
{
    // Count number of digits
    int n1 = 3568, count=0;
    // // TC: O(log n base 10) -> Since repeatedly divided by 10
    // while(n1>0)
    // {
    //     count++;
    //     n1 /= 10;
    // }
    count = log10(n1)+1; // TC: O(1)
    std::cout<<"Count of digits: "<<count<<std::endl;

    // Check if Armstrong number
    int n2=153;
    std::cout<<armstrongNumber(n2);
    return 0;
}