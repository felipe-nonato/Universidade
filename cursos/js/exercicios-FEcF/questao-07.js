function baskara (a,b,c){
    let delta = (b**2)-(4*a*c)
    if(delta<0){
        console.log('Delta é negativo')
    }else{
        let x = [
            (-b+delta)/(2*a),
            (-b-delta)/(2*a)
        ]
        if(x[0]===x[1]){
            console.log(`Raizes Iguais: ${x[0]}}`)
        }else{
            console.log(`X1 = ${x[0]}`)
            console.log(`X2 = ${x[1]}`)
        }
    }
}
baskara(5,4,4)