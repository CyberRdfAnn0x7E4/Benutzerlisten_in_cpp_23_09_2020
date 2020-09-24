# Übung aus Unterricht c++ vom 23_09_2020 
# 1. User gibt Namen und Vornamen ein 
# 2. Frage ob weite User eingegeben werden sollen
# 3. Verarbeitung zu Liste Vorname-Punkt-zwei Zeichen aus dem Nachnamen
# 4. Ausgabe als Liste
next_user = "y"
user_liste = []
while next_user!="n":
    user_eingabe = input("Hallo geben Sie ihren Vornamen und Nachnamen ein: ")
    user_eingabe = user_eingabe.replace(" ", ".")           # Methode ersetzt ein Zeichen durch ein anderen Zeichen 
    teil_string1, teil_string2 = user_eingabe.split(".")    # an diesem Zeichen werden die Strings geschnitten
    teil_string2 = teil_string2[:2]                         # abschneiden von Anfang : bis 2
    user_eingabe = teil_string1 + "." + teil_string2        # Strings zusammenführen
    user_liste.append(user_eingabe)
    next_user = input("Wollen Sie noch einen User eingeben? y/n")
print("Ausgabe", user_liste)
