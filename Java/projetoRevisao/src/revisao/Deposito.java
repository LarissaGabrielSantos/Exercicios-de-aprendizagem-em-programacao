package revisao;

public class Deposito implements ICalculo {

	@Override
	public Double calculo(Double numero1, Double numero2) throws Exception {
		if (numero1 < 0. || numero2 < 0.) {
			throw new Exception("Numero1 ou Numero 2 nao podem ser negativos!");
		}
		return numero1 + numero2;
	}

}
