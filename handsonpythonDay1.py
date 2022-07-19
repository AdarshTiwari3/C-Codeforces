a=5
b=6
a,b=b,a
print(a,b)
c1=int(input("Enter 10 rupees coin:"))
c2=int(input("Enter 5 rupees coin:"))
c3=int(input("Enter 1 rupees coin:"))
tmoney=int(c1*10+c2*5+c3*1)
print("Total money:",tmoney)
bs=float(input("Enter basic salary"))
da=float(bs*(25/100))
hra=float(bs*(15/100))
pf=float(bs*(10/100))
ns=float(bs+da+hra-pf)
print("NET SALARY:",ns)
#6th ques
item=int(input("Enter no. of items:"))
val=int(input("Enter value of an item:"))
dis=int(input("Enter discount:"))
tamt=float(item*val)
bilamt=float(tamt-(tamt*(dis/100)))
print("BILLED AMOUNT:",bilamt)
#2nd ques
import math
x,y=2,2
p,q=5,6
d=float(math.sqrt((5-2)**2 + (6-2)**2))
r=d/2
print(r)
area=lambda r:math.pi*r*r
print("Area of circle:",area(r))

#1st ques
a=int(input("Enter sides:"))
b=int(input("Enter sides:"))
c=int(input("Enter sides:"))
s=float((a+b+c)/2)
area1=math.sqrt(s*(s-a)*(s-b)*(s-c))
print("Area of triangle:",area1)
