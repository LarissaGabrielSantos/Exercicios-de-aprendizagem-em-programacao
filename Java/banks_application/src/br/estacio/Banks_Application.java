package br.estacio;

import br.estacio.model.Conta;

public class Banks_Application {

	public static void main(String[] args) {

		Conta conta = new Conta(); 
		conta.setId(1001L);
		conta.setNome("carlos");
		conta.setSaldo(10000d);
		conta.setDeposito(300d);

		conta.depositar();
		
		System.out.println(conta.getNome() + "," + conta.getSaldo() + "saldo Final");

	}
}
