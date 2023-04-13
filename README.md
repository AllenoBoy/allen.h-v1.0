<h1 align="center"> ALLEN.H </h1>

---

O objetivo da biblioteca é fornecer uma simplificação de código da `linguagem c`, onde aqui estarão `definidas e explicadas` todas as `funcionalidades` da mesma, com as funções, macros e informações necessárias, `em caso de bugs reportar na aba issues`, por fim todas as informações necessárias foram divididas em tópicos explicativos e demonstrativos da execução / utilização da biblioteca nesse arquivo readme.

#### <p align="center"> <a href="URL do link"> LINK PARA DOWNLOAD DA BIBLIOTECA </a> </p>
  
---


### 1. BIBLIOTECAS PADRÃO UTILIZADAS

```sh
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <errno.h>
# include <setjmp.h>
# include <assert.h>
# include <signal.h>
# include <locale.h>
# include <string.h>
# include <windows.h>
# include <stdarg.h>
# include <commctrl.h>
# include <iso646.h>
# include <ctype.h>
# include <stdbool.h>
# include <conio.h>
# include <time.h>
# include <dirent.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <pthread.h>
```

---

### 2. OBSERVAÇÕES DA BIBLIOTECA

- A biblioteca possui suporte ao uso de `threads` por causa da biblioteca pthread.h;
- A biblioteca foi produzida utilizando o compilador `TDM-GCC` ( caso ocorram erros chequem o compilador );
- A biblioteca permite o uso de `variáveis booleanas`;
- A biblioteca possui macros personalizados, para amantes de `portugol`;
- Caso não queira usar as funções específicas da biblioteca, como o `PR` use as padrões da linguagem c, como o `printf`
- A estilização do console com as funções `PROP` podem não funcionar no console, por causa da incopatibilidade!
- A biblioteca possui `10 tipos de variações de funções`;
- A biblioteca foi `produzida somente como uma forma de aprendizagem`, ou seja, está passível de bugs!
- A biblioteca possui alguns `códigos de padronização de console`, para impedir bugs!

---

### 3. MACROS DA BIBLIOTECA

##### 3.1 MACROS DE REGIÕES DO CONSOLE

| MACRO                                              | Descrição                                                         |
| :------------------------------------------------- | :---------------------------------------------------------------- |
| `DEFAULT`                                          | Define o console como o padrão da linguagem C ( sem acentuação)   |
| `BRAZIL`                                           | Define o console como o nosso pt-br com acentuação                |
| `LATIN`                                            | Define o console como latino não pt-br, possui alguns caracteres  |
| `CIRILICO`                                         | Define o console como do tipo cirílico ( й , и , к , с )          | 
| `JAPAN`                                            | Define o console como do tipo japonês ( 日 , 本 , 語 )             |
| `COREAN`                                           | Define o console como do tipo coreano ( 한 , 글 , 입니다 )         |
| `GREGO`                                            | Define o console como do tipo grego ( Γ , ε , ι , α , σ , μ , ό ) |
| `TURCO`                                            | Define o console como do tipo turco ( ö , ş , ğ )                 |
| `ISO`                                              | Padroniza o console para printar texto de string acentuado        |


> Esses macros devem ser utilizados somente nas seguintes funções: `SYS_REGION` e `CS_SETREGION`;

<br>

##### 3.2 MACROS DE ESTILO DA FUNÇÃO PROP

| MACRO                                              | Descrição                                                         |
| :------------------------------------------------- | :---------------------------------------------------------------- |
| `BRIGHT1`                                          | Deixa o texto ou fundo brilhantes                                 |
| `BRIGHT2`                                          | Deixa o texto ou fundo brilhantes                                 |
| `UNBRIGHT`                                         | Deixa o texto ou fundo escurecidos                                |
| `ITALIC`                                           | Deixa o texto escrito na forma itálica                            |
| `UNDERLINE`                                        | Deixa o texto escrito sublinhado                                  |
| `BLINKER1`                                         | Deixa o texto ou fundo piscando                                   |
| `BLINKER2`                                         | Deixa o texto ou fundo piscando                                   |
| `BACKSET`                                          | Deixa o fundo esbranquiçado                                       |
| `HIDE`                                             | Deixa o texto escrito escondido                                   |
| `CUT`                                              | Deixa o texto escrito cortado                                     |


