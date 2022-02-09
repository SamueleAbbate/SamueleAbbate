print("[̲̅D][̲̅E][̲̅V]  [̲̅B][̲̅Y]  [̲̅C][̲̅O][̲̅N][̲̅D][̲̅O][̲̅R]")
#qui sto importando l'alfabeto e altre variabili che mi serviranno
#all'interno delle " " inserisci a cosa vuoi associare ogni singola lettere adesempi a = "b" ecc.
a = "c"
b = "z"
c = "h"
d = "n"
e = "w"
f = "a"
g = "s"
h = "t"
i = "r"
j = "p"
k = "b"
l = "q"
m = "e"
n = "f"
o = "v"
p = "x"
q = "d"
r = "g"
s = "i"
t = "j"
u = "y"
v = "l"
w = "o"
x = "k"
y = "u"
z = "m"
space = " "
val = "valore nullo non posso converire questo testo"

# qui leggo il file da cryptare
num = int(input("inserisci il numero delle lettere spazzi inclusi: "))

file = "ciao come stai"

for ix in range (0,num):
    try:
        if file[ix] =="a":
            print(a,end="")
        elif file[ix] =="b":
            print(b,end="")
        elif file[ix]=="c":
            print(c,end="")
        elif file[ix]=="d":
            print(d,end="")
        elif file[ix]=="e":
            print(e,end="")
        elif file[ix]=="f":
            print(f,end="")
        elif file[ix]=="g":
            print(g,end="")
        elif file[ix]=="h":
            print(h,end="")
        elif file[ix]=="i":
            print(i,end="")
        elif file[ix]=="j":
            print(j,end="")
        elif file[ix] == "k":
            print(k,end="")
        elif file[ix] == "l":
            print(l,end="")
        elif file[ix] == "m":
            print(m,end="")
        elif file[ix] == "n":
            print(n,end="")
        elif file[ix] == "o":
            print(o,end="")
        elif file[ix] == "p":
            print(p,end="")
        elif file[ix] == "q":
            print(q,end="")
        elif file[ix] == "r":
            print(r,end="")
        elif file[ix] == "s":
            print(s,end="")
        elif file[ix] == "t":
            print(t,end="")
        elif file[ix] == "u":
            print(u,end="")
        elif file[ix] == "v":
            print(v,end="")
        elif file[ix] == "w":
            print(w,end="")
        elif file[ix] == "x":
            print(x,end="")
        elif file[ix] == "y":
            print(y,end="")
        elif file[ix] == "z":
            print(z)
        elif file[ix] ==" ":
            print(space,end="")
    except:
        print()
        print(val)
