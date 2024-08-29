package br.estacio.util;

import java.io.FileWriter;

import br.estacio.model.Aluno;

public class AlunoUtil {

	public Integer writeAluno(Aluno aluno) {
		try {

			FileWriter file = new FileWriter("C:/Users/siste/gravaaluno/aluno.txt", true);
			file.write(aluno + "\n");
			file.flush();
			file.close();
			return 1;

		} catch (Exception ex) {
			System.out.println(ex.getMessage());
			return -1;
		}
	}
}
