while True:
    try:
        n = int(input())
    except ValueError:
        continue
    if n > 0 and n <= 10**6:
        break
    
while 1 <= n:
    print(f"{n} ", end='')
    if n % 2 == 0:
        n = n // 2
    elif n == 1:
        break
    else:
        n = (n * 3) + 1