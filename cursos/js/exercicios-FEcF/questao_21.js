function plano(idade)
{   
    let adicional;
    if(idade<10)
    {
        adicional = 80;
    }
    else if(idade>=10 && idade<30)
    {
        adicional = 50;
    }
    else if(idade>=30 && idade<60)
    {
        adicional = 95;
    }
    else if(idade>=60){
        adicional = 130
    }
    
    if(idade<0)
    {
        console.log("Apresente uma idade valida")
    }
    else
    {
        let valorFinal = 100+adicional;
        console.log(`Valor Final: R$${valorFinal},00`);
    }
}

plano(50)
plano(5)
plano(15)
plano(-8)