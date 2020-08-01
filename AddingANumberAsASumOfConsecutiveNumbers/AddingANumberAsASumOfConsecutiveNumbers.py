'''
Given a number N, find the number of ways to represent 
this number as a sum of 2 or more consecutive natural numbers.

Example: 
Input :15 
Output :3
15 can be represented as:
1+2+3+4+5
4+5+6
7+8

Input :10
Output :1
10 can only be represented as:
1+2+3+4
'''


def findSolution(N):

    count = 0
    n = 2

    while (2*N + n - n**2) > 0:
        a = (2*N + n - n**2) / (2*n)
        if a - int(a) == 0:
            count += 1
        n += 1

    return count


def main():

    t = int(input())
    while t:
        n = int(input())
        print(findSolution(n))
        t -= 1


if __name__ == '__main__':
    main()

'''
2
100
10
'''

'''
2
1
'''
