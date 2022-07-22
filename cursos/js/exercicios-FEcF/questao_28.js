// forma de criar array por um tamanho direto
const a = Array.from(new Array(155), (x,i)=> i)
/* 
Pega o objeto Array com seu parametro from, e como parametro do from
passa um novo array com o seu tamanho dentro, e a função de regimento após.
*/
console.log(a)

let imparPar = (a) => 
{
    let contPar = 0;
    let contImpar = 0;
    for(let i = 0; i < a.length; i++)
    {
        if(i%2==0){contPar++}
        else{contImpar++}
    }
    console.log(`Quantidade de números pares:${contPar}`)
    console.log(`Quantidade de números impares:${contImpar}`)
}

imparPar(a)