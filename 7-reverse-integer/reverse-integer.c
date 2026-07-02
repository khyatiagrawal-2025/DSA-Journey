#include <limits.h>
int reverse(int x){
    int ans = 0;
    int ld;
    while(x!=0){
        ld = x%10;
        if(ans > INT_MAX/10 || (ans == INT_MAX/10 && ld > 7)){
            return 0;
        }
        if(ans < INT_MIN/10 || (ans == INT_MIN/10 && ld < -8)){
            return 0;
        }
        ans = ans*10+ld;
        x = x/10;
    }
    return ans;
}