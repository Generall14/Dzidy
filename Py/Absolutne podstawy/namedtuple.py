from collections import namedtuple

nt = namedtuple('typename', 'par1, par2')
obj = nt(1, 2)
print(obj.par1)
print(obj.par2)
