import itertools, math

class Solution(object):
	
	def __init__(self, low, high, arr, k):
		### Declare your variables here.
		self.arr = arr
		self.ans = 0
		self.low, self.high, self.k = low, high, k

		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans, end = '')


	def findSolution(self):
		### Problem Solution
		arr1, arr2 = list(), list()

		for data in self.arr:
			if data % 2 == 0:
				arr1.append(data)
			else:
				arr2.append(data)

		lenOfArray1 = len(arr1)
		lenOfArray2 = len(arr2)

		self.ans = int(0.5 * ((lenOfArray1 + lenOfArray2) ** self.k + (lenOfArray1 - lenOfArray2) ** self.k))


### Driver Code
def main():
	low, high = map(int, input().split())
	k = int(input())

	arr = []
	for i in range(low, high+1):
		arr.append(i)

	Solution(low, high, arr, k)



### Calling Main Function
if __name__ == '__main__':
	main()

''' 
Inputs: 
'''

''' 
Outputs: 
'''