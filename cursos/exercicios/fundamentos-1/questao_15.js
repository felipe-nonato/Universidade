function comprarCarro(str){
    switch (str) {
        case "motocicletas": case "sedans": case "caminhonetes":
            console.log('Tem certeza que não prefere este modelo?')
            break;
        
        case "hatch":
            console.log('Compra efetuada com sucesso')
            break

        default:
            console.log('Não trabalhamos com este tipo de automóvel aqui')
            break;
    }
}

comprarCarro("moto")
comprarCarro("motocicletas")
comprarCarro("hatch")