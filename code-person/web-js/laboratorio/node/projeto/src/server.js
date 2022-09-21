const porta = 3000;
const express = require('express');
const bd = require('./bancoDeDados');
const bodyParser = require('body-parser')

const app = express();

app.use(bodyParser.urlencoded({extended: true}))

app.get('/produtos', (req,res)=>{
        res.send(bd.getProdutos()) //Converte para JSON
})

app.get('/produtos/:id', (req,res)=>{
        res.send(bd.getProduto(req.params.id))
})

app.post('/produtos', (req,res)=>{
        const produto = bd.salvarProduto({
                nome: req.body.nome,
                preco: req.body.preco
        })
        res.send(produto)
})

app.put('/produtos/:id', (req,res)=>{
        const produto = bd.salvarProduto({
                id: req.params.id,
                nome: req.body.nome,
                preco: req.body.preco
        })
        res.send(produto)
})

app.delete('/produtos/:id', (req,res)=>{
        const produto = bd.excluirProduto(req.params.id)
        res.send(produto)
})
app.listen(porta, ()=>{console.log(`Rodando na porta : ${porta}.`)})