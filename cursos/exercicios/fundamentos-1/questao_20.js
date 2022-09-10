function devolveQuantNotas(valor)
{
    let numCem = Math.floor(valor/100)
    valor  -= numCem*100
    let numCinq = Math.floor(valor/50)
    valor -= numCinq*50
    let numDez = Math.floor(valor/10)
    valor -= numDez*10
    let numCinc = Math.floor(valor/5)
    valor -= numCinc*5
    let numUm = Math.floor(valor)

    console.log("------------------------------------")

    if(numCem>=1){
        console.log(`${numCem} nota(s) de R$100,00`)
    }
    if(numCinq>=1){
        console.log(`${numCinq} nota(s) de R$50,00`)
    }
    if(numDez>=1){
        console.log(`${numDez} nota(s) de R$10,00`)
    }
    if(numCinc>=1){
        console.log(`${numCinc} nota(s) de R$5,00`)
    }
    if(numUm>=1){
        console.log(`${numUm} nota(s) de R$1,00`)
    }

    console.log("------------------------------------")
}

devolveQuantNotas(18)
devolveQuantNotas(250)
devolveQuantNotas(621)
