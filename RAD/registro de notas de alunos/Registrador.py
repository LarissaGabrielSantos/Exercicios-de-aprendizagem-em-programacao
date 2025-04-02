from pathlib import Path
import json
from typing import List, Dict

class Aluno:
    def __init__(self, nome: str, nota: float):
        self.nome = nome.strip().title()
        self.nota = float(nota)

    def to_dict(self) -> Dict[str, float]:
        return {self.nome: self.nota}
    
    def __str__(self) -> str:
        return f"{self.nome}, {self.nota:.1f}"
    
class GerenciadorAlunos:
    def __init__(self, base_dir: Path):
        self.csv_path = base_dir / "alunos.csv"
        self.json_path = base_dir / "alunos.json"
        self.txt_path = base_dir / "alunos.txt"
        self.alunos: Dict[str, float] = self._carregar()

    def _carregar(self) -> Dict[str, float]:
        if self.csv_path.exists():
            try:
                with open(self.csv_path, "r") as f:
                    return {
                        nome: float(nota)
                        for nome, nota in (linha.strip().split(",") for linha in f)
                    }
            except FileNotFoundError:
                print("Arquivo CSV não encontrado.")
            except ValueError as ve:
                print(f"Erro ao converter nota para float: {ve}")
            except OSError as oe:
                print(f"Erro de sistema ao acessar o arquivo: {oe}")
        return {}
        
    def salvar(self) -> None:
        try:
            with open(self.csv_path, "w") as f_csv, open(self.txt_path, "w") as f_txt, open(self.json_path, "w") as f_json:
                for nome, nota in self.alunos.items():
                    linha = f"{nome}, {nota:.1f}\n"
                    f_csv.write(linha)
                    f_txt.write(f"{nome} tem nota {nota:.1f}\n")
                json.dump(self.alunos, f_json, indent=4)
        except Exception as e:
            print(f"Erro ao salvar os arquivos: {e}")
        
    def cadastrar(self, aluno: Aluno) -> bool:
        self.alunos[aluno.nome] = aluno.nota
        self.salvar()
        return True
        
    def remover(self, nome: str) -> bool:
        if nome in self.alunos:
            del self.alunos[nome]
            self.salvar()
            return True
        return False
        
    def alterar_nota(self, nome: str, nova_nota: float) -> bool:
        if nome in self.alunos:
            self.alunos[nome] = nova_nota
            self.salvar()
            return True
        return False
        
    def listar(self) -> List[str]:
        return [f"{nome}, {nota:.1f}" for nome, nota in self.alunos.items()]
        
    def buscar(self, nome: str) -> str:
        if nome in self.alunos:
            return f"{nome}, {self.alunos[nome]:.1f}"
        return "Aluno não encontrado."

if __name__ == "__main__":
    base_dir = Path(__file__).parent
    gerenciador = GerenciadorAlunos(base_dir)

    print("Cadastrando:", gerenciador.cadastrar(Aluno("Larissa", 9.5)))
    print("Lendo:", gerenciador.buscar("Larissa"))
    print("Lista completa:", gerenciador.listar())

    print("Removendo:", gerenciador.remover("Larissa"))
    print("Lista após remoção:", gerenciador.listar())
    print("Novo cadastro:", gerenciador.cadastrar(Aluno("Larissa", 8.5)))

    print("Alterando nota:", gerenciador.alterar_nota("Larissa", 10.0))
    print("Lista final:", gerenciador.listar())
