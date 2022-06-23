function fac(num){
    let res = 1
    for(let i = num; i>0;i--){
        res *= i
    }
    return res
}

console.log(fac(8))