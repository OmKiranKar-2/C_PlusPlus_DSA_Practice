//Linear Search
#include<iostream>

int linearSearch(short int arr[], short int target) // short int arr[] is short int* arr -> Returns pointer
{
    for(int i=0;i<7;i++)
    {
        if(*(arr+i)==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    short int arr[7]={4,2,7,8,1,2,5};
    short int target = 8;
    std::cout<<"Index is "<<linearSearch(arr,target);
    return 0;
}