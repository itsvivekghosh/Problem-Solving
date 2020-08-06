import itertools, math

class Solution(object):
	
	def __init__(self, n, arr):
		### Declare your variables here.
		# self.arr = arr
		self.n = n
		self.ans = 0
		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans)


	def findSolution(self):
		### Problem Solution
		dp = [1e+9] * (self.n+1)
		dp[0] = 0

		for i in range(1, self.n+1):
			for c in str(i):
				dp[i] = min(dp[i], dp[i - int(c)]+1)
		self.ans = dp[n]


### Driver Code
def main():
	# t = int(input())
	t = 1
	while(t):
		t-=1
		# n = int(input())
		n = 27
		obj = Solution(n)



### Calling Main Function
if __name__ == '__main__':
	main()

''' 
Run Program by:
py program.py
'''

''' 
Inputs: 
'''

''' 
Outputs: 
'''