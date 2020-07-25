
class Solution(object):

    def __init__(self):
        self.s = input()
        self.n = int(input())
        self.ans = [[] for _ in range(self.n)]

        self.findSolution()

    def findSolution(self):

        row = 0
        down = True

        for i in range(len(self.s)):

            self.ans[row] += self.s[i]

            if row == 0:
                down = True

            if row == self.n-1:
                down = False

            if down:
                row += 1

            else:
                row -= 1

        res = []
        for i in self.ans:
            res += i

        self.ans = "".join(res)

    def __del__(self):
        print(self.ans)


def main():
    sol = Solution()


if __name__ == '__main__':
    main()
