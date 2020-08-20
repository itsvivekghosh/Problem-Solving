n, m, k = map(int, input().split())

arr1 = [int(x) for x in input().split()]
arr2 = [int(x) for x in input().split()]

arr1 = sorted(arr1)
arr2 = sorted(arr2)

i = 0
j = 0
ans = 0

while i<n and j<m:
	if abs(arr1[i] - arr2[j]) <= k:
		j+=1
		ans+=1
		i+=1

	elif arr1[i] < arr2[j]:
		i+=1

	else:
		j+=1

print(ans, end="")