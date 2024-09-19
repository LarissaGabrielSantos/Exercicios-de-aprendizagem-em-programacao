package varargs;

public class Main {

	public static void main(String[] args) {
		Aluno aluno = new Aluno();
		try {
			aluno.setNome("callie");
			aluno.setNota1(9.);
			aluno.setNota2(-1.);
			aluno.obterMedia();
		} catch (Exception ex) {
			System.out.println("error" + ex.getMessage());
		}
		System.out.println("continua... o programa");
	}
}
