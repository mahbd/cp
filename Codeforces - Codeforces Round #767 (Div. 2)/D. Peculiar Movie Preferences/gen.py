import random
import string

# random string of len n
def rand_str(n):
    return ''.join(random.choice(string.ascii_lowercase) for _ in range(n))

tc = random.randint(1, 10)
print(tc)
for i in range(tc):
    n = random.randint(1, 10)
    print(n)
    for j in range(n):
        print(rand_str(random.choice([2, 3])))
