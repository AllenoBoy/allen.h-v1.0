<h1 align="center"> MATTE </h1>

---

#### As funções do tipo ` MATTE `, servem para executar algumas funções da biblioteca math, de uma forma melhorada. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---










<br>

<h3 align="center"> double MATTE_cosseno ( double COS , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe o cosseno de um ângulo ( isto é, um número entre -1 e 1 → -1 <= cosseno <=1 ), e caso o parâmetro PRINT seja igual a true, ele printará o ângulo, em radianos, do cosseno que foi informado como parâmetro, seguindo a quantidade de casas decimais definido por COMMAS. Essa função retorna o ângulo, em radianos do cosseno`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_cosseno ( 0.5 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
1.047
```















<br>

<h3 align="center"> double MATTE_seno ( double SIN , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe o seno de um ângulo, tal que, -1 <= seno <=1. , e caso o parâmetro PRINT seja igual a true, ele printará o ângulo, em radianos, do seno que foi informado como parâmetro, seguindo a quantidade de casas decimais definido por COMMAS. Essa função retorna o ângulo, em radianos do seno`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_seno ( 0.5 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
0.524
```
