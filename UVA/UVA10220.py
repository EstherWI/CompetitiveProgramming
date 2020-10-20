#I Love Big Numbers
import math
from sys import stdin


for line in stdin:
	s = 0
	number = str(math.factorial(int(line)))
	for i in number:
		s = s + int(i)
	print(s)
