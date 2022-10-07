#loops
x=int(input())
y=int(input())
z=int(input())
if (x>y)&(x>z):
    print("x is greater ")
elif(y>x)&(y>z):
     print("y is greater")
else:
         print("z is greater")
print("program ended")

for x in range(5):print("hello")
for x in range(5,15,2):
    print(x,end=" ")


password="12345"
if(password=="12345"):
    print("You have successfully logged in")
else:
    for x in range(1,3):
         print("enter password")
print("thankyou")
