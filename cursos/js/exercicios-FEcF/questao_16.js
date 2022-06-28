function calculadora(value1, op, value2){
    switch(op){
        case "+":
            console.log(`Resultado: ${value1+value2}`)
            break
        case "-":
            console.log(`Resultado: ${value1-value2}`)
            break
        case "*":
            console.log(`Resultado: ${value1*value2}`)
            break
        case "/":
            console.log(`Resultado: ${value1/value2}`)
            break
        default:
            console.log("ERRO")
            break
    }
}

calculadora(2,"+",2)
calculadora(8,"*",9)
calculadora(7,"/",5)
calculadora(9,"-",1)