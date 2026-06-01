// Print prime numbers from 2 to n
#include<iostream>
#include<vector>

//Optmized Approach: Sieve of Eratosthenes
int primeNumberPrint(int& n)
{
    std::vector<bool> vec(n+1,true); // Initially consider every number to be prime
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(vec[i])
        {
            for(int j=2*i;j<n;j=j+i)
            {
                vec[j]=false;
            }
            count++;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(vec[i]==true)
        {
            std::cout<<i<<" ";
        }
    }
    return count;
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
    int n=53;
    std::cout<<"\nNumber of prime numbers: "<<primeNumberPrint(n);
    return 0;
}