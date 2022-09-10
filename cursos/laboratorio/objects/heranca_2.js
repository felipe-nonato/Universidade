const carro = 
{
    velAtual: 0,
    velMax: 200,
    acelerar(delta)
    {
        if(this.velAtual+delta <= this.velMax)
        {
            this.velAtual += delta
        }
        else
        {
            this.velAtual = this.velMax
        }
    },
    status()
    {
        return `${this.velAtual}km/h de ${this.velMax}km/h`
    } 
}

const ferrari = 
{
    modelo: "Roma",
    velMax: 324
}

const lamborghini =
{
    modelo: "poison",
    status()
    {
        return `${this.modelo}: ${super.status()}`
    }
}

Object.setPrototypeOf(ferrari,carro)
Object.setPrototypeOf(lamborghini,carro)

console.log(lamborghini.status())
ferrari.acelerar(300)
console.log(ferrari.status())