public class JanelaMac implements JanelaImplementada {

    @Override
    public void desenharJanela(String titulo) {
        System.out.println(titulo + " - Janela MacOS");
    }

    @Override
    public void desenharBotao(String titulo) {
        System.out.println(titulo + " - Botão MacOS");
    }

    @Override
    public void desenharEditBox(String texto) {
        System.out.println("EditBox (MacOS): " + texto);
    }
}
