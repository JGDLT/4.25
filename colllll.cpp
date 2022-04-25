import math
def CircleCollision(num, num1, num2, num3, radius):
    if math.sqrt((num1 - num)**2 + (num3 - num2)**2)<radius:
        return True
    else:
        return False
    
print("Enter x: ")
num = int(input())
print("Enter y: ")
num1 = int(input())
print("Enter mx: ")
num2 = int(input())
print("Enter my: ")
num3 = int(input())
print("Enter radius: ")
radius = int(input())
if CircleCollision(num, num1, num2, num3, radius) == False:
    print("Not enough potatoes")
else:
    print("good")
