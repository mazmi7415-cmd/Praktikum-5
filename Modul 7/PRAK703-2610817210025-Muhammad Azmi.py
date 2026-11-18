kalimat = input("Kalimat: ")
vokal = 0
konsonan = 0

for huruf in kalimat.lower():
    if huruf.isalpha():
        if huruf in "aiueo":
            vokal += 1
        else:
            konsonan += 1

print(f"Jumlah Vokal: {vokal}")
print(f"Jumlah Konsonan: {konsonan}")