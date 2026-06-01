// GCD (or HCF) of two number
#include<iostream>

// Euclids Algorithm -> Find GCD of (a-b,b) if a>b or (b-a,b) if b>a
// int gcd(int a, int b)
// {
//     while(a>0 && b>0)
//     {
//         if(b>a)
//         {
//             b=b%a; // b=b-a; is also correct, only difference is that it will take more iterations
//         }
//         else
//         {
//             a=a%b; // a=a-b;
//         }
//     }
//     if(a==0)
//     {
//         return b;
//     }
//     return a;
// }

// Another shorter Recursive approach for Euclids Algorithm:
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

// // TC: O(min(a,b))
// int gcd(int a, int b)
// {
//     int gcd = 1;
//     if(a==0) return b;
//     if(b==0) return a;
//     for(int i=2;i<=std::min(a,b);i++)
//     {
//         if(a%i==0 && b%i==0)
//         {
//             gcd = i;
//         }
//     }
//     return gcd;
// }

int main()
{
    std::cout<<"GCD is: "<<gcd(20,20);
    return 0;
}