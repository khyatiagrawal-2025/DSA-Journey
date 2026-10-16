class Solution {
    public int hammingWeight(int n) {
        int ctr = 0;
        while(n != 0){
            n = n &(n-1);
            ctr++;
        }
        return ctr;
    }
}