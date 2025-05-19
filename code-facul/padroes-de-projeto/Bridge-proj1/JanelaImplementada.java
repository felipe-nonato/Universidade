public interface JanelaImplementada {
	void desenharJanela(String titulo);
	void desenharBotao(String titulo);
	default void desenharEditBox(String texto) {
		System.out.println("EditBox: " + texto);
	}
}
