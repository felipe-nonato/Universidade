let alturas = [180,165]
let taxas = [2,6]

let ehDiferente = a => a[0]!=a[1]

let passaAltura = (a,t) => 
{
    let cont = 0;
    if(ehDiferente(a))
    {
        if(a[1]<a[0])
        {
            for(let i = a[1]; i < a[0]; i+=t[1])
            {
                cont++
            }
        }
        else
        {
            for(let i = a[0]; i < a[1]; i+=t[0])
            {
                cont++
            }
        }
    }
    return cont
}

console.log(passaAltura(alturas,taxas))