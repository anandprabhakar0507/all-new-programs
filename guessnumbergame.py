import random

x = random.randint(1,100)
print(x)
print('This is guessing game and you have to guess the number Until you are correct ..')
y = int(input("Guess the number (Hint : b/w 1 to 100) : "))

while(y!= x):
    print("Wrong guess, try again!")
    y = int(input("Guess the number (Hint : b/w 1 to 100) : "))
print("congratulations you've nailed it!")
