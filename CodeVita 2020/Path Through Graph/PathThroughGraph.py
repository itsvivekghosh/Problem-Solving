import itertools, math

class Solution(object):
	
	def __init__(self, n, m):
		### Declare your variables here.
		self.m = m
		self.n = n
		self.ans = 0
		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans, end='')

	def findFactor(self, num):
		for n in range(num//2, 3, -1):
			if (num%n == 0):
				return num
		return 1


	def findSolution(self):
		### Problem Solution
		if self.n == self.m:
			return
		
		elif (self.n == self.findFactor(self.m) and (self.m > self.n)) or ((self.n > self.m) and self.m == self.findFactor(self.n)):
			self.ans = 1
			return

		max_num = max(self.n, self.m)
		min_num = min(self.n, self.m)
		temp = False

		while max_num > 1:
			self.ans+=1
			max_num = self.findFactor(max_num)
			if (max_num == min_num):
				temp = true
				break
		
		if not temp:
			while (min_num > 1):
				min_num = self.findFactor(min_num)
				self.ans+=1


### Driver Code
def main():
	n, m = map(int, input().split())
	obj = Solution(n, m)



### Calling Main Function
if __name__ == '__main__':
	main()

''' 
Run Program by:
py PathThroughGraph.py
'''

''' 
Inputs: 
'''

''' 
Outputs: 
'''