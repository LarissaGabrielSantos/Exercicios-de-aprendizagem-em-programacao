package revisao;

import java.util.UUID;

public abstract class Funcionario {
	private String id;
	private String nome;
	private Double salarioLiquido;

	public Funcionario() {
		this.id = UUID.randomUUID().toString();
	}

	
	public abstract Double calcularSalario();

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}


	public Double getSalarioLiquido() {
		return salarioLiquido;
	}


	public void setSalarioLiquido(Double salarioLiquido) {
		this.salarioLiquido = salarioLiquido;
	}

	
}
