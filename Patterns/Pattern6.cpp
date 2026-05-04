#include<iostream>
int main()
{
    int n, printNum=0;
    std::cout<<"Enter Limit: ";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<char('A'+printNum++)<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}