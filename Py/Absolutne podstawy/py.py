#==== Ułamki ======================================================
from decimal import Decimal
d = Decimal('3.141')
print(d*2)

from fractions import Fraction
f = Fraction(1, 3)
print(1/3)
print(f)
print()

#==== Formatowanie stringów =======================================
s1 = '_ %s _ %i' % ('str1', 22)
print(s1)
s2 = '{0} {1} {0}'.format("s0", "s1")
print(s2)
print(r"a\nb") # surowy łańcuch znaków
print(b"asd") # bitowy łańcuch znaków
print(ord('a')) # na ascii
print(chr(115)) # z ascii
print()

#==== Bazy liczboe ================================================
val = 64
print(hex(val))
print(oct(val))
print(bin(val))
# w drugą stronę
print(eval('64'))
print(eval('0x40'))
print(eval('0o100'))
print(eval('0b1000000'))
print()


#==== Listy składane ==============================================
l = [x**2 for x in range(5)]
print(l)
print()

#==== Wycinki =====================================================
s = "1234567"
print(s[0::2]) # od ; do ; skok
print()

#==== Argumenty wywołania =========================================
import sys
print(sys.argv)
print()

#==== Iteracja z indeksem =========================================
tab = ["aaa", "bbb", "ccc", 6, 66, 666]
for (index, val) in enumerate(tab):
	print("index: {}, value: {}".format(index, val))
print()
	
#==== Else w pętlach ==============================================
for i in range(3):
	print(i)
else:
	print("else 1")
for i in range(3):
	print(i)
	break
else:
	print('else 2')
print()

#==== Alternatywa dla pass (tylko P3) =============================
def funP():
	...
funP()

