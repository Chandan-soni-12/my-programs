# n = int(input("How many numbers? "))
# even = odd = 0
# for i in range(n):
#     num = int(input("Enter number: "))
#     if num % 2 == 0:
#         even += 1
#     else:
#         odd += 1
# print("Even:", even)
# print("Odd:", odd)



# # #WAP to find no. of odd and even items in a list
# user_input = input("Enter items separated by space: ")
# items = user_input.split()
# if len(items) % 2 == 0:
#     print("Even number of items")
# else:
#     print("Odd number of items")
# odd_count = sum(1 for item in items if int(item) % 2 != 0)
# even_count = sum(1 for item in items if int(item) % 2 ==0)
# print ("odd count:", odd_count)
# print("even count:", even_count)

n=int(input("enter the total no:"))
num=[]
count =0
for i in range(n):
    a= int(input(f"Enter no{i+1}:"))
    num.append(a)
    if(a%2== 0):
        count = count + 1
print("No of even element:",count)
print("No of odd element:",n-count)
