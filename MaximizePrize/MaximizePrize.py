def findSolution():
	n = int(input())
	sum = 0

	if n == 0:
		print(sum)
		return 0

	else:
		arr = list(map(int, input().split()))

	if n < 3:
		if n == 1:
			sum = arr[0]
		else:
			sum += (arr[0] * arr[1]) * max(arr)

	else:
		Max = max(arr)
		i = arr.index(Max)

		if Max == arr[0]:
			b = list()

		else:
			b = arr[:i+1]

		if Max == arr[-1]:
			c = list()
		else:
			c = arr[i:]

		if len(b) != 0:
			while i-1 > 0:
				sum += ((b[i-1] * b[i]) + b[i-2])
				b[i-1] = b[i]
				b[i] = '\0'
				i-=1
			sum += (b[0] * b[1])

		if len(c) == 0:
			b[0] = b[1]
			b[1] = '\0'
			sum += Max

		if len(c) != 0:
			c = c[:: -1]
			Max1 = c[-1]
			k = c.index(Max1)

			while k-1 > 0:
				sum += ((c[k-1] * c[k]) + c[k-2])
				c[k-1] = c[k]
				c[k]= '\0'
				k-=1

			sum += (c[1] * c[0])
			c[0] = c[1]
			c[1] = '\0'

			sum += Max1
		return sum


def main():
	t = int(input())
	for i in range(t):
		print(findSolution())

if __name__ == '__main__':
	main()