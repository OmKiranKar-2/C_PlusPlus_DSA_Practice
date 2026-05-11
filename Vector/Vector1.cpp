#include<iostream>
#include<vector>
int main()
{
    std::vector<int> vec1;
    vec1.push_back(5);
    vec1.push_back(6);
    vec1.push_back(7);
    for(int i:vec1) std::cout<<i<<" ";
    std::cout<<vec1.size()<<" "<<vec1.capacity()<<std::endl;

    std::vector<int> vec2(3,10);
    for(int i:vec2) std::cout<<i<<" ";
    return 0;
}