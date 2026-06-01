// https://leetcode.com/problems/reverse-integer/description/
// Ideally in maths, -123%10 is 7, but in programming, it is -3.

#include<iostream>
#include<climits>

int revNumber(int n)
{
    int answer=0;
    while(n!=0)
    {
        if(n>0 && answer>INT_MAX/10) return 0;
        else if(n<0 && answer<INT_MIN/10) return 0;
        answer = answer*10 + n%10;
        n /= 10;
    }
    return answer;
    return answer;
}

int main()
{
    std::cout<<"Reversed Number is: "<<revNumber(-4537);
    return 0;
}