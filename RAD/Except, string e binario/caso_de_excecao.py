def divide (x,y):
    try:
        resultado = x/y
    except ZeroDivisionError:
        print("Opa, peraí! Você está tentando dividir por zero!!!")
    else:
        print("Certa! A sua resposta: ", resultado)
    finally:
        print('Isso sempre aparecerá')

divide(3,2)
divide(3,0)