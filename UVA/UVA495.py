#Fibonacci Freeze
F=[0,1,1]
for i in range(3, 5001):
    F.append(F[i-1]+F[i-2])
while(1):
    try:
        n = int(input())
        print('The Fibonacci number for',n,'is', F[n])
    except EOFError:
        break
