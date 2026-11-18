kata = input()
kata_kecil = kata.lower()

if kata_kecil == kata_kecil[::-1]:
    print(f"Kata '{kata}' adalah palindrom")
else:
    print(f"Kata '{kata}' bukan palindrom")