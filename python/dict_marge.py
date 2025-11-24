odd={
    "one":1,
    "three":3,
    "five":5}
   
even={
    "two":2,
    "four":4,
    "six":6}

print(odd)
print(even)

odd.update(even.copy())
print("\nthe new dictionarie is ")
print(odd)

