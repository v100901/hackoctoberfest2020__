from unicodedata import name
from xml.dom import InuseAttributeErr


import random
names = input("Give me everybody's names, separated by a Comma: ")

names.split(", ")


num_items = len(names)

choice = random.randint(0, num_items - 1) 

person_who_pay = names[choice]

print(person_who_pay + "is going to pay the bill")