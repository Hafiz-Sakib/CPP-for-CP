
def solve(n, arr):
    for i in range(n+1):
        numLiars = i
        truthTlrs = n - i
        liarsCount = 0
        
        for j in range(n):
            if arr[j] <= numLiars:
                liarsCount += 1
        
        if liarsCount > truthTlrs:
            continue
        if liarsCount + numLiars >= n:
            return numLiars
    
    return -1

t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(solve(n, arr))