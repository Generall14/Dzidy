def gen():
	val = 0
	while val < 10:
		yield val
		val += 1

for i in gen():
	print(i)
