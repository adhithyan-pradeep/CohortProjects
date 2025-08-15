import random
number = random.randint(1,10)
guess = int(input("Guess a number between 1 and 10: "))
if guess == number:
    print("You guessed the right number")
else:
    print(f"Wrong!! The correct number was {number}")