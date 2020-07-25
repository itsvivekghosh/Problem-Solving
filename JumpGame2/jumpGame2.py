class Solution(object):

    def __init__(self):
        self.n = int(input())
        self.arr = [int(num) for num in input().split()]
        self.ans = True

        self.findSolution()

    def __del__(self):
        if self.ans:
            print("Yes")
        else:
            print("No")

    def findSolution(self):
        for i in range(0, self.n - 1):
            if self.arr[i] == 0:
                flag = False
                for j in range(0, i):
                    if (self.arr[j]+j > i):
                        flag = True
                        break
                if flag == False:
                    self.ans = False
                    return


def main():
    sol = Solution()


if __name__ == "__main__":
    main()


'''
5
3 2 1 0 4
'''
