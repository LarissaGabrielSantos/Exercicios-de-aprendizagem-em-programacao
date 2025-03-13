arquivo = open('dados.txt')

print('Nome do arquivo: ', arquivo.name)
print('Tamanho do arquivo (em bytes): ', arquivo.tell())
print('Modo do arquivo: ', arquivo.mode)
print('Arquivo está fechado? ', arquivo.closed)

arquivo.close()

print('Arquivo está fechado? ', arquivo.closed)