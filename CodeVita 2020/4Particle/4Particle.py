import itertools, math

class Solution(object):
	
	def __init__(self):
		### Declare your variables here.
		self.h = int(input())
		self.a, self.b, self.c, self.d = map(int, input().split())
		self.va, self.vb, self.vc, self.vd = map(int, input().split())
		self.da, self.db, self.dc, self.dd = map(str, input().split())

		self.findSolution()


	def __del__(self):
		### Output answers here.
		pass


	def findSolution(self):
		### Problem Solution
		if self.da == "D":
			self.va *= (-1)

		if self.db == "D":
			self.vb *= (-1)

		if self.dc == "D":
			self.vc *= (-1)

		if self.dd == "D":
			self.vd *= (-1)

		xa = 0
		ya = self.h * (-1)
		
		xb = self.h
		yb = self.h * (-1)

		xc = self.h
		yc = 0
		xd = 0
		yd = 0

		z = [[0] * 100] * 4

		z[0][0] = self.a
		z[0][1] = self.b
		z[0][2] = self.c
		z[0][3] = self.d

		




### Driver Code
def main():
	Solution()



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