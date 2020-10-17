//bottom up approach of fibonacci

#include<iostream>
#include<conio.h>
#include<unordered_map>
using namespace std;

int fib(int n)
{
    if(n<=1)
    return n;

    int prev = 0,current = 1;
    for(int i = 0;i< n-1;i++)
    {
        int newf = prev + current;
        prev = current;
        current = newf;
    }

    return current;
}

int main()
{
    cout<<fib(8);
    
    getch();
}