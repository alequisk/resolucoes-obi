# [Piso da escola](https://olimpiada.ic.unicamp.br/pratique/p2/2018/f1/piso/), 2018, Nivel 2

## Ideia

Pode-se observar um padrão dentro da figura que se dá em função da largura **L** e comprimento **C**.
Lajotas do tipo 1 preenchem todo o centro da área **L*****C** e lajotas do tipo 2 preenchem o contorno da área. Observa-se também que há duas áreas preenchidas no centro da área do piso.

### Disposição das Lajotas do tipo 1
![](https://github.com/alequisk/resolucoes-obi/blob/master/imgs/piso-r.png?raw=true)

> __Relação: L * C__

![](https://github.com/alequisk/resolucoes-obi/blob/master/imgs/piso-b.png?raw=true)

> __Relação: (L-1) * (C-1)__

Logo, com todas essas relações, temos a formula final para lajotas do tipo 1:
> __L * C + (L-1) * (C-1)__

### Disposição de Lajotas do tipo 2

![](https://github.com/alequisk/resolucoes-obi/blob/master/imgs/piso-y.png?raw=true)

Formula para lajotas do tipo 2:
> __Relação: 2 * (L-1) + 2 * (C-1)__

## Código-fonte

```java
import java.util.Scanner;

class solucao {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int L, C;
        L = tec.nextInt();
        C = tec.nextInt();

        int tipo1 = L*C + (L-1)*(C-1);
        int tipo2 = 2*(L-1) + 2*(C-1);

        System.out.println(tipo1);
        System.out.println(tipo2);
    }
}
```