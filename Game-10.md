# [GAME-10](https://olimpiada.ic.unicamp.br/pratique/p2/2017/f1/game10/), 2017, Nivel 2

## Ideia

Para conseguir o número de passos até o disco **D**, devemos incrementar o valor do avião **A** por 1 unidade, formando-se assim um passo. O somatório de todos os passos até **A** ser igual a **D** será a resposta, tomando cuidado quando **A** for maior que número total de posições, devendo retornar a posição 1.

## Código-fonte

```java
import java.util.Scanner;

class solucao {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int N,A,D;
        N = tec.nextInt();
        D = tec.nextInt();
        A = tec.nextInt();

        int passos = 0;

        while(A != D){
            A = A+1;
            if(A > N)
                A = 1;
            passos++;
        }
        System.out.println(passos);
    }
}

```