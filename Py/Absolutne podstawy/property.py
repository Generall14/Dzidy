class test:
	def __init__(self):
		self._a = 'A'
	def get(self):
		print("get a by property")
		return self._a
	def set(self, val):
		print("set a by property")
		self._a = val
	a = property(get, set, None, "testowe testy") # get, set, del, doc


t = test()
print(t.a)
t.a = "XXX"
print(t.a)
