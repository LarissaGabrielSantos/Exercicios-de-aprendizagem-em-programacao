package revisao;

public class Main {

	public static void main(String[] args) {

		FuncionarioCLT clt = new FuncionarioCLT();
		clt.setNome("jose");
		clt.setSalario(10000.);
		clt.setDesconto(2000.);
		clt.setSalarioLiquido(clt.calcularSalario());

		System.out.println(clt.getId());
		System.out.println(clt.getNome());
		System.out.println(clt.getSalarioLiquido());
	}
}
