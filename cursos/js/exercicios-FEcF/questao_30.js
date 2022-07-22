let a = Array.from(new Array(25), (x,i)=>i)
let b = [10,20,2,5,9,74,6,9,5]

const menorMaior = (a) =>
{
    let menor = 0;
    let maior = 0;
    let posicaoMaior;
    let posicaoMenor;
    for(let i = 0; i < a.length; i++)
    {
        if(i==0)
        {
            menor = a[i]
            maior = a[i]
            posicaoMaior = i
            posicaoMenor = i
        }
        else
        {
            if(a[i]>maior){maior = a[i]; posicaoMaior = i}
            else if(a[i]<menor){menor=a[i]; posicaoMenor = i}
        }
    }
    console.log(
        `Maior elemento ${maior} -> posição [${posicaoMaior}]`
        )
    console.log(
        `Menor elemento ${menor} -> posição [${posicaoMenor}]`
        )
}

menorMaior(a)
console.log()
menorMaior(b)