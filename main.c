#include <stdio.h>
#include <stdlib.h>
int test, days, highp;
long long profit;
int price[1000000];

int main()
{
    scanf("%d", &test);
    for(int T=1; T<=test; T++){
        scanf("%d", &days);
        for(int i=0; i<days; i++){
            scanf("%d", price+i);
        }
        profit = 0;
        highp = price[days-1];
        for(int i=days-2; i>=0; i--){
            if(highp>price[i]) profit += (highp - price[i]);
            else highp = price[i];
        }
        printf("#%d %d\n", T, profit);
    }
    return 0;
}
