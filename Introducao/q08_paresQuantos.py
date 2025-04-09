lista = list(map(int, input().split()))
s = int(input())

def pares_quantos(lista, s, i=0):
    
    if len(lista) == 0 or i >= len(lista) - 1:
        return 0
    
    somaPares = lista[i] + lista[i + 1]

    if somaPares == s:
        return 1 + pares_quantos(lista, s, i + 1)

    else:
        return pares_quantos(lista, s, i + 1)

print(pares_quantos(lista, s))
    
