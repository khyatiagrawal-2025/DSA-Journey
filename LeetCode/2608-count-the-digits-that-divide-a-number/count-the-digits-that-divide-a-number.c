int countDigits(int num) {
    int count = 0;
    int copy = num;
    while(num>0){
        int ld = num%10;
        if(copy % ld == 0){
            count++;
        }
        num = num/10;
    }
    return count;
}