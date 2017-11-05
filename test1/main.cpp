//woj-alternate-sum
/*
#include<iostream>

using namespace std;
int main(){
    int n;

    while(cin>>n && n!=0){
        int max;
        int tmp=0;
        cin>>max;
    for(int i = 0; i < n-1; i++){
        cin>>tmp;
        max = max<tmp?tmp:max;
    }
    max = (max+2006)%2006;
    for(int i = 0; i < n-1; i++){
        max += max;
        max %= 2006;
    }
    cout << max << endl;

    }
    return 0;
}
*/
#include <iostream>
#include<cstdio>

using namespace std;


int main()
{
    int n;
    while(1 == scanf("%d", &n) && n )
   {
        int maxx;
        scanf("%d", &maxx);
        int t;
        for(int i = 0; i < n - 1; i++)
        {

            scanf("%d", &t);
            maxx = max(maxx, t);
        }
        maxx %= 2006;
        if(maxx < 0) maxx += 2006;
        for(int i = 0; i < n - 1; i++)
        {
            maxx *= 2;
            maxx %= 2006;
        }
        printf("%d\n", maxx % 2006);
    }
    return 0;
}
