n=int(input("Enter a number of elements: "))
elements = []
for i in range(n):
    elements.append(input(f"Enter element {i+1}:"))
set_no = set(elements)
print("The set is:", set_no)