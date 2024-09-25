package revisao;

public class FuncionarioCLT extends Funcionario {

	private Double salario;
	private Double desconto;

	@Override
	public Double calcularSalario() {
		return salario - desconto;
	}

	public Double getSalario() {
		return salario;
	}

	public void setSalario(Double salario) {
		this.salario = salario;
	}

	public Double getDesconto() {
		return desconto;
	}

	public void setDesconto(Double desconto) {
		this.desconto = desconto;
	}

}
