const url = 'http://files.cod3r.com.br/curso-js/funcionarios.json'
const axios = require('axios');

const chineses = p => (p.pais === "China")
const mulheres = p => (p.genero === "F")
const menorSalario = (p, pAtual) => p.salario < pAtual.salario ? p : pAtual

axios.get(url).then(response => {
    const pessoas = response.data;
    const resposta = pessoas
    .filter(chineses)
    .filter(mulheres)
    .reduce(menorSalario)
    
    console.log(resposta);
})
