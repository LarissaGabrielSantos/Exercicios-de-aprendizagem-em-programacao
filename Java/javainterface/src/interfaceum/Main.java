package interfaceum;

public class Main {

	public static void main(String[] args) {
		EstrategiaApresentacao apresentacao = new Aluno();
		System.out.println(apresentacao.estrategia());
		EstrategiaApresentacao apresentacao2 = new Professor();
		System.out.println(apresentacao2.estrategia());
		
	}
}
