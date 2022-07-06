function media(codigo,nota1,nota2,nota3)
{

    // Calculo
    let notas = [nota1,nota2,nota3]
    notas = notas.sort((a,b)=>a-b)
    media = (notas[0]*4+notas[1]*3+notas[2]*3)/(3+3+4)

    // Printando 
    console.log(`Codigo do Aluno: ${codigo}`)
    for(i=2;i>=0;i--){
        console.log(
            `nota ${i+i}: ${notas[i].toFixed(1)}`
            )
    }
    console.log(`Media: ${media.toFixed(1)}`)
    if(media>=5)
    {
        console.log(`APROVADO`)
    }
    else
    {
        console.log(`REPROVADO`)
    }


}
media(500, 8.2,5.8,1.2)