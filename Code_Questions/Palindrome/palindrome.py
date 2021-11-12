import math

class Solution:
    def isPalindrome(self, x: int) -> bool:
        string = str(x)
        for i in range(math.floor(len(string)/2)):
            if string[i] != string[-abs(i)-1]: return False
        return True
