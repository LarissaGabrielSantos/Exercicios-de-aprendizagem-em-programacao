import re
texto = "Meu email é: exemplo@gmail.com, entre em contato!"
padrao = r'\b\w+@\w+\.\w+\b'

novo_texto= re.sub(padrao, "[email oculto]", texto)
print(novo_texto)