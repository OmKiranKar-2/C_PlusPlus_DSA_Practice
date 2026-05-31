// Print prime numbers from 2 to n
#include<iostream>
#include<vector>

//Optmized Approach: Sieve of Eratosthenes
void primeNumberPrint(int& n)
{
    
}

// // TC: O(n *sqrt(n))
// void primeNumberPrint(int& n)
// {
//     for(int i=2;i<n;i++)
//     {
//         bool prime = true;
//         for(int j=2;j*j<=i;j++) // Check if a number is prime
//         {
//             if(i%j==0)
//             {
//                 prime=false;
//                 break;
//             }
//         }
//         if(prime==true)
//         {
//             std::cout<<i<<" ";
//         }
//     }
// }

int main()
{
    int n=50;
    primeNumberPrint(n);
    return 0;
}