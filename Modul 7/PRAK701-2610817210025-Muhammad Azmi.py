nama_depan = input("Nama Depan: ")
nama_belakang = input("Nama Belakang: ")

nama_lengkap = nama_depan + " " + nama_belakang
panjang_tanpa_spasi = len(nama_lengkap.replace(" ", ""))

print(f"Nama Lengkap : {nama_lengkap}")
print(f"Panjang Nama (tanpa spasi): {panjang_tanpa_spasi}")