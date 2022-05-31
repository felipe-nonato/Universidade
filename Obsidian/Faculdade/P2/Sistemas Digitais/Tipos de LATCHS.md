## Bibliografia da disciplina
- Sistemas Digitais: Principios e aplicações - TOCCI
---
# Elemento de memoria
> 
> Uma porta logica sozinha não pode armazenar memoria, mas uma junção de portas logicas pode criar um circuito com memoria.
> 

- O elemento mais importante de memoria é o Flip-Flop, construido a partir de portas logicas.

- Existem diversos tipos de flip-flop

- Funcionamento de uma flip-flop:
![[Pasted image 20220414181200.png]]
> Recebe os inputs e retorna duas saidas, output e o inverso de output.

Quando Q=1 e ~Q = 0 -> ALTO, SET
Quando Q=0 e ~Q = 1 -> LOW, CLEAR, RESET

---
# LATCH
- Biestável.
- Similares aos flip-flops.
- Diferença para F-F é o metodo para mudança de estado.

> **Mas como isso funciona?**
> 
> A memoria nada mais é do que um loop onde a energia fica presa, guardando apenas um estado, para alterar esse valor da memoria, precisamos enviar pulsos eletricos como entrada, para SET ou para RESET.
>
>- Veja uma imagem abaixo que resume:
>![[Pasted image 20220414183353.png]]

É importante ressaltar a importancia da tabela, que vai auxiliar na analise do grafico.

Sempre que a palavra SET e CLEAR vierem acompanhadas de uma linha em cima, significa que elas são setadas com 0, ou seja, quando a entrada for 0 ela ativa a função desejada.

Veja uma analise de grafico a seguir:

![[Pasted image 20220414184510.png]]
com o auxilio da tabela podemos ver o resultado em Q.

---
 Veja a tabela que representa um latch com porta NOR:

![[Pasted image 20220414185706.png]]
>Inverte setando 0

veja a tabela de LATCH NAND:
![[Pasted image 20220414185750.png]]
>Inverte setando 1
---
# Resumo
![[Pasted image 20220414192406.png]]
