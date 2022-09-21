//todo
/* 
1. Entender logica do video 2 de express.
2. Fazer anotações sobre os metodos aprendidos.
3. Revisar metodos do HTTP. 
*/

const sequencece = {
    _id : 1,
    get id() {return this._id++}
}

const produtos = {}

function salvarProduto(produto)
{ 
    if(!produto.id) produto.id = sequencece.id
    produtos[produto.id] = produto
    return produto
}

const excluirProduto = (id)=>
{
    const produto = produtos[id]
    delete produtos[id]
    return produto
}
const getProduto = (id)=>{return produtos[id] || {}}
function getProdutos(){return Object.values(produtos)}

module.exports = {salvarProduto,getProduto,getProdutos, excluirProduto}