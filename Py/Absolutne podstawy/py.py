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
