Array.prototype.filter2 = function (callback)
{
    const novoArray = []
    for(let i = 0; i < this.length; i++)
    {
        if(callback(this[i],i,this))novoArray.push(this[i])
    }
    return novoArray
}

const produtos = 
[
    { nome: "notebook", preco: "2599", fragil: true },
    { nome: "Macbook", preco: "4599", fragil: true },
    { nome: "copo de vidro", preco: "18.9", fragil: true },
    { nome: "copo de plastico", preco: "15.2", fragil: false }
]
const ehCaro = (item) => item.preco>=500 
const ehFragil = (item) => item.fragil
// console.log(produtos.filter(ehCaro).filter(ehFragil))
console.log(produtos.filter2(ehCaro).filter(ehFragil))
