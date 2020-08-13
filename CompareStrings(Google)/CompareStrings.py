def solution(a, b):
	# print(a, b)
	ans = list()
	wordsInA = a.split(" ")
	wordsInB = b.split(" ")
	# # print(wordsInA, wordsInB, sep="\n")
	# freq = [0] * 11

	# for word in wordsInA:
	# 	minFreq = word.count(min(word))
	# 	freq[minFreq] += 1

	# for word in wordsInB:
	# 	minFreq = word.count(min(word))
	# 	ans.append(sum(freq[: minFreq]))

	# return ans

	for wordB in wordsInB:
		counter = 0

		for wordA in wordsInA:
			if wordB.count(min(wordB)) > wordA.count(min(wordA)):
				counter+=1

		ans.append(counter)
	return ans

def main():
	# a = input() ### abcd aabc bc
	# b = input() ### aaa aa
	a = "abcd aabc bc"
	b = "aaa aa"

	print(solution(a, b))

if __name__ == '__main__':
	main()

''' 
abcd aabc bc
aaa aa
'''