> Esses macros devem ser utilizados somente nas seguintes funções: `PROP_TEXTSTYLE` e `PROP_BACKGROUNDSTYLE` quando `ENABLEPROPS` tiver sido chamado;

<br>

##### 3.3 MACROS DE COR DA FUNÇÃO PROP

| TEXTO                                              | PLANO DE FUNDO                                                    |
| :------------------------------------------------- | :---------------------------------------------------------------- |
| `DEFAULT_TEXT`                                     | `DEFAULT_BACKGROUND`                                              |
| `BLACK_TEXT`                                       | `RED_BACKGROUND`                                                  |
| `RED_TEXT`                                         | `GREEN_BACKGROUND`                                                |
| `GREEN_TEXT`                                       | `YELLOW_BACKGROUND`                                               | 
| `YELLOW_TEXT`                                      | `BLUE_BACKGROUND`                                                 |
| `BLUE_TEXT`                                        | `MAGENTA_BACKGROUND`                                              |
| `MAGENTA_TEXT`                                     | `CYAN_BACKGROUND`                                                 |
| `CYAN_TEXT`                                        | `WHITE_BACKGROUND`                                                |
| `WHITE_TEXT`                                       |                                                                   |

> Esses macros devem ser utilizados somente nas seguintes funções: `PROP_TEXTCOLOR` e `PROP_BACKGROUNDCOLOR` quando `ENABLEPROPS` tiver sido chamado;

<br>

##### 3.4 MACROS DAS FUNÇÕES DE STRINGS

| MACRO                                              | Descrição                                                           |
| :------------------------------------------------- | :------------------------------------------------------------------ |
| `stringSZ`                                         | A função GWC_STRING, lerá uma string com um tamanho máximo          |
| `stringEQ`                                         | A função GWC_STRING, lerá uma string até que seja diferente de algo |
| `stringDF`                                         | A função GWC_STRING, lerá uma string até que seja igual a algo      |
| `stringNR`                                         | A função GWC_STRING, lerá uma string normalmente e PR_STRING printará normalmente                   |
| `stringIV`                                         | A função PR_STRING, printará a string de forma invertida            |
| `stringHB`                                         | A função PR_STRING, printará a string em caixa alta ( formatada )   |
| `stringLB`                                         | A função PR_STRING, printará a string em caixa baixa ( formatada )  |
| `stringCY`                                         | A função PR_STRING, printará a string criptografada ( formatada )   |
| `nosubs`                                           | Macro para dizer que não deseja substituições em PR_STRING          |
| `notext`                                           | Macro para dizer que não terá nenhum texto em GWC_STRING            |
| `nosize`                                           | Macro para dizer que não tem limite de tamanho                      |
| `notoken`                                          | Macro para dizer que não há substiuição                             |


> Esses macros devem ser utilizados somente nas seguintes funções: `GWC_STRING` e `PR_STRING`;

<br>

##### 3.5 MACROS DE OPERADORES

