n = int(input())

D = [0]*1001

D[0],D[1] = 1,1

for i in range(2,n+1):
    D[i] = (D[i-1] + D[i-2] + D[i-2])%10007
print(D[n])