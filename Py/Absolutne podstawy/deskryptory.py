class Dsc:
	"Dokumentacja..."
	def __init__(self):
		self.value = 0
	def __get__(self, inst, owner):
		print("get...")
		return self.value
	def __set__(self, inst, owner):
		print("set...")
		self.value = owner

class Cls:
	w = Dsc()
	def __init__(self):
		self.v = Dsc()
		

c = Cls()
print(c.v)
print(c.w)

print('-------')

c.v = 'v'
c.w = 'w'

print('-------')

print(c.v)
print(c.w)
