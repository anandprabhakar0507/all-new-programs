# Python program to check if the number is an Armstrong number or not
# take input from the user

num = int(input("Enter a number: "))

# initialize sum

sum = 0

# find the sum of the cube of each digit

temp = num

while temp > 0:

    digit = temp % 10

    sum += digit**3

    temp //= 10

# display the result

if num == sum:

    print(num, "is an Armstrong number")

else:

    print(num, "is not an Armstrong number")

# Check Armstrong number of n digits
# 2nd method

num = 1634  # you can change the num value.

# Changed num variable to string,
# and calculated the length (number of digits)

order = len(str(num))

# initialize sum
sum = 0

# find the sum of the cube of each digit
temp = num
while temp > 0:
    digit = temp % 10
    sum += digit**order
    temp //= 10

# display the result
if num == sum:
    print(num, "is an Armstrong number")
else:
    print(num, "is not an Armstrong number")
#3rd method
#Contributed by: Sirsha 
#Armstrong number using recursive approach
number = int(input("Enter a number: "))
#Taking input from user
order = len(str(number))
sum = 0
#Assigning the value of sum = 0
temp = number

#going through every digit of number store in temp variable
while temp > 0:
    n = temp % 10
    temp = temp // 10
#Storing the sum of cube of the digits in sum variable
    sum = sum + pow(n, order)
if(sum == number):
    print(number," is an armstrong number")
else:
    print(number," is not an armstrong number")
