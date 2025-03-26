def criar_registro_notas(arquivo):
    with open(arquivo, "w") as file:
        file.write("------------------------------------")
        file.write("\nRegistro de notas dos alunos\n")
        file.write("------------------------------------")

def adicionar_nota(arquivo, aluno, nota):
    with open(arquivo, "a") as file:
        file.write(f"\nAluno(a): {aluno}\n")
        file.write(f"\nNota: {nota}\n")
        file.write("------------------------------------")

if __name__== '__main__':
    registro_notas = "registro_notas.txt"
    criar_registro_notas(registro_notas)
    adicionar_nota(registro_notas, "Larissa", 8.5)
    adicionar_nota(registro_notas, "Khaleesi", 9.8)
    adicionar_nota(registro_notas, "Lucas", 6.7)