//Two Pointer Approach -> Reverse an Array
#include<iostream>

int reverseArray(short int* arr, short int* start, short int* end)
{
    while(*start<*end)
    {
        std::swap(arr[*start],arr[*end]);
        *start = *(start) + 1;
        *end = *(end) - 1;
    }
}

int main()
{
    short int arr[7] = {4,3,7,8,1,2,5};
    short int start = 0, end = sizeof(arr)/sizeof(short int)-1;
    reverseArray(arr, &start, &end);
    for(int i=0;i<=6;i++)
    {
        std::cout<<*(arr+i)<<" ";
    }
    return 0;
}