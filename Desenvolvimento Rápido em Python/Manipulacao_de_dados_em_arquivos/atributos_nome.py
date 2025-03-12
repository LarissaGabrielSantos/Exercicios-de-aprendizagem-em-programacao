arquivo = open('manipulacao_de_dados_em_arquivos/nomes.txt', 'w')
arquivo.write('Larissa')
arquivo.close()

arquivo = open('manipulacao_de_dados_em_arquivos/nomes.txt')
print(arquivo.readline())
arquivo.close()