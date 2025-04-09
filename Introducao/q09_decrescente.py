lista = list(map(int, input().split()))

def decrescente(lista, i=0):
    if len(lista) <= 1 or i >= len(lista) - 1:
        return "Ordem crescente"
    
    if lista[i] > lista[i + 1]:
        return decrescente(lista, i + 1)
    else:
        return "Ordem não decrescente" 
    
print(decrescente(lista))