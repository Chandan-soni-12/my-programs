n=int(input("Enter a number of elements: "))
elements1 = []
for i in range(n):
    elements1.append(input(f"Enter element1 {i+1}:"))
set_1 = set(elements1)
print("The first set is:", set_1)
elements2 = []
for i in range(n):
    elements2.append(input(f"Enter element2 {i+1}:"))
set_2 = set(elements2)
print("The second set is:", set_2)
print("The union of the sets is:", set_1 | set_2)
print("The intersection of the sets is:", set_1 & set_2)
print("The difference of the sets is:", set_1 - set_2)