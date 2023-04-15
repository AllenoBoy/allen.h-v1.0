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






















<br>

<h3 align="center"> double MATTE_tangente ( double SIN , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe a tangente de um ângulo, e caso o parâmetro PRINT seja igual a true, ele printará o ângulo, em radianos, da tangente que foi informado como parâmetro, seguindo a quantidade de casas decimais definido por COMMAS. Essa função retorna o ângulo, em radianos da tangente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_tangente ( 1 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
0.785
```


















<br>

<h3 align="center"> double MATTE_arcotangente ( double X , double Y , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe dois pontos de um plano cartesiano X e Y, e caso o parâmetro PRINT seja igual a true, ele printará o arco tangente de y / x no intervalo de π a π radianos, dos valores informados como parâmetros, seguindo a quantidade de casas decimais definido por COMMAS. Essa função retorna o arcotangente dos valores fornecidos`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_arcotangente ( 2 , 2 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 6 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
0.785398
```















<br>

<h3 align="center"> double MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente arredonda o valor do tipo double quebrado para um valor inteiro ou seja x = 12.3, após o uso ficará x = 12, caso PRINT seja igual a true ele printará esse valor no console com o auxílio de COMMAS que irá definir quantas casas decimais serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_arredondarparamaior ( 2.3 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
2.00
```



















<br>

<h3 align="center"> double MATTE_cosemrad ( double ANGULO , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um ângulo como parâmetro e posteriormente calcula o seu coseno, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_cosemrad ( 3.14 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
0.500
```

















<br>

<h3 align="center"> double MATTE_coshiperbolico ( double ANGULO , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um ângulo como parâmetro e posteriormente calcula o seu cosseno hiperbólico, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_coshiperbolico ( 3.14 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
11.574
```





















<br>

<h3 align="center"> double MATTE_exp ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double e cálcula o número de Euler (~2.71) elevado a x, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_exp ( 1 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
2.72
```
















<br>

<h3 align="center"> double MATTE_modulo ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double e faz o módulo desse número, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_modulo ( -1 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
1.00
```














<br>

<h3 align="center"> double MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double e retorna o menor número inteiro não quebrado, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_arredondarparamenor ( 2.35 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
2.00
```

























<br>

<h3 align="center"> double MATTE_ldexp ( double X , int EXPOENTE , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double que será a base e outro do tipo inteiro que será o expoente, onde irá retorna X * EXPOENTE^exp, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_ldexp ( 4 , 3 no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
32.00
```
















<br>

<h3 align="center"> double MATTE_log ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double que retornará o ln desse valor, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_log ( 2.718 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
1.00
```












<br>

<h3 align="center"> double MATTE_log10 ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double que retornará o logarítimo desse valor na base 10, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_log10 ( 100 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
2.00
```
























<br>

<h3 align="center"> double MATTE_soapartedecimal ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double que retornará somente a parte decimal desse valor, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_soapartedecimal ( 2.58974 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 5 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
0.58974
```




















<br>

<h3 align="center"> double MATTE_potencia ( double BASE , double EXPO , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe dois valores a base e o expoente onde fará com que seja retornado a potência de BASE elevada a EXPO, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_potencia ( 3 , 5 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
32.00
```
















<br>

<h3 align="center"> double MATTE_senoemrad ( double ANGULO , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um angulo em radianos para que seja retornado o valor do seno do ângulo, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_senoemrad ( 1.047 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
0.866
```


























<br>

<h3 align="center"> double MATTE_senohiperbolico ( double ANGULO , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um angulo em radianos para que seja retornado o valor do seno hiperbólico do ângulo, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_senohiperbolico ( 3.14 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
11.530
```

















<br>

<h3 align="center"> double MATTE_raizquadrada ( double X , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double para retornar a sua raiz quadrada, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_raizquadrada ( 16 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 2 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
4.00
```

















<br>

<h3 align="center"> double MATTE_tangenteemrad ( double ANGULO , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double para retornar o valor da tangente do ângulo desse valor, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_tangenteemrad ( 1.047 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
1.731
```































<br>

<h3 align="center"> double MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função recebe um valor do tipo double para retornar o valor da tangente hiperbólica do ângulo desse valor, caso PRINT seja verdadeiro esse valor será printado diretamente no console com o auxílio de COMMAS que define a quantidade de casas decimais que serão printadas`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Calculando ...
    double x = MATTE_tangentehiperbolica ( 5 , no , no );
    
    // Printando
    PR_DOUBLE ( x , 3 );
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
1.000
```








