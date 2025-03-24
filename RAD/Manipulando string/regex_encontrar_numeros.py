<<<<<<< HEAD
import re

texto = "O número de telefone de Larissa é (123) 456-7890."
padrao = r'\(\d{3}\) \d{3}-\d{4}'

resultado = re.search(padrao, texto)

if resultado:
    numero_telefone = resultado.group()
    print("Número de telefone encontrado:", numero_telefone)
else:
=======
import re

texto = "O número de telefone de Larissa é (123) 456-7890."
padrao = r'\(\d{3}\) \d{3}-\d{4}'

resultado = re.search(padrao, texto)

if resultado:
    numero_telefone = resultado.group()
    print("Número de telefone encontrado:", numero_telefone)
else:
>>>>>>> bc241d438e0966708cc012a6ea8f4962e6aba9eb
    print("Número de telefone não encontrado.")