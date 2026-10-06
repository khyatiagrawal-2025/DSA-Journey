class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        sum=0
        mul=1
        while n!=0:
            ld = n%10
            mul *= ld
            sum+=ld
            n=n/10
        return mul-sum
        