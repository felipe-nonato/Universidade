function diaUtil(dia){
    switch (dia) {
        case 2: case 3 : case 4 :case 5: case 6:
            console.log(`Dia Util`)
            break;
        case 1: case 7:
            console.log(`Dia não Util`)
            break
        default:
            console.log(`Erro!`)
            break;
    }
}

diaUtil(1)
diaUtil(6)
diaUtil(7)