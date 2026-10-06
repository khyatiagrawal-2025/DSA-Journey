class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        a =0
        b=1
        for i in range(1,n+1):
            c=a+b
            a=b
            b=c
        return a