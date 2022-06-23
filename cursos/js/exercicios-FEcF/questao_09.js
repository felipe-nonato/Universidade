function estaAprovado(nota){
    
    let mult_cinco = (Math.ceil(nota/10))*10
    let dif = mult_cinco - nota
    if(dif<3 && nota >= 38){
        nota = mult_cinco
    }
    if(nota<40){
        console.log(`Reprovado! ${nota}`)
    }else if(nota >= 40 && nota<=100){
        console.log(`Não reprovado! ${nota}`)
    }else{
        console.log(`ERRO!`)
    }
}

estaAprovado(38)
estaAprovado(29)
estaAprovado(37)
estaAprovado(150)