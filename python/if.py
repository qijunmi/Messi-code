def max(a,b):
	if a > b:
		return a;
	else:
		return b;

a,b = 5,7
print id(max(a,b)),id(a),id(b)
