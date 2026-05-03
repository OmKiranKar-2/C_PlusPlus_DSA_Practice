#include <iostream>
int main()
{
    int n;
    std::cout<<"Enter limit";
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            std::cout<<'*';
        }
        std::cout<<std::endl;
        std::cout<<1;
    }
    return 0;
}