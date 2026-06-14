// To check is a array is sorted or not in ascending order
#include<iostream>
#include<vector>

// TC: O(n), SC: O(n)
int checkArray(std::vector<int>& vec, int size)
{
    if(size==1 || size==0)
    {
        return true;
    }
    if(vec[size-1]>=vec[size-2])
    {
        return checkArray(vec,size-1);
    }
    return false;
    // or return vec[size-1]>=vec[size-2] && checkArray(vec,size-1);
}

int main()
{
    std::vector<int> vec = {1,2,3,4,5};
    std::cout<<"Array Sorted Status: "<<checkArray(vec,vec.size());
    return 0;
}