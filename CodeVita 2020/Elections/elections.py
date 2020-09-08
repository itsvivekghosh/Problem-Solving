import itertools, math

class Solution(object):
	
	def __init__(self, n, voters):
		### Declare your variables here.
		self.voters = voters
		self.N = n
		self.ans = ''
		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans, end= '')


	def findSolution(self):
		### Problem Solution
		foundB = 0
		count, votesA, votesB = 0, 0, 0

		for i in range(0, self.N):
			if self.voters[i] == '-':
				count += 1
				if i == self.N-1 and foundB:
					votesB += count
					break

			elif self.voters[i] == 'A':
				if foundB:
					temp = count // 2
					votesA += temp + 1
					votesB += temp
				else:
					votesA += count + 1
				
				foundB = 0
				count = 0

			elif self.voters[i] == 'B':
				if foundB:
					votesB += count + 1
					
				else:
					votesB += 1
				count = 0
				foundB = 1

		if votesA == votesB:
			self.ans = "Coalition Government"
		elif votesA > votesB:
			self.ans = "A"
		else:
			self.ans = "B"


### Driver Code
def main():
	n = int(input())
	voters = list(input())

	Solution(n, voters)



### Calling Main Function
if __name__ == '__main__':
	main()

''' 
Run Program by:
py program.py
'''

''' 
Inputs: 
14
--AB--AB---A--
'''

''' 
Outputs: 
A
'''