function cardapio(codigo,quant)
{
    let precoFinal = 0
    switch(codigo)
    {
        case 100:
            precoFinal = 3*quant
            break;

        case 200:
            precoFinal = 4*quant
            break;

        case 300:
            precoFinal = 5.5*quant
            break;
        
        case 400:
            precoFinal = 7.5*quant
            break;
        
        case 500:
            precoFinal = 3.5*quant
            break;
        
        case 600:
            precoFinal = 2.8*quant
            break;

        default:
            precoFinal = -1
            break;
    }

    if(precoFinal != -1)
    {
        console.log(`Preço final: ${precoFinal.toFixed(2)}`)
    }
    else
    {
        console.log("Produto não existente")
    }
}

cardapio(100,3)
cardapio(500,8)
cardapio(600,2)
cardapio(200,7)
cardapio(1000,3)