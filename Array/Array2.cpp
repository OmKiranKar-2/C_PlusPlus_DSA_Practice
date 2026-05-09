// Smallest and Largest Number in an Array
#include<iostream>
#include<climits>
int main()
{
    short int a[6] = {3,2,6,1,9,8};
    short int min = SHRT_MAX;
    short int max = SHRT_MIN;
    for(int i=0;i<sizeof(a)/sizeof(short int);i++)
    {
        min = std::min(a[i],min); //if(a[i]<min) min=a[i];
        max = std::max(a[i],max); //if(a[i]>max) max=a[i];
    }
    std::cout<<"Minimum is: "<<min<<std::endl;
    std::cout<<"Maximum is: "<<max<<std::endl;
    return 0;
}