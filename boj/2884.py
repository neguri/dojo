import sys

H, M = map(int, sys.stdin.readline().split())
if M >= 45:
    M = M - 45
else:
    M = M+60-45
    H = H-1

    if H <= 0:
        H = 23
print(H,M)