function isBi(ano){
    let x = []
    x.push((ano%400) === 0 ? true : false)
    x.push(ano%4 === 0 ? true : false)
    if(x[0] || x[1]){
        return true
    }else{
        return false
    }
}

console.log(isBi(400))
console.log(isBi(2020))
console.log(isBi(2024))