# [A Idade de Dona Mônica](https://olimpiada.ic.unicamp.br/pratique/pu/2019/f1/idade/), 2019, Nivel 2

## Ideia

Para conseguir identificar o filho mais velho de Dona Mônica, precisamos saber qual a idade do 3º filho para conseguir comparar todos os 3 filhos.
Devemos computar a idade do terceiro filho de Dona Mônica, denominado **C**, com a seguinte relação:
> C = M - (A + B)

Assim, conseguimos identificar a idade do filho mais velho comparando os filhos entre si.

## Código-fonte

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int M, A, B;
        Scanner tec = new Scanner(System.in);
        
        M = tec.nextInt();
        A = tec.nextInt();
        B = tec.nextInt();
        
        int C = M - (A+B);
        int resposta = A;
        
        if(B > resposta)
            resposta = B;
        if(C > resposta)
            resposta = C;

        System.out.println(resposta);
    }
}
```