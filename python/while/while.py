#utworzenie zmiennej licznik
licznik = 0
#Petla while do chwili az licznik mniejszy od 5
while  licznik<5:
	print("Wartosc licznika",licznik)
	licznik = licznik + 1
	odpowiedz = input("Czy chcesz kontynuowac program tak/nie\n")
	if odpowiedz.lower()=="nie":
		break

print("Koniec programu")

