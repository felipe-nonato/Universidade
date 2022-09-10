Array.prototype.reduce2 = function(callback){
    for(let i = 0)
}


const alunos = [ 
    {nome:"joão", nota: 7.3, bolsista: false},
    {nome:"Maria", nota: 9.2, bolsista: true},
    {nome:"joão", nota: 9.8, bolsista: false},
    {nome:"joão", nota: 8.7, bolsista: true},
]

// Todos os alunos são bolsistas?

/*
Forma mais simples de resolver

const infoEveryAlunos = alunos.every(a => a.bolsista)
console.log(infoEveryAlunos)
*/

const todosBolsistas = (resultado, bolsista) => resultado && bolsista
console.log(alunos.map(a => a.bolsista).reduce(todosBolsistas))

// Algum aluno eh bolsista

const algumBolsista = (resultado,bolsista) => resultado || bolsista
console.log(alunos.map(a => a.bolsista).reduce(algumBolsista))

/* 
Forma mais simples de resolver

const infoSomeAlunos = alunos.some(a => a.bolsista)
console.log(infoSomeAlunos)
*/