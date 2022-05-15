Links: 

para entender esta nota é importante ver estas outras notas:
- [[Matrizes - Igualdade, Adição e Subtração]]
- [[Matriz - Transposta, Simétrica e Antissimétrica]]
- [[Matrizes - introdução]]
- [[Matrizes - Lei de Formação]]
- [[Matrizes - Identidade e inversa]]
- [[Matrizes - Multiplicação]]

## O que é?
A regra de Chió é utilizada para reduzir o grau de um determinante de ordem nn para um de grau n−1n−1. Ela se baseia no Teorema de Jacobi e pode ser utilizada quando o termo de posição a11a11 vale 11.

Utilizaremos como exemplo uma matriz A4×4A4×4, mas a ideia é a mesma para outras dimensões.

![[Captura de tela de 2022-05-13 21-42-27.png]]

O primeiro passo é multiplicar a coluna 11 pelo termo a12a12 e subtrair este resultado da coluna 22. Desta maneira o termo de posição a12a12 passará a ser nulo:  

![[Captura de tela de 2022-05-13 21-42-36.png]]
Repetindo o procedimento para a terceira e a quarta colunas teremos:


![[Captura de tela de 2022-05-13 21-42-46.png]]
Utilizando o Teorema de Laplace para a primeira linha, o determinante será apenas o cofator A11A11:  


![[Captura de tela de 2022-05-13 21-42-52.png]]
Ou seja, transformamos um determinante de ordem 44 em outro equivalente, mas de ordem 33.

#### Observação

Caso o termo de posição a11a11 não seja 11, podemos utilizar as propriedades do determinante (troca de linhas, multiplicação por um número etc) para forçar que ele seja 11.

7.1

#### Aplicação da regra de Chió

Iremos utilizar a regra de Chió para reduzir o grau do determinante abaixo:  

![[Captura de tela de 2022-05-13 21-43-02.png]]

Primeiro repare que o termo de posição a11a11 não é 11 , então utilizaremos algumas trocas de linhas e colunas para que o elemento a44=1a44=1 chegue à posição a11a11.

![Aplicacao Chio](https://matika.com.br/images/77/aplicacao_chio.svg)

Repare que com duas trocas o sinal do determinante mudou duas vezes, ou seja, não se alterou.

Agora, acompanhe passo-a-passo a regra de Chió sendo utilizada para construir a nova coluna 22. Outros elementos serão omitidos para facilitar a visualização.

1.O primeiro elemento será 00.

![Aplicacao Chio Passo 1](https://matika.com.br/images/97/aplicacao_chio_passo_1.svg)

2. Para encontrar o segundo elemento, multiplicamos a21a21 por a12a12 e subtraímos de a22a22:

![Aplicacao Chio Passo 2](https://matika.com.br/images/104/aplicacao_chio_passo_2.svg)

2–2⋅0=22–2⋅0=2

3. Para encontrar o terceiro elemento, multiplicamos a31a31 por a12a12 e subtraímos de a32a32:

![Aplicacao Chio Passo 3](https://matika.com.br/images/106/aplicacao_chio_passo_3.svg)

0–2⋅3=−60–2⋅3=−6

4. Para encontrar o quarto elemento, multiplicamos a41a41 por a12a12 e subtraímos de a42a42:

![Aplicacao Chio Passo 4](https://matika.com.br/images/105/aplicacao_chio_passo_4.svg)

−1–2⋅3=−7−1–2⋅3=−7

5. Agora, para construirmos a terceira e a quarta colunas, utilizaremos os termos a13=0a13=0 e a14=−2a14=−2 como pivôs, respectivamente.  
Esta etapa não será feita passo-a-passo, mas observe como ficam as operações:

![Aplicacao Chio Passo 5](https://matika.com.br/images/103/aplicacao_chio_passo_5.svg)

6. Resolvendo as operações pendentes, teremos o determinante 4×44×4, que em seguida será convertido em um 3×33×3.

![[Pasted image 20220513214514.png]]

7. Agora podemos calcular o determinante utilizando a regra de Sarrus:

![[Pasted image 20220513214532.png]]

tags: #determinante #matematica #monitoria