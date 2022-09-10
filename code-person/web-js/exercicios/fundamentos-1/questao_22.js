function retornaAnuidade(mes,valor)
{
    if(mes<1 || mes>12)
    {
        console.log("Erro, apresente um mês valido");
    }
    else
    {
        let meses_a_pagar = 12-mes;
        let montante = valor*((1+0.05)**meses_a_pagar);
        console.log(`Valor final: R$${montante.toFixed(2)}`);
    }
}
retornaAnuidade(5,1200)
retornaAnuidade(11,2000)
retornaAnuidade(1,700)
retornaAnuidade(0,8000)