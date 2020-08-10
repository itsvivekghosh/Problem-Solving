n, x = [int(x) for x in input().split()]
coins = [ int(x) for x in input().split()]

dp = [1e9] * (x+1)
dp[0] = 0

for i in range(1, x+1):
    for j in range(0, n):
        
        if coins[j] > i:
            break

        if dp[i - coins[j]] != 1e9:
            dp[i] = min(dp[i], dp[i - coins[j]] + 1) % 1e9

if dp[x] == 1e9:
    print(-1)

else:
    print(int(dp[x]))
    
    
