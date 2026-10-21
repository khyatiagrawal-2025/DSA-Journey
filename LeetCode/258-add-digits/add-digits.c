/*int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num != 0) {
            int ld = num % 10;
            sum += ld;
            num = num / 10;
        }
        num = sum;
    }
    return num;
}
*/

#include <stdio.h>

int sums(int n){
    if(n == 0){
        return 0;
    }
    return n%10 + sums(n/10);
}

int addDigits(int n){
    if(n<10){
        return n;
    }
    int sum = sums(n);
    return addDigits(sum);
}