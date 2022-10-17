a=int(input("enter a number"))
if a>1:
    for i in range (2,a//2):
        if (a%i)==0:
            print( a, "is not prime")
            break
        else:
            print(a,"is a prime number")
    else:
        print(a,"is not prime")   