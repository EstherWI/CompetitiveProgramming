#Ray Through Glasses
F=[1,2,3]
for i in range(3, 1001):
    F.append(F[i-1]+F[i-2])
while(1):
    try:
        n = int(input())
        print(F[n])
    except EOFError:
        break
