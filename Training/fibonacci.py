from fib_module import fib
n = int(input("Enter the number of fibonacci terms you want: "))
print("Fibonacci Sequence: ")
for i in range(n):
    print(fib(i),end = " ")