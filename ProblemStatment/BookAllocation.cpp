// *Very Important" Problem based on Binary Search

/*
Question:
There are N books, each i'th book has a[i] number of pages.
You have to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum.

-Each book should be allocated to a student.
-Each student has to be allocated atleast one book
-Allotment should be in contiguous mode.

Calculate and return that minimum possible number.
Return -1 if a valid assignment is not possible.
*/

#include<iostream>
#include<vector>
#include<climits>

bool validCheck(std::vector<int>& vec, int& n, int& m, int& maxAllowedPages)
{
    int sum=0, studentCount=1;
    for(int i=0;i<n;i++)
    {
        if(vec[i]>maxAllowedPages)
        {
            return false;
        }
        sum += vec[i];
        if(sum>maxAllowedPages)
        {
            sum = vec[i];
            studentCount++;
        }
    }
    if(studentCount<=m) return true;
    return false;
}

// Using Binary Search
int bookAllocation(std::vector<int>& vec,int& n, int& m) // TC: O(n*log n)
{
    if(n<m)
    {
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += vec[i];
    }
    int minPages=1, maxPages=sum, answer; // Range of all possible solution
    while(minPages<=maxPages)
    {
        int maxAllowedPages = minPages + (maxPages-minPages)/2;
        if(validCheck(vec,n,m,maxAllowedPages)) // Solution is valid, studentCount<=m
        {
            maxPages = maxAllowedPages - 1;
            answer = maxAllowedPages;
        }
        else // Solution is invalid, studentCount>m
        {
            minPages = maxAllowedPages + 1;
        }
    }
    return answer;
}

// 80% accurate for various test cases, except some like vec={1,2,3,4,5}&m=2 or vec={7,2,5,10,8}&m=2
// It is intuitive and has lower TC, hence kept it in code to dwell more into it
// int bookAllocation(std::vector<int>& vec,int& n, int& m) // TC: O(n)
// {
//     if(n<m) return -1;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum += vec[i];
//     }
//     int average = sum/m;
//     int maxPages=0, count=0;
//     int maxPartitionSubarray=n-m+1;
//     sum=0;
//     for(int i=0;i<n;i++)
//     {
//         if(sum<average && count<maxPartitionSubarray)
//         {
//             sum += vec[i];
//             count++;
//         }
//         else
//         {
//             count=0;
//             sum=0;
//         }
//         maxPages = std::max(maxPages,sum);
//     }
//     return maxPages;
// }

int main()
{
    std::vector<int> vec = {1,2,3,4,5}; // 2,1,3,4
    int n=vec.size();
    int m=2; // 2 Allocation of minimum number of maximum page: 2,1,3 (6) & 4 (4). Answer: 6
    std::cout<<"Minimum Value of Maximum Allocated Pages: "<<bookAllocation(vec,n,m);
    return 0;
}