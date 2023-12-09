
def main() :

    gab = open('gab.txt','r')
    user = open('user.txt','r')
    erro = False

    cont = 0
    for resp in gab :
        output = user.readline()
        cont+=1 

        if resp != output :
            erro = True
            print(f"diferença na linha {cont}")
            print(f'gab: {resp}')
            print(f'user: {output}')
            break

    if erro == False : print("Acertou tudo") 

if __name__ == '__main__': main()