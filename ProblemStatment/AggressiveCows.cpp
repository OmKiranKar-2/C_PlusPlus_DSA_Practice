/* Question:
Assign C cows to N stalls such that the minimum distance between them is as large as possible.
Return largest minimum distance.
The array shows the different position of the stall where you can assign the cows.
*/
//Use Book Allocation Approach
#include<iostream>
#include<vector>
#include<algorithm>

// Maximize the Minimum Value
bool isValid(std::vector<int>& stalls, int& n, int& m, int& minimumLargestDistance)
{
    int sum=0, cowCount=1; //cowCount = 1 as one cow is already initialized at the first stall
    for(int i=1;i<n;i++) // O(n)
    {
        sum += stalls[i]-stalls[i-1];  // {-,1,2,4,1} -> Distance between stalls
        if(sum>=minimumLargestDistance)
        {
            sum=0;
            cowCount++;
        }
    }
    return cowCount>=m ? true : false;
}

// // Another Approach for same function having lastCowStall instead of Sum
// bool isValid(std::vector<int>& stalls, int& n, int& m, int& minimumLargestDistance)
// {
//     int sum=0, cowCount=1, lastCowStall=stalls[0]; //Index Position of the cow stall
//     for(int i=1;i<n;i++)
//     {
//         if(stalls[i]-lastCowStall>=minimumLargestDistance)
//         {
//             lastCowStall=stalls[i];
//             cowCount++;
//         }
//     }
//     return cowCount>=m ? true : false;
// }

int aggresiveCows(std::vector<int>& stalls, int& n, int& c)
{
    std::sort(stalls.begin(),stalls.end()); // {1,2,4,8,9} // O(n * logn)
    int minDistance = 1, maxDistance=stalls[n-1]-stalls[0], answer=-1;
    if(c>n)
    {
        return answer;
    }
    while(minDistance<=maxDistance) // O(logn)
    {
        int minimumLargestDistance = minDistance + (maxDistance-minDistance)/2;
        if(isValid(stalls,n,c,minimumLargestDistance))
        {
            minDistance = minimumLargestDistance + 1;
            answer = minimumLargestDistance;
        }
        else
        {
            maxDistance = minimumLargestDistance - 1;
        }
    }
    return answer;
}

int main()
{
    std::vector<int> stalls = {1,2,8,4,9}; // 0 1 2 4 1
    int n=stalls.size(), c=3;
    std::cout<<"Largest Minimum Distance Between Cows: "<<aggresiveCows(stalls,n,c);
    return 0;
}