package interfacedois;


public class Aluno {

	private String nome;
	private EstrategiaMedia estrategiaMedia;

	public Aluno(String nome, EstrategiaMedia estrategiaMedia) {
		this.nome = nome;
		this.estrategiaMedia = estrategiaMedia;
	}

	public void obterMedia(Double nota1, Double nota2, Double trabalho) {
		
		System.out.println("Nome:" + nome);
		System.out.println("Media:" + this.estrategiaMedia.media(nota1, nota2, trabalho));
	}
}
