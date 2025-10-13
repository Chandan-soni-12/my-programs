# WAP to find max of 3 numbers
def max_of_three(a, b, c):
    if a >= b and a >= c:
        return a
    elif b >= a and b >= c:
        return b
    else:
        return c
print(max_of_three(10, 20, 30))

#WAP to check if this is a leap year or not
def is_leap_year(year):
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                return True
            else:
                return False
        else:
            return True
    else:
        return False
print(is_leap_year(2020))  
print(is_leap_year(2021))  

# WAP to calculate the averages of the 5 subjects
def average_of_five(a, b, c, d, e):
    return (a + b + c + d + e) / 5
print(average_of_five(80, 90, 85, 70, 95)) 