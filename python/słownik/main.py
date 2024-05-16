slownik = {'Czesc': 'Hello', 'Dowidzenia': 'Goodbye', 'Do zobaczenia': 'See you'}

print ("Podaj słowo.Aby wyłączyc program napisz x")

while True:
	slowo=input()
	if slowo in slownik:
		print (slowo, ':', slownik[slowo])
	else:
		print ("Nie ma takeigo słowa w słowniku")
	if slowo=="x":
		break
	









