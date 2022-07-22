let a = Array.from(
    {length:5},(x,i)=>
    {
        if(i%2==0){return i}
        else {return -i}
    }
)
let b = [-1,-2,2,3,5,6,-10]
console.log(a)

let contaNegativos = array => 
{
    let cont = 0;
    for (let index = 0; index < array.length; index++) {
        if(array[index]<0){cont++}
    }
    console.log(`Quantidade de numeros negativos: ${cont}`)
}

contaNegativos(a)
contaNegativos(b)