| MACRO                                              | Descrição                                                           |
| :------------------------------------------------- | :------------------------------------------------------------------ |
| `HT`                                               | MAIOR QUE      ( > )                                                |
| `LT`                                               | MENOR QUE      ( < )                                                |
| `EQ`                                               | IGUAL          ( == )                                               |
| `DF`                                               | DIFERENTE      ( != )                                               |
| `HE`                                               | MAIOR OU IGUAL ( >= )                                               |
| `LE`                                               | MENOR OU IGUAL ( <= )                                               |
| `NRM`                                              | NORMAL / SEM RESTRIÇÕES                                             |
| `CRY`                                              | CRIPTOGRAFIA                                                        |
| `SZE`                                              | TAMANHO                                                             |
| `PWD`                                              | SENHA / PASSWORD ( COM NÚMEROS )                                    |
| `ONS`                                              | SOMENTE TEXTO                                                       |
| `PWS`                                              | SENHA / PASSWORD ( SEM NÚMEROS )                                    |
| `ONN`                                              | SOMENTE NÚMEROS                                                     |
| `PWN`                                              | SENHA / PASSWORD ( SÓ NÚMEROS )                                     |
| `PAR`                                              | SE O VALOR FOR PAR                                                  |
| `IMPAR`                                            | SE O VALOR FOR IMPAR                                                |
| `MULTIPLO`                                         | SE O VALOR FOR MÚLTIPLO DO OUTRO                                    |
| `QUADRADO_X_DF_Y`                                  | x² != y                                                             |
| `QUADRADO_X_EQ_Y`                                  | x² == y                                                             |
| `INVERSO`                                          | INVERTE O VETOR OU MATRIZ                                           |
| `CRESCENTE`                                        | ORGANIZAÇÃO DO VETOR OU MATRIZ DE FORMA CRESCENTE ( BUBBLE SORT )   |
| `DECRESCENTE`                                      | ORGANIZAÇÃO DO VETOR OU MATRIZ DE FORMA DECRESCENTE ( BUBBLE SORT ) |
| `NOTMULTIPLO`                                      | SE O VALOR NÃO FOR MÚLTIPLO DO OUTRO                                |


> Esses macros devem ser utilizados somente nas seguintes funções: `allen_SUBSINTARRAY` , `allen_COPYINTARRAY` , `allen_SUBSINTB_ARRAY` , `allen_INTCOPYB_ARRAY` , `GWC_INT` , `GWC_DOUBLE` , `GWC_FLOAT` , `GWC_CHAR` , `getI` , `getF` , `getD`;

<br>

##### 3.6 MACROS ALLEN DEFINED

| MACRO                                              | Descrição                                                           |
| :------------------------------------------------- | :------------------------------------------------------------------ |
| `YES` , ` yes ` , `SIM` , `sim`                    | Serve como uma variável booleana                                    |
| `NO` , ` no ` , `NAO` , `nao`                      | Serve como uma variável booleana                                    |
| `se`                                               | if                                                                  | 
| `e_se`                                             | else if                                                             | 
| `outro`                                            | else                                                                | 
| `para`                                             | for                                                                 | 
| `qubre`                                            | break                                                               | 
| `caso`                                             | case                                                                | 
| `caractere`                                        | char                                                                | 
| `constante`                                        | const                                                               | 
| `padrao` , `outro_caso`                            | default                                                             | 
| `faca`                                             | do                                                                  | 
| `enquanto`                                         | while                                                               | 
| `real`                                             | float                                                               | 
| `real_64`                                          | double                                                              | 
| `inteiro`                                          | int                                                                 |
| `longo  `                                          | long                                                                |
| `retorne` , `devolva` , `salve`                    | return                                                              |
| `curto`                                            | short                                                               |
| `tamanho_de`                                       | sizeof                                                              |
| `estatico`                                         | static                                                              |
| `registro`                                         | struct                                                              |
| `escolha`                                          | switch                                                              |
| `tipo_de`                                          | typedef                                                             |
| `uniao`                                            | union                                                               |
| `vazio`                                            | void                                                                |


> Esses macros podem ser utilizados em qualquer lugar: exemplo se ( x > 12 ) printf("arroz") ;


---

### 4. FUNÇÕES

---

> Em resumo as funções estão divididas em funcionalidades: 
> 
> PR:    *print*
> 
> CS:    *controle do console*
> 
> SYS:   *controle do sistema*
> 
> PROP:  *estilização de texto* 
> 
> G:     *controle de entrada*
> 
> allen: *testes simples*
> 
> SB:    *som e caixa de mensagens*
> 
> MATTE: *matemática*
> 
> LOCH:  *pequena implementação da setlocale*
> 
> FLEE:  *arquivos*
  
<br>

---

<br>

## 01 - PR FUNCTIONS 

<br>

---

<br>

## 02 - CS FUNCTIONS 

<br>

---

<br>

## 03 - SYS FUNCTIONS 

<br>

---

<br>

## 04 - PROP FUNCTIONS 

<br>

---

<br>

