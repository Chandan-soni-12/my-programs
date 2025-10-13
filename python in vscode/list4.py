#WAP to convert tuple into list and sort it
n = int(input("How many numbers? "))
elements = []
for i in range(n):
    elements.append(int(input(f"Enter number {i+1}: ")))
tuple_no = tuple(elements)
list_no = list(tuple_no)
print("Tuple:", tuple_no)
print("List:", list_no)
print("Sorted list:", sorted(list_no))
