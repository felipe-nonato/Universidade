
let a = "Luis Felipe Ferreira"
let b = "luis felipe ferreira"
let c = "luis felipe"

let compara = (a,b) =>
{
    let textA = a.toLowerCase()
    let textB = b.toLowerCase()

    if(textA===textB){return true}
    else{return false}
}

console.log(compara(a,b))
console.log(compara(a,c))
