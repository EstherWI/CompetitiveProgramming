# Diagonal
#     n=x*(x-3)/2
#     x**2 -3x -2n=0
#    Resolver a equação de segundo grau encontrando o x positivo, sendo n o número de diagonais

import math
caso=1
while True:
    n=int(input())
    if n == 0:
        break
    D = 9 + (4*2*n)
    x1 = (3 + D**(1/2)) / 2
    x1=math.ceil(x1)
    print("Case {0}: {1}".format(caso,x1))
    caso+=1