## 05 - G FUNCTIONS 

<br>

---

<br>

## 06 - allen FUNCTIONS 

<br>

---

<br>

## 07 - SB FUNCTIONS 

<br>

---

<br>

## 08 - MATTE FUNCTIONS 

<br>

<h2 align="center"> double MATTE_cosseno ( double COS , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o ângulo em radianos do coseno informado;
> Parametro 01 ( double COS ): Valor double do cos para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    MATTE_cosseno ( 0.5 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
1.0472
```

<br>

<h2 align="center"> double MATTE_seno ( double SIN , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o ângulo em radianos do seno informado;
> Parametro 01 ( double SIN ): Valor double do sin para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    MATTE_seno ( 0.5 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
0.5236
```

<br>

<h2 align="center"> double MATTE_tangente ( double TAN , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o ângulo em radianos da tangente informada; 
> Parametro 01 ( double TAN ): Valor double do sin para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    MATTE_tangente ( 1 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
0.7854
```

<br>

<h2 align="center"> double MATTE_arcotangente ( double X , double Y , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 4 parâmetros; Sua função é retornar o arco tangente de y / x em um intervalo; 
> Parametro 01 ( double X ): Valor double do x para calcular;
> Parametro 02 ( double Y ): Valor double do y para calcular;
> Parametro 03 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 04 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
   MATTE_arcotangente ( 2 , 2 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
0.7854
```

<br>

<h2 align="center"> double MATTE_arcotangente ( double X , double Y , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 4 parâmetros; Sua função é retornar o arco tangente de y / x em um intervalo; 
> Parametro 01 ( double X ): Valor double do x para calcular;
> Parametro 02 ( double Y ): Valor double do y para calcular;
> Parametro 03 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 04 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
   MATTE_arcotangente ( 2 , 2 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
0.7854
```

<br>

<h2 align="center"> double MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o maior inteiro menor ou igual a x; 
> Parametro 01 ( double X ): Valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
   MATTE_arredondarparamaior ( 6.55 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
7.0000
```

<br>

<h2 align="center"> double MATTE_cosemrad ( double ANGULO , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o valor do cosseno do ângulo;
> Parametro 01 ( double ANGULO): alor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
   MATTE_cosemrad ( 1.047 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
0.5002
```

<br>

<h2 align="center"> double MATTE_coshiperbolico ( double ANGULO , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o cosseno hiperbólico;
> Parametro 01 ( double ANGULO): alor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
  MATTE_coshiperbolico ( 3.14 , true , 3 );
}
```

- SAÍDA DO CONSOLE: 

```sh
11.574
```

<br>

<h2 align="center"> double MATTE_exp ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o número de euler;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
  MATTE_exp ( 1 , true , 3 );
}
```

- SAÍDA DO CONSOLE: 

```sh
2.718
```

<br>

<h2 align="center"> double MATTE_modulo ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o módulo de um valor;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
  MATTE_modulo ( -9 , true , 2 ); 
}
```

- SAÍDA DO CONSOLE: 

```sh
9.00
```

<br>

<h2 align="center"> double MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o menor inteiro maior ou igual a x;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
 MATTE_arredondarparamenor ( 9.4 , true, 2 );  
}
```

- SAÍDA DO CONSOLE: 

```sh
9.00
```

---

<br>

<h2 align="center"> double MATTE_mantissa ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar a mantissa;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
 MATTE_mantissa ( 1024 , true , 2 );  
}
```

- SAÍDA DO CONSOLE: 

```sh
0.50
```

<br>

<h2 align="center"> double MATTE_ldexp ( double X , int EXPOENTE , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 4 parâmetros; Sua função é retornar o x * 2 ^ exp;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( int EXPOENTE ): expoente de x
> Parametro 03 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 04 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
 MATTE_ldexp ( 4 , 3 , true , 2 );
}
```

- SAÍDA DO CONSOLE: 

```sh
32.00
```

<br>

<h2 align="center"> double MATTE_log ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o logaritmo de x na base e;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    MATTE_log ( 2.718 , true , 2 );
}
```

- SAÍDA DO CONSOLE: 

```sh
1.00
```

<br>

<h2 align="center"> double MATTE_log10 ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o logaritmo de x na base 10;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    MATTE_log10 ( 100 , true , 2 );
}
```

- SAÍDA DO CONSOLE: 

```sh
2.00
```

<br>

<h2 align="center"> double MATTE_soapartedecimal ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar só a parte decimal;
> Parametro 01 ( double X ): valor double do x para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    MATTE_soapartedecimal ( 2.58974 , true , 5 );
}
```

- SAÍDA DO CONSOLE: 

```sh
0.58974
```

<br>

<h2 align="center"> double MATTE_potencia ( double BASE , double EXPO , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 4 parâmetros; Sua função é retornar BASE^EXPO;
> Parametro 01 ( double BASE ): valor double de BASE para calcular;
> Parametro 02 ( double EXOI ): valor double de EXPO para calcular;
> Parametro 03 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 04 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
   MATTE_potencia ( 2 , 5 , true , 2 );
}
```

- SAÍDA DO CONSOLE: 

```sh
32.00
```

<br>

<h2 align="center"> double MATTE_senoemrad ( double ANGULO , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o valor do seno do angulo;
> Parametro 01 ( double ANGULO ): valor double de BASE para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
   MATTE_senoemrad ( 1.047 , true , 5 );
}
```

- SAÍDA DO CONSOLE: 

```sh
0.866
```

<br>

<h2 align="center"> double MATTE_senohiperbolico ( double ANGULO , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o valor do seno hiperbólico do anglulo;
> Parametro 01 ( double ANGULO ): valor double de BASE para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
  MATTE_senohiperbolico ( 3.14 , true, 5 );
}
```

- SAÍDA DO CONSOLE: 

```sh
11.530
```

<br>

<h2 align="center"> double MATTE_raizquadrada ( double X , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o valor da raiz quadrada de X;
> Parametro 01 ( double X ): valor double de BASE para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
  MATTE_raizquadrada ( 16 , true , 2 );
}
```

- SAÍDA DO CONSOLE: 

```sh
4.00
```

<br>

<h2 align="center"> double MATTE_tangenteemrad ( double ANGULO , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o valor da tangente do angulo;
> Parametro 01 ( double ANGULO ): valor double de BASE para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
  MATTE_tangenteemrad ( 1.047 , true , 4 );
}
```

- SAÍDA DO CONSOLE: 

```sh
1.731
```

<br>

<h2 align="center"> double MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS ) </h2> 

### Essa função retorna um valor do tipo double e possui 3 parâmetros; Sua função é retornar o valor da tangente hiperbólica do angulo;
> Parametro 01 ( double ANGULO ): valor double de BASE para calcular;
> Parametro 02 ( bool PRINT ): se yes ou true printará o resultado;
> Parametro 03 ( int COMMAS ): quantidade de casas decimais que será printada

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
  MATTE_tangentehiperbolica ( 5 , true , 2 );
}
```

- SAÍDA DO CONSOLE: 

```sh
1.00
```

---

<br>





















## 09 - LOCH FUNCTIONS 

<br>

<h2 align="center"> void LOCH_LOCAL ( void ); </h2> 

### Essa função não retorna nada e não possui parâmetros; Sua função é definir o console em português;

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    LOCH_LOCAL ();
    printf ("Acentuação");
}
```

- SAÍDA DO CONSOLE: 

```sh
Acentuação
```

<br>

<h2 align="center"> void LOCH_SETLOCAL ( char TEXT [] ); </h2> 

### Essa função não retorna nada e possui um parâmetro; Sua função é definir qual idioma o console irá utilizar;
> Parametro 01 ( char TEXT [] ): Nome de um idioma suportado pela função setlocale

- EXEMPLO DE USO: 

```c
# include "allen.h"

int
main ( void )
{   
    LOCH_SETLOCAL ( "portuguese_brazil" );
    printf ("Acentuação");
}
```

- SAÍDA DO CONSOLE: 

```sh
Acentuação
```

---

<br>

## 10 - FLEE_FUNCTIONS 

<br>

---
