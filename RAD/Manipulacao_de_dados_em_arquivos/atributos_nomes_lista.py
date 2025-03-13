caminho_arquivo = 'nomes.txt'

arquivo = open(caminho_arquivo, 'r')
linhas = arquivo.readlines()
for i, linha in enumerate(linhas, start=15):
    print(f'Linha {i}: {linha}')