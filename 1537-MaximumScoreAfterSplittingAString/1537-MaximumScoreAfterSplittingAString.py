# Last updated: 08/05/2026, 10:45:05
class Solution:
    def maxScore(self, s):
        left_zero_count = 0
        right_one_count = s.count('1')  # count number of '1's in the entire string
        max_score = 0
        
        # Traverse through the string and calculate score at each split point
        for i in range(len(s) - 1):  # loop till second last character
            if s[i] == '0':
                left_zero_count += 1
            else:
                right_one_count -= 1
            
            # Calculate the score for the current split
            score = left_zero_count + right_one_count
            max_score = max(max_score, score)
        
        return max_score