caminho_arquivo = 'Manipulacao_de_dados_em_arquivos/nomes.txt'

arquivo = open(caminho_arquivo, 'r')
linhas = arquivo.readlines()
for i, linha in enumerate(linhas, start=2):
    print(f'Linha {i}: {linha}')