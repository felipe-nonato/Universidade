Array.prototype.map2 = function(callback){
    const novoArray = []
    for(let i = 0; i < this.length; i++)
    {
        novoArray.push(callback(this[i], i , this))
    }
    return novoArray
}

const carrinho = [
    '{"nome":"borracha", "preco":3.45}',
    '{"nome":"caderno", "preco": 13.90}',
    '{"nome":"kit de lapis", "preco": 41.22}',
    '{"nome":"caneta", "preco": 7.50}',
]

const paraObjeto = (json)=>JSON.parse(json)
const apenasPreco = (item)=>item.preco

// console.log(carrinho.map((item)=>{
//    return apenasPreco(paraObjeto(item))
// }));

console.log(carrinho.map2((item)=>{
    return apenasPreco(paraObjeto(item))
 }));


