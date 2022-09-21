const schedule = require('node-schedule')

const tarefa = schedule.scheduleJob('*/5 * 16 * * 3', ()=>{
    console.log("Deu certo :)", new Date().getSeconds())
})

setTimeout(()=>{
    tarefa.cancel()
    console.log("tarefa cancelada!")
},20000)

const regra = new schedule.RecurrenceRule()
regra.dayOfWeek = [new schedule.Range(1,5)]
regra.hour = 16
regra.second = 0

const tarefa2 = schedule.scheduleJob(regra, ()=>{
    console.log("trocou de segundo ><")
})

/* 

> setTimeout -> Realiza a função após os milesimos passados como parametro
> setInterval -> Realiza a função de tempos em tempos (milesimos passados como parametro) 
> setImmediate -> Realiza a função imediatamente 
*/

