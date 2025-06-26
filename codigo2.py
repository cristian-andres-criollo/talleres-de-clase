for i in range(1, 11):
    puesto = int(input(f"Ingrese el puesto del participante {i}: "))

    if puesto == 1:
        premio = "es la suma de $1.000.000 pesos"
    elif puesto == 2:
        premio = "es la suma de $500.000 pesos"
    elif puesto == 3:
        premio = "es la suma de $250.000 pesos"
    elif puesto == 4:
        premio = "es la suma de $100.000 pesos"
    elif puesto == 5:
        premio = "es una medalla"
    elif 6 <= puesto <= 10:
        premio = "es un dulce"
    else:
        premio = "puesto invalido.debe estar entre el 1 y el 10"
    print("su premio:",premio)