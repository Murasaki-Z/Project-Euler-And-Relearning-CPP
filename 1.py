'''
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
'''

multiple_3 = [i for i in range(0,1000,3)]
multiple_5 = [i for i in range(0,1000,5)]

multiple   = multiple_3 + multiple_5

print(sum(set(multiple)))

