import itertools, math


def isPrime(n):
	if n == 1:
		return False

	if n == 2 or n == 3:
		return True

	for i in range(2, n):
		if n % i == 0:
			return False

	return True


class Solution(object):
	
	def __init__(self, D, P):
		### Declare your variables here.
		self.D = D
		self.P = P
		self.ans = 0
		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans)


	def findSolution(self):
		### Problem Solution
		H = self.D//self.P
		N = H

		while (N > 1):
			i = 0
			count = 0

			while 1:
				k = int(N + (i*H))
				if (isPrime(k) and k<=self.D):
					count+=1

				if (i == (self.P - 1)):
					break
				i+=1

			if count == self.P:
				self.ans+=1
			N-=1


### Driver Code
def main():
	t = int(input())
	while(t):
		t-=1
		n, m = [int(x) for x in input().split()]
		obj = Solution(n, m)



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