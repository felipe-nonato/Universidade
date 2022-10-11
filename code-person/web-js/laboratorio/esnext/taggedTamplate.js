function tag(partes, ...params)
{
    const resultado = []
    console.log(partes)
    console.log(params)
    for(let i = 0;i<params.concat(partes).length;i++)
    {
        resultado.push(partes[i])
        resultado.push(params[i])
    }
    return resultado.join('')
}

let name = "luis"
let nameProf = "henrique"
console.log(tag `Sim ${name}, isso ainda da certo, e ${name}, não esqueça da atividade de ${nameProf}`)