# acidity of a solution #

indice_acid = float(input())

while indice_acid != -1:
    if indice_acid < 7:
        print("ACID")
    if indice_acid == 7:
        print("NEUTRAL")
    if indice_acid > 7:
        print("BASIC")
    indice_acid = float(input())
