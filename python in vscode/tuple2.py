n = int(input("How many numbers? "))
fruits= []
for i in range (n):
    fruits.append((input(f"Enter number {i+1}: ")))
tuple_no = tuple(fruits)
print("Tuple:", tuple_no)
print("The count of elements in the tuple is:", len(tuple_no))
print("The index of the tuple is:", tuple_no.index(fruits[0]))