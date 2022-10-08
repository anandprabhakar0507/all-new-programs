# Python Program to check if a number

# is circular prime or not.

 

import math

 

# Function to check if a number is prime

# or not.

def isPrime(n) :

 

    # Corner cases

    if (n <= 1) :

        return False

    if (n <= 3) :

        return True

         

    # This is checked so that we can skip

    # middle five numbers in below loop

    if (n % 2 == 0 or n % 3 == 0) :

        return False

 

    i = 5

    while i * i <= n :

        if (n % i == 0 or n % (i + 2) == 0) :

            return False

        i = i + 6

     

    return True

     

# Function to check if the number is 

# circular prime or not.

def checkCircular(N) :

     

    #Count digits.

    count = 0

    temp = N

    while (temp > 0) :

        count = count + 1

        temp = temp / 10

         

    num = N;

    while (isPrime(num)) :

         

        # Following three lines generate the

        # next circular permutation of a 

        # number. We move last digit to 

        # first position.

        rem = num % 10

        div = num / 10

        num = (int)((math.pow(10, count - 1)) 

                                * rem)+ div

 

        # If all the permutations are checked

        # and we obtain original number exit

        # from loop.

        if (num == N) :

            return True

     

    return False

     

# Driver Program

N = 1193;

if (checkCircular(N)) :

    print "Yes"

else :

    print "No"

