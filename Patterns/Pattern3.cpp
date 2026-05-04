#include<iostream>
using namespace std;
int main()
{
    int n;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<char('A'+i)<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}