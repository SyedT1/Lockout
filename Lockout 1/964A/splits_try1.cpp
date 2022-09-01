#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<string>
#include<vector>
#include<stack>
#include<map>

using namespace std;

#define ll long long

int main()
{
    int t = 1;
    
    // scanf("%d", &t);
    
    while(t--)
    {
        int n;
        
        scanf("%d", &n);
        
        printf("%d", n / 2 + 1);
    }

    return 0;
}