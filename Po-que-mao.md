# [Pô, que mão](https://olimpiada.ic.unicamp.br/pratique/pu/2016/f2/pokemon/), 2016, Nivel 2

## Ideia

Para conseguir o máximo de evoluções, devemos sempre buscar o menor valor e verificar se ele é menor ou igual a quantidade de doces que temos. Assim, podemos salvar os  3 valores da entrada como um vetor de inteiros, depois ordernar de maneira crescente com o método __Arrays.sort()__ da bibliotecaa __java.util.Arrays__. Cada vez que a quantidade de doces é suficiente para evoluir o i-nésmo pokemon, subtraimos ele da quantidade de doces que temos e vamos ao próximo. 

## Código-fonte

```java
import java.util.Scanner;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		Scanner tec = new Scanner(System.in);
		int N, V[] = new int[3];
		N = tec.nextInt();
		for(int i=0;i<3;i++)
			V[i] = tec.nextInt();
		
		int resposta = 0;
		Arrays.sort(V);
		
		for(int i=0;i<3;i++) {
			if(V[i] <= N) {
				resposta++;
				N = N - V[i];
			}
		}
		System.out.println(resposta);
	}
}
```