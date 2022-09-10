function tipoTriangulo(l1,l2,l3){
    if(l1===l2 && l2===l3){
        console.log('Equilátero')
    }else if(l1!==l2 && l2!==l3){
        console.log('Escaleno')
    }else{
        console.log('Isósceles')
    }
}

tipoTriangulo(3,1,2)