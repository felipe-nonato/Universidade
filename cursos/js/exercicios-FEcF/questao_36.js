let a = [1,2,3,4,5,6]
let b = 8

function mult(vetor, inteiro)
{
    let novoVetor = []
    for (let index = 0; index < vetor.length; index++) {
        novoVetor[index] = vetor[index]*inteiro;
    }
    return novoVetor
}

function multMaior(vetor, inteiro)
{
    let novoVetor = []
    for (let index = 0; index < vetor.length; index++) {
        if(vetor[index]>5){novoVetor[index] = vetor[index]*inteiro}
        else{novoVetor[index] = vetor[index]}
    }
    return novoVetor
}

console.log(mult(a,b))
console.log(multMaior(a,b))