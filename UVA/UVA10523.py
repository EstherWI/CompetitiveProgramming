//Very Easy !!!
while(1):
	try:
		n, a = map(int, input().split())
	except EOFError:
		break
	sum = 0
	for i in range(1, n+1):
		sum += i * (a ** i)
	print(sum)
