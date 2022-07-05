function aumento(plano, salAtual)
{
    let novoSal=0;
    let flag = true;
    switch (plano) {
        case "A":
            novoSal = salAtual+salAtual*0.1
            break;
        case "B":
            novoSal = salAtual+salAtual*0.15
            break;
        case "C":
            novoSal = salAtual+salAtual*0.2
            break;
        default:
            flag = false
            break;
    }
    if(flag)
    {
        console.log(`O salario com aumento é ${novoSal.toFixed(2)}`)
    }
    else
    {
        console.log(`ERRO! apresente um plano valido`)
    }
}

aumento("A",1000)
aumento("B",1500)
aumento("C",800)
aumento("D",8000)