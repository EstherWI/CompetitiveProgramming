#Pseudoprime Numbers
import math

def is_prime(x):
    for i in range(2, int(math.sqrt(x))+2):
        if x % i == 0:
            return False
    return True

while True:
  p,a=map(int,input().split(" "))
  if p==0 and a==0:
    break;
  if (is_prime(p)==False and pow(a, p, p)==a):
    print("yes")
  else:
    print("no")
