lista = list(map(int, input().split()))
s = int(input())

def soma_existe(lista, s, i=0):
    if len(lista) == 0 or i >= len(lista) - 1:
        return "Não"
    
    somaPares = lista[i] + lista[i + 1]


    if somaPares == s:
        return "Sim"
    
    return soma_existe(lista, s, i + 1)
    
print(soma_existe(lista, s))
    

    


    