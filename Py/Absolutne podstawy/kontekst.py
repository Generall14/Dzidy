class Con:
	def __init__(self, val):
		self.value = val
	def __enter__(self):
		print("Con::enter")
	def __exit__(self, exc_type, exc_val, exc_tb):
		print("Con::exit")
		print("exc_type = {}".format(exc_type))
		print("exc_val = {}".format(exc_val))
		print("exc_tb = {}".format(exc_tb))
		#return True # true - przejecie wyjatku
	def method(self): # wtf?? dlaczego tego nie znajduje?
		print("Con::met {}".format(self.value))

with Con(1) as con:
	print("c.value")
	con.method()
	#raise TypeError
