import itertools, math

class Solution(object):
	def __init__(self, n, arr, dept):
		### Declare your variables here.
		self.arr = arr
		self.dept = dept
		self.n = n
		self.ans = 1
		self.platform = 1
		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans)


	def findSolution(self):
		### Problem Solution
		i, j = 1, 0
		while i<self.n and j<self.n:
			if self.arr[i] <= self.dept[j]:
				self.platform += 1
				i+=1

			else:
				self.platform -= 1
				j+=1
			self.ans = max(self.ans, self.platform)


### Driver Code
def main():
	n = int(input())
	arr = list()
	dept  = list()
	for i in range(1, n+1):
		x, y = map(int, input().split())
		arr.append(x)
		dept.append(x+y)

	arr.sort()
	dept.sort()

	obj = Solution(n, arr, dept)



### Calling Main Function
if __name__ == '__main__':
	main()

''' 
Run Program by:
py RailwayStation.py
'''

''' 
Inputs: 
3
10 2
5 10
13 5
'''

''' 
Outputs: 2
'''