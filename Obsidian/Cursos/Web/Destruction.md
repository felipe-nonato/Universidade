- O que é?
	
	Uma sintaxe que faz com que a variavel seja extraida do objeto/função e torna ela acessivel no codigo fora de seu escopo.

- Destructing em objetos

exemplo:


```
const teste = {

nome: "Luis",

idade: 19,

materia: "Engenharia da Computação"

}  

const { nome } = teste

console.log(nome)
```

- Destructing em array

Cria uma variavel dentro de uma lista e atribui o valor diretamente.
```
const [a] = [10]
console.log(a)
```

- Destructing em Funções

Cria uma variavel dentro de uma lista e atribui o valor diretamente.
```
function rand({min = 0, max = 1000}){

const valor = Math.random()*(max-min) + min

return Math.floor(valor)

}  

console.log(rand({max:50, min:100}))
```

