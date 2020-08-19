### Problem C: Even Odd
from itertools import product
MOD = 1e9+7


### Pseudo Code
def findSolution(low, high, k):
	### array list that contains all the elements ie. [low, high]
	c = 0

	for i in range(low, high+1):
		if i % 2 == 0:
			c+=1

	t = high - low + 1
	result = int((t ** k-1) * c)

	print(result)



### Driver Code
def solve():
	low, high = map(int, input().split())
	k = int(input())

	print(findSolution(low, high, k))


def main():
	solve()


if __name__ == '__main__':
	main()
