function basquete(string){
    let str = string.split(" ")
    let valueMaior
    let recorde = 0
    let valueMenor
    let menor
    str.forEach(element => {
        element = Number(element)
    });
    for(i = 0;i<str.length;i++){
        if(i == 0){
            valueMaior = str[0]
            valueMenor = str[0]
            menor = i+1
        }else if(str[i]>valueMaior){
            valueMaior = str[i]
            recorde++
        }else if(str[i]<valueMenor){
            valueMenor = str[i]
            menor = i+1
        }
    }
    return [recorde,menor]
}
console.log(basquete("10 20 20 8 25 3 0 30 1"))