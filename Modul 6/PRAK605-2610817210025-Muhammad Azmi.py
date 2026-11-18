ordo = int(input())

input()
A = []
for i in range(ordo):
    A.append(list(map(int, input().split())))

input()
B = []
for i in range(ordo):
    B.append(list(map(int, input().split())))

hasil = [[0] * ordo for i in range(ordo)]

for i in range(ordo):
    for j in range(ordo):
        for k in range(ordo):
            hasil[i][j] += A[i][k] * B[k][j]

print("Matriks AXB")
for i in range(ordo):
    for j in range(ordo):
        print(hasil[i][j], end=" ")
    print()