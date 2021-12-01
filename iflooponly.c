# program for writing any set of three numbers in descending order using if loop only#
a = int(input("Enter a: "));  
b = int(input("Enter b: "));  
c = int(input("Enter c: "));  
if a>=b and b>=c:
    print("", a , b , c);
if a>=b and c>=b:
    print("", a , c , b);
if b>=a and a>=c:
    print("", b , a , c);
if b>=c and c>=a:
    print("", b , c , a);
if c>=a and a>=b:
    print("", c , a , b);
if c>=b and b>=a:
    print("", c , b , a);
