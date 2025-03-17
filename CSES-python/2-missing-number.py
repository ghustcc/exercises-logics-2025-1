n = int(input())
input2 = input()

vet = input2.split(' ')

if (2*(10**5) >= n >= 2) and (len(vet) == n-1):
    for i in range(1, int(len(vet))+2):
        if str(i) in vet:
            continue
        else:   
            print(i)
