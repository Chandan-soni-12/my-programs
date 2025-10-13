#WAP to print the largest number in a list
largest =[1,10,100,1000,10000]
print(max(largest))

list=int(input("Enter the number of elements in the list: "))
elements = []
for i in range(list):
    num = int(input(f"Enter element {i+1}: "))
    elements.append(num)
print("The largest number in the list is:", max(elements))