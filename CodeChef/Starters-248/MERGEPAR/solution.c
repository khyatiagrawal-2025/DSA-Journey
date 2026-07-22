#include <stdio.h>

#define MOD 998244353LL
#define MAXN 200005

long long dp[MAXN];
int p[MAXN];

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int N;
        scanf("%d",&N);
        for(int i=1;i<=N;i++){
            long long x;
            scanf("%lld",&x);
            p[i]=(int)(x&1LL);
        }

        dp[0]=1;
        int inRun=0;
        long long base=0, sumEven=0, sumOdd=0;
        int s=0, rl=0;

        for(int R=1;R<=N;R++){
            if(p[R]==1){
                if(!inRun){
                    inRun=1; s=R; rl=1;
                    if(s==1) base=dp[0];
                    else base=(2*dp[s-1])%MOD;
                    sumEven=0; sumOdd=0;
                    dp[R]=dp[R-1]; // S(R)=0 at run start
                } else {
                    rl++;
                    long long firstterm = (rl%2==0)? base:0;
                    long long inRunSum = (R%2==0)? sumOdd: sumEven;
                    long long S=(firstterm+inRunSum)%MOD;
                    dp[R]=(dp[R-1]+S)%MOD;
                    if(R%2==0) sumEven=(sumEven+dp[R-1])%MOD;
                    else       sumOdd =(sumOdd +dp[R-1])%MOD;
                }
            } else {
                inRun=0;
                long long Tv;
                if(R-1==0) Tv=0;
                else if(p[R-1]==0) Tv=dp[R-1];
                else Tv=((dp[R-1]-dp[R-2])%MOD+MOD)%MOD;
                dp[R]=(dp[R-1]+Tv)%MOD;
            }
        }

        printf("%lld\n",dp[N]);
    }
    return 0;
}