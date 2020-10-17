# Simplifying Fractions
def gcd(x, y):
    while x % y:
        x, y = y, x % y
    return y

def main():
  t=int(input())
  while True:
    if t==0:
      break
    p, q = input().split("/")
    p=int(p)
    q=int(q)
    y = gcd(p,q)
    print("{0} / {1}".format(p//y,q//y))
    t-=1

if __name__ == '__main__':
    main()
