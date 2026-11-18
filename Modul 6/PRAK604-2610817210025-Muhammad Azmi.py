kode = input()
pesan = input()
bintang = 0
pagar = 0

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(kode)):
        if kode[i] == ' ' and pesan[i] == ' ':
            print(" ", end="")
        elif kode[i] == pesan[i]:
            print("*", end="")
            bintang += 1
        else:
            print("#", end="")
            pagar += 1
    print()

    print("* =", bintang)
    print("# =", pagar)

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")