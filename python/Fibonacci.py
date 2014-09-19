a, b, count = 1, 1, 0
print "%d %d" % (a,b)
for i in range(5):
	print " %d " % (a+b)
	a,b = b,a+b

