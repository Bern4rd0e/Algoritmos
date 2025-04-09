lista = list(map(int, input().split()))

def maior_indice(lista, i=0):
    if len(lista) == 0 or i >= len(lista) - 1:
        return 0
    
    atual = abs(lista[i] - lista[i + 1])

    resto = maior_indice(lista, i + 1)

    return max(atual, resto)

print(maior_indice(lista))
