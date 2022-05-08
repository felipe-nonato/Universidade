typeFun = input("\n\nEscolha o tipo de função: \n 1 - Afim \n 2 - Quadratica \n 3 - Racional\n\n valor:")
typeFun = int(typeFun)

# organizar codigo 

def idenPn(x):
    print(f'\nCom qual dessas equações o {x} se parece?\n')
    print('1 → a² - b²')
    print('2 → a² + 2ab + b²')
    print('3 → a² - 2ab +b²')
    print('4 → a³ + b³')
    print('5 → a³ - b³')
    print('6 → a²x + bx + c\n')
    y = int(input('Valor [1,6]: '))
    if y<1 or y>6:
        print('\nErro\n')
    else:
        return y


def ler(numVar):
    x = int(input('\n Valor da coordenada x:'))
    nameVar = ['a','b','c']
    list = []
    for i in range(numVar):
        list.append(input(f'\nValor da variavel {nameVar[i]}:'))
        list[i] = int(list[i])
    return x, list

def calcular(y):
    if y == 1:
        x, list = ler(2)
        list[0] = list[0]*x
        res = (list[0]+list[1])*(list[0]-list[1])
        print(res)

if typeFun<3:
    x, raizes = ler(typeFun+1)
    x = int(x)
    for j in range(len(raizes)):
        raizes[j] = int(raizes[j])
else:
    print('\nErro\n')


if typeFun == 1:
    res = raizes[0]*x + raizes[1]
    print(f'\nResultado: {res}\n')
elif typeFun == 2:
    res = raizes[0]*(x**2) + raizes[1]*x + raizes[2]
    print(f'\nResultado: {res}\n')
elif typeFun == 3:
    pn = idenPn('numerador')
    calcular(pn)
