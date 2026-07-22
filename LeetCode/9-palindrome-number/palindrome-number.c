bool isPalindrome(int x) {
    int copy = x;
    long long ans=0;
    while(x!=0){
        int ld = x%10;
        ans = ans*10+ld;
        x = x/10;
    }
    x = copy;
    if(x < 0){
        return false;
    }
    if(ans == copy){
        return true;
    }
    else{
        return false;
    }
}