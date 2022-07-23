const pa = (n,a1,r) => 
{
    let soma = 0;
    console.log("Elementos:")
    for(let i = a1; i<=n; i+=r)
    {
        soma+=i;
        console.log(i)
    }
    console.log(`\nSoma: ${soma}`)

}

const pg = (n,a1,r) => 
{
    let soma = 0;
    console.log("Elementos:")
    for(let i = a1; i<=n; i*=r)
    {
        soma+=i;
        console.log(i)
    }
    console.log(`\nSoma: ${soma}`)

}


pa(5,0,1)
pg(25,1,5)