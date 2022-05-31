## - if e else:

```
if(condição) {
	bloco
}

else{
	bloco
}
```

## - elif/ else if:
```
else if(condição){
	bloco
}
```

## - Booleano
```
//há 3 formas de declarar um booleana

//1º
int name = 1 //T
int name = 0 //F

//2°
_Bool name = 1 //T
_Boll name = 0 //F

//3°
bool name = true
bool name = false

//Para este ultimo caso é necessario incluir a biblioteca stdbool
```

## - while

```
while(condição){
	bloco
}
```

## - for

```
for(declaração, condição, passo){
	bloco
}
```
- _declaração_ : você pode declarar as variaveis que deseja utilizar dentro de um for.
- _condição_ : condição, como no while.
- _passo_ : o que o for deve fazer após retornar para condição.

## - funções

- _void_ : vazio, pode ser usado para indicar que não existe parametro ou que não existe retorno.


```
type name( type parm1, type parm2);
 ↓
return

//no fim do programa

type name( type parm1, type parm2){
	bloco de ação da função
}
```