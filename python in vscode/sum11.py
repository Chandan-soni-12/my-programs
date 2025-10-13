#WAP to find sum, max, min of list elements
n=int (input("Enter the number of elements:"))
elements = []
for i in range(n):
    elements.append(int(input(f"Enter element {i+1}: ")))
print("The elements in the list are:", elements)
print("The sum of the elements is:", sum(elements))
print("The maximum element is:", max(elements))
print("The minimum element is:", min(elements))
