n = int(input())
input2 = input()

vet = input2.split(' ')

if (2*(10**5) >= n >= 2) and (len(vet) == n-1):
    for i in range(1, int(len(vet))+2):
        if str(i) not in vet:
            print(i)
            break            


n = int(input())
numbers = list(map(int, input().split()))

expected_sum = n * (n + 1) // 2
actual_sum = sum(numbers)

missing = expected_sum - actual_sum
print(missing)
