#Fibonacci Numbers
F = []
a,b = 0,1
F.append(a)
for _ in range(5000):
    F.append(b)
    a,b = b,a+b
    
while(True):
    try:
        num = int(input())
    except EOFError:
        break
    print(F[num])
