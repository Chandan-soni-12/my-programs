n=int(input("Enter a number of elements: "))
elements = []
for i in range(n):
    elements.append(input(f"Enter element {i+1}:"))
print("The elements in the list are:", elements)
