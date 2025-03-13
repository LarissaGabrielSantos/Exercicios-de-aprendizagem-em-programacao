arquivo = open('nomes.txt', 'w')
arquivo.write('Larissa')
arquivo.close()

arquivo = open('nomes.txt')
print(arquivo.readline())
arquivo.close()