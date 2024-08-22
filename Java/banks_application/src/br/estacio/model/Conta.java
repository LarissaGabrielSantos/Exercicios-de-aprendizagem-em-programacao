package br.estacio.model; //como se fosse o #include

public class Conta { // como se fosse o int main void

	private Long id; // como se fosse a declaração de variavel

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

	public void depositar() { // metodo sempre no infinitivo
		if (this.deposito < 0) {
			System.out.println("Valor negativo. Não pode!"); // tipo o printf
		} else {
			this.saldo = this.saldo + this.deposito; // igual saldo=saldo+num
		}

	}
}
