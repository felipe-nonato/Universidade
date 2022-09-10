const a = Array.from(new Array(20),(x,i)=>i)
const b = [10,11,12,13,4,5]

function estaNoIntervalo(a)
{
    let contDentro = 0;
    let contFora = 0;
    for(let i = 0; i < a.length;i++)
    {
        if(a[i]>=10 && a[i]<=20)
        {
            contDentro++;
        }
        else
        {
            contFora++;
        }
    }
    console.log(`Há ${contDentro} numeros dentro do intevalo [10,20]`)
    console.log(`Há ${contFora} numeros fora do intevalo [10,20]`)
}

estaNoIntervalo(a)
console.log()
estaNoIntervalo(b)
