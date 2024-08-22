package br.estacio.model; 

public class Conta { 

	private Long id; 

	private String nome;

	private Double saldo = 0d;

	private Double deposito;

	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Double getSaldo() {
		return saldo;
	}

	public void setSaldo(Double saldo) {
		this.saldo = saldo;
	}

	public Double getDeposito() {
		return deposito;
	}

	public void setDeposito(Double deposito) {
		this.deposito = deposito;
	}

	public void depositar() { 
		if (this.deposito < 0) {
			System.out.println("Valor negativo. Não pode!"); // tipo o printf
		} else {
			this.saldo = this.saldo + this.deposito; // igual saldo=saldo+num
		}

	}
}
