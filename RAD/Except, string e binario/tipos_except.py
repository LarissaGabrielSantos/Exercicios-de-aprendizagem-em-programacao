try:
    f = open('Nomes.txt')
    s = f.readline()
    i = int(s.strip())

except FileNotFoundError:
    print("Arquivo 'Nomes.txt' não encontrado.")
except IOError:
    print("Erro na abertura do arquivo.")
except ValueError:
    print("Formato inválido encontrado no arquivo.")
except Exception as e:
    print(f"Erro inesperado: {e}")
    raise