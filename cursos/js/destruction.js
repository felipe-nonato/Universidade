const teste = {
    nome: "Luis",
    idade:  19,
    materia: "Engenharia da Computação"
}

const { nome } = teste

console.log(nome)

const [a] = [10]
console.log(a)

function rand({min = 0, max = 1000}){

    const valor = Math.random()*(max-min) + min
    return Math.floor(valor)

}

console.log(rand({max:50, min:100}))