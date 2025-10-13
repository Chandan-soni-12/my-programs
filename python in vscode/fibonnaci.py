#WAP to find fibonnaci series
a=0
b=1 
n=int(input("Enter the number of terms in the Fibonacci series: "))
print("Fibonacci series:")
for i in range(n):
    print(a, end=' ')
    c=a+b
    a=b
    b=c
