caminho_arquivo = 'nomes.txt'

arquivo = open("nomes.txt", 'w')
arquivo.write("Larissa")
arquivo.writelines(["\nCallie", "\nLucas", "\nKhaleesi"])
arquivo.close()

arquivo = open(caminho_arquivo, 'r')
linhas = arquivo.readlines()
for i, linha in enumerate(linhas, start=1):
    print(f'Linha {i}: {linha}')