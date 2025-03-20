import re

texto = "O número de telefone de Larissa é (123) 456-7890."
padrao = r'\(\d{3}\) \d{3}-\d{4}'

resultado = re.search(padrao, texto)

if resultado:
    numero_telefone = resultado.group()
    print("Número de telefone encontrado:", numero_telefone)
else:
    print("Número de telefone não encontrado.")