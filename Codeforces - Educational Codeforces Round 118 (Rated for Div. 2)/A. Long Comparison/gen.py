import random

tc = random.randint(1, 10000)
print(tc)
for i in range(tc):
    x1, p1, x2, p2 = random.randint(1, 1000000), random.randint(1, 1000000), random.randint(1, 1000000), random.randint(1, 1000000)
    print(x1, p1)
    print(x2, p2)