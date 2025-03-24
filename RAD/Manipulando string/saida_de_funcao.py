<<<<<<< HEAD
def get_coxinhas(*pedidos):
    return[f'{pedido} coxinhas' for pedido in pedidos]

salgados_return = get_coxinhas(4, 6, 8)
print("Usando return: ")
print(salgados_return)

def get_joelho(*pedidos):
    for pedido in pedidos:
        yield f'{pedido} joelho(s)'

print("\nUsando Yield:")
for salgado in get_joelho(4,6,8):
=======
def get_coxinhas(*pedidos):
    return[f'{pedido} coxinhas' for pedido in pedidos]

salgados_return = get_coxinhas(4, 6, 8)
print("Usando return: ")
print(salgados_return)

def get_joelho(*pedidos):
    for pedido in pedidos:
        yield f'{pedido} joelho(s)'

print("\nUsando Yield:")
for salgado in get_joelho(4,6,8):
>>>>>>> bc241d438e0966708cc012a6ea8f4962e6aba9eb
    print(salgado)