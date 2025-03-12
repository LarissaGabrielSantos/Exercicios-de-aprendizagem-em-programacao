arquivo = open('manipulacao_de_dados_em_arquivos/dados.txt')

print('Nome do arquivo: ', arquivo.name)
print('Tamanho do arquivo (em bytes): ', arquivo.tell())
print('Modo do arquivo: ', arquivo.mode)
print('Arquivo está fechado? ', arquivo.closed)

arquivo.close()

print('Arquivo está fechado? ', arquivo.closed)