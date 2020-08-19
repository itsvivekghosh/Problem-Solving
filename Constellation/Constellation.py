import itertools, math
import numpy as np

class Solution(object):
	
	def __init__(self, n):
		### Declare your variables here.
		self.n = n
		self.ans = ""
		self.arr = list()

		for i in range(3):
			self.arr.append([x for x in input().split()])

		self.findSolution()


	def __del__(self):
		### Output answers here.
		print(self.ans)


	def findSolution(self):
		### Problem Solution
	    for j in range(self.n):
	        if (self.arr[0][j] == '#'):
	            self.ans += '#'
	            continue

	        elif (self.arr[0][j] == '.' and self.arr[0][j+1] == '.' and self.arr[0][j+2] == '.'): 
	        	continue

	        elif (self.arr[0][j] == '.' and self.arr[0][j+1] == '*' and self.arr[0][j+2] == '.'):
	            self.ans += 'A'
	            j+=2
	            continue
	        
	        elif(self.arr[1][j] == '.' and self.arr[1][j+1] == '*' and self.arr[1][j+2] == '.'):
	            self.ans = 'I'
	            j+=2
	            continue
	        
	        elif(self.arr[1][j] == '*' and self.arr[1][j+1] == '.' and self.arr[1][j+2] == '*'):
	            if (self.arr[0][j+1] == '*'):
	                self.ans += 'O'
	            else:
	                self.ans += 'U'
	            j+=2
	            continue
	        
	        else:
	            self.ans += "E"
	            j+=2
	            continue
	            
	        

### Driver Code
def main():
	n = int(input())
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