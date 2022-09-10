{
    {
        {
            {var sera = "sera??"} //escopo da variavel é definido para todos
        }
    }
}

console.log(sera)

//escopo global

var num1 = 1

{
    var num1 = 2 //sobrescreve
    console.log('[var] dentro = ',num1)
}

console.log("[var] fora =", num1)

//escopo de bloco

let num = 1

{
    let num = 2
    console.log('[let] dentro = ',num)
}

console.log("[let] fora =", num)