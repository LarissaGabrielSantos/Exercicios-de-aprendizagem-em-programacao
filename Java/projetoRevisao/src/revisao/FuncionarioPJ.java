package revisao;

public class FuncionarioPJ extends Funcionario {

	private Integer quantidadeHorasTrabalhadas;
	private Double valorHora;

	@Override
	public Double calcularSalario() {

		return quantidadeHorasTrabalhadas * valorHora;
	}

	public Integer getQuantidadeHorasTrabalhadas() {
		return quantidadeHorasTrabalhadas;
	}

	public void setQuantidadeHorasTrabalhadas(Integer quantidadeHorasTrabalhadas) {
		this.quantidadeHorasTrabalhadas = quantidadeHorasTrabalhadas;
	}

	public Double getValorHora() {
		return valorHora;
	}

	public void setValorHora(Double valorHora) {
		this.valorHora = valorHora;
	}

}
