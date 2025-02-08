class Solution(object):
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        dp = {}
        def MatchPattern(i, j):
            if (i, j) in dp:
                return dp[(i,j)]
            if i >= len(s) and (j >= len(p)):
                return True
            if j >= len(p):
                return False
            match = i < len(s) and (s[i] == p[j] or p[j] == ".")
            if (j + 1) < len(p) and (p[j+1] == "*"):
                dp[(i,j)] = (MatchPattern(i, j+2) or
                        (match and MatchPattern(i+1, j)))
                return dp[(i,j)]
            if match:
                dp[(i,j)] = MatchPattern(i+1, j+1)
                return dp[(i,j)]
            dp[(i,j)] = False
            return dp[(i,j)]
        return MatchPattern(0, 0)
