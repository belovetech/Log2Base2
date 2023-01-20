#!/usr/bin/python3
"""Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number."""
from typing import List

class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()

        res = gi = si = 0

        while gi < len(g) and si < len(s):
            if s[si] >= g[gi]:
                res += 1
                si, gi = si+1, gi+1
            else:
                si += 1

        return res
        
        
        
if __name__ == "__main__":
    s = Solution()
    
    g1 = [1, 2, 3]
    s1 = [1, 1]
    res = s.findContentChildren(g1, s1)
    print(res)
    
    g2 = [1, 2]
    s2 = [1, 2, 3]
    res = s.findContentChildren(g2, s2)
    print(res)
    
   