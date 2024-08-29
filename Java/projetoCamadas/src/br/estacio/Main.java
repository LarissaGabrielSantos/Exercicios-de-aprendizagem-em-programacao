package br.estacio;

import br.estacio.input.AlunoInput;
import br.estacio.model.Aluno;
import br.estacio.util.AlunoUtil;

public class Main {

	public static void main(String[] args) {
		AlunoUtil util = new AlunoUtil();
		AlunoInput input = new AlunoInput();
		Aluno aluno = new Aluno();
		aluno.setMatricula(input.lerMatricula());
		aluno.setNome(input.lerNome());
		Integer resposta = util.writeAluno(aluno);
		if (resposta.equals(1)) {
			System.out.println("gravacao ok");
		} else {
			System.out.println("erro. nao realizada a gravacao");
		}

		System.out.println(aluno);
	}
}
