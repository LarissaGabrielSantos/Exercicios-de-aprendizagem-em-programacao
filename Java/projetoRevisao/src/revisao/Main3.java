package revisao;

public class Main3 {

	public static void main(String[] args) {
		Deposito deposito = new Deposito();
		try {
			System.out.println(deposito.calculo(-10., 200.));
			System.out.println("Final do bimestre");
		} catch (Exception e) {
			System.out.println("error" + e.getMessage());
		}
	}
}
