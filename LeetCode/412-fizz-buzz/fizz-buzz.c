/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** ans = malloc(n*sizeof(char*));
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            ans[i-1]="FizzBuzz";
        }
        else if(i%3==0){
            ans[i-1] = "Fizz";
        }
        else if(i%5==0){
            ans[i-1]="Buzz";
        }
        else{
            char* str = malloc(12*sizeof(char));
            sprintf(str, "%d",i);
            ans[i-1] = str;
        }
    }
    *returnSize = n;
    return ans;
}