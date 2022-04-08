for i in range(int(input())):
    l, r = map(int, input().split())
    r += 1
    m = 9999999999
    for j in range(25):
        a = (l // (2 ** (j+1))) * (2**j) + min(l % 2 **(j+1), 2**j)

        b = (r//(2**(j+1))*(2**j)) + min(r % 2**(j+1), 2**j)
        m = min(b-a, m)
    print(m)
