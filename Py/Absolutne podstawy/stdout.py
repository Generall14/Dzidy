import sys
import os

temp = sys.stdout
sys.stdout = open(os.devnull, 'w')

print("asd")

sys.stdout = temp

print("dsa")
