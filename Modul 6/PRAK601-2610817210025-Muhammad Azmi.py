baris, kolom = map(int, input().split())
semua = list(map(int, input().split()))

matriks = []

for i in range(baris):
    isi_baris = []
    for j in range(kolom):
        isi_baris.append(semua[i * kolom + j])
    matriks.append(isi_baris)

for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print()