const porta = 3000;
const express = require('express');

const app = express();

app.get('/produtos', (req,res)=>{
        res.send({nome: 'Notebook', preco: 5000.00}) //Converte para JSON
})

app.listen(porta, ()=>{console.log(`Rodando na porta : ${porta}.`)})