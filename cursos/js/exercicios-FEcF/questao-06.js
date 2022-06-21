const juroS = (capi,taxa,temp) => {
    let j = capi*taxa*temp
    console.log(`Juros simples: R$${(capi+j).toFixed(2)}`) 
}

const juroC = (capi,taxa,temp) => {
    console.log(`Juros compostos: R$${(capi*((1+taxa)**temp)).toFixed(2)}`) 
}

juroS(1500,0.2,2)
juroC(1500,0.2,2)