def is_right_triangle(a,b,c):
    if a > b and a > c :
        return a ** 2 == b ** 2 + c ** 2
    elif b > a and b > c:
        return b ** 2 == a ** 2 + c ** 2
    else:
        return c ** 2 == a ** 2 + b ** 2
    
print("Enter the length of three sides of a triangle: ")
a = float(input("Side 1: "))
b = float(input("Side 2: "))
c = float(input("Side 3: "))
if is_right_triangle(a,b,c):
    print("The Triangle is a Right Triangle.")
else:
    print("The Triangle is not a Right Triangle.")