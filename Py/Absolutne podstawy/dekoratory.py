def dec(val):
	def i():
		return val()+1
	return i

@dec
def fun():
	print("fun()")
	return 2

# jest tłumaczone na to:
def fun2():
	print("fun2()")
	return 20
fun2 = dec(fun2)


print(fun())
print(fun2())
print('-----------------')

def tracer(fun):
	print("call: {}".format(fun.__name__))
	return fun

@tracer
def fun3():
	print("fun3 body")

fun3()
