import itertools 

print("[̲̅D][̲̅E][̲̅V]  [̲̅B][̲̅Y]  [̲̅C][̲̅O][̲̅N][̲̅D][̲̅O][̲̅R]")



print("inserisci / per ogni campo che non conosci")
a = str(input("inserisci nome: "))
b = str(input("inserisci cognome: "))
c = str(input("inserisci numeri che potrebbe avere nella password: "))
d = str(input("inserisci sopranome: "))
e = str(input("inserisci anno di nascita: "))
f = str(input("inserisci nome di cane o qualcuno a lui speciale (solo uno): "))

#verifica degli input
if a == "/":
    a = ""
if b =="/":
    b = ""
if c == "/":
    c = ""
if d == "/":
    d =""
if e == "/":
    e =""
if f == "/":
    f =""

lista = [a,b,c,d,e,f]
#scrivo risultati
print("----------------ECCO A TE IL TUO DIZIONARIO PER UN ATTACCO BRUTEFORCE----------------")
for permutation in itertools.permutations(lista):
    print(''.join(permutation))
