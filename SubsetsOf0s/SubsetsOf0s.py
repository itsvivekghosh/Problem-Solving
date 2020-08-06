import itertools, math

class Solution(object):
	
	def __init__(self, n, k, arr):
		### Declare your variables here.
		self.arr = arr
		self.n = n
		self.k = k
		self.ans = 0
		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans)

	def calculateFactorial(self, num):
		if num == 0: 
			return 1

		return self.calculateFactorial(num-1) * num


	def calculateFact(self, k, sum):
		## Numerator 
		num = self.calculateFactorial(sum+(k-1))

		## Denominator
		den = self.calculateFactorial(sum) * self.calculateFactorial(k-1)

		ans = num // den
		return ans



	def findSolution(self):
		### Problem Solution
		MOD = 1000000007
		limit = 1000001
		primeSum = [0] * limit

		for i in range(2, limit):
			if (primeSum[i] == 0):
				for j in range(i, limit, i):
					primeSum[j] = (primeSum[j] + i) % MOD

		sum = 0
		for i in range(self.n):
			sum = (sum + primeSum[self.arr[i]]) % MOD
		# print(sum)

		self.ans = self.calculateFact(self.k, sum)



### Driver Code
def main():
	t = int(input())
	while(t):
		t-=1
		k = int(input())
		n = int(input())
		arr = list(map(int, input().split()))[:n]
		obj = Solution(n, k, arr)



### Calling Main Function
if __name__ == '__main__':
	main()

''' 
Run Program by:
py program.py
'''

''' 
Inputs: 
2
2
3
1 2 6
3
3
1 2 6
'''

''' 
Outputs: 8, 36
'''