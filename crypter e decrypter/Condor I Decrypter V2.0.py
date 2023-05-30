print("[̲̅D][̲̅E][̲̅V]  [̲̅B][̲̅Y]  [̲̅C][̲̅O][̲̅N][̲̅D][̲̅O][̲̅R]")
#qui sto importando l'alfabeto e altre variabili che mi serviranno
#all'interno delle " " inserisci a cosa vuoi associare ogni singola lettere adesempi a = "b" ecc.
c = "a"
z = "b"
h = "c"
n = "d"
w = "e"
a = "f"
s = "g"
t = "h"
r = "i"
p = "j"
b = "k"
q = "l"
e = "m"
f = "n"
v = "o"
x = "p"
d = "q"
g = "r"
i = "s"
j = "t"
y = "u"
l = "v"
o = "w"
k = "x"
u = "y"
m = "z"
space = " "
val = "error"

# qui leggo il file da cryptare
file = input("inserisci la stringa: ")

num = len(file)
for ix in range (0,num):
    try:
        if file[ix] =="c":
            print(c,end="")
        elif file[ix] =="z":
            print(z,end="")
        elif file[ix]=="h":
            print(h,end="")
        elif file[ix]=="n":
            print(n,end="")
        elif file[ix]=="w":
            print(w,end="")
        elif file[ix]=="a":
            print(a,end="")
        elif file[ix]=="s":
            print(s,end="")
        elif file[ix]=="t":
            print(t,end="")
        elif file[ix]=="r":
            print(r,end="")
        elif file[ix]=="p":
            print(p,end="")
        elif file[ix] == "b":
            print(b,end="")
        elif file[ix] == "q":
            print(q,end="")
        elif file[ix] == "e":
            print(e,end="")
        elif file[ix] == "f":
            print(f,end="")
        elif file[ix] == "v":
            print(v,end="")
        elif file[ix] == "x":
            print(x,end="")
        elif file[ix] == "d":
            print(d,end="")
        elif file[ix] == "g":
            print(g,end="")
        elif file[ix] == "i":
            print(i,end="")
        elif file[ix] == "j":
            print(j,end="")
        elif file[ix] == "y":
            print(y,end="")
        elif file[ix] == "l":
            print(l,end="")
        elif file[ix] == "o":
            print(o,end="")
        elif file[ix] == "k":
            print(k,end="")
        elif file[ix] == "u":
            print(u,end="")
        elif file[ix] == "m":
            print(m,end="")
        elif file[ix] ==" ":
            print(space,end="")
    except:
        print()
        print(val)
