import mysql.connect


from admin_group_and_token import grups
db = mysql.connect(
    host = "localhost",
    user = "",
    passwd = "",
    database = "database"
)
print(db)

cursor = db.cursor()


cursor.execute("SHOW DATABASES")

databases = cursor.fetchall()

generic_request = input("richiesta: ")


# group aceess
token = grups.token
if generic_request == "setgroup admin":
    user = input("username e password : ")

    if token in grups.admin == grups.admin:
        command = input("ciao admin")

    elif token in grups.Sadmin == grups.Sadmin:
        command = input("ciao super admin")

    elif token in grups.owner == grups.owner:
        command = input("ciao owner")

        if command == "database":
            for utenti in databases:
                print(utenti)
                # add more command for admin
    else:
        print("token non valido")
        #add more command for admin

#registration
if generic_request == "registrazione":
    name = input("inserisci il tuo nome: ")
    surname = input("inserisci il tuo cognome: ")
    print("il tuo nome è? " + name)
    confirm_name = input("e il tuo cognome è? " + surname + " scrivi si o no")

    if confirm_name == "SI" or "si":
        query = "INSERT INTO users (name, user_name) VALUES (%s, %s)"
        nomi = ["'"+name+"'", "'"+surname+"'"]
        cursor.executemany(query, nomi)
        print("registarzione avvenuta con successo")

    else:
        print("reinserisci i dati un altra volta")
else:
    print("comando non valido")
