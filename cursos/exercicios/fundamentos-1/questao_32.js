let a = Array.from({length:15},(x,i)=>i)
let b = [5,2,3,9,4,8,5]

let media = array =>
{
    let somador = 0;
    for (let index = 0; index < array.length; index++) {
        somador+=array[index]
    }
    let media = (somador/array.length).toFixed(2)
    return media
}

console.log(media(a))
console.log(media(b))