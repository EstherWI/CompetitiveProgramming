# MODEX
t=int(input())

while True:
  if t==0:
    o = int(input())
    break
  x, y, n = map(int, input().split())

  print(pow(x,y,n))
  t-=1
