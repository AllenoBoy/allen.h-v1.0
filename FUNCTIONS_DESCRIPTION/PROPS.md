<h1 align="center"> PROPS </h1>

---

#### As funções do tipo ` PROPS `, servem para permitir uma estilização rápida e simples no console, como a alteração da cor do texto ou do plano de fundo, a movimentação do cursor e também a remoção de conteúdo do console. Por fim é importante ressaltar que esse tipo de função não irá funcionar em todos os consoles ( computadores sendo mais específico no windows 10 ), pois algumas funcionalidades podem não serem executadas corretamente ou simplesmente não funcionarem. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---













<br>

> OBSERVAÇÃO: *Para usar qualquer função apresentada nesse documento, no início do seu programa deve ser inserida a função ENABLEPROPS, caso opte por não colocar nenhuma função irá funcionar, e caso funcione pode gerar erros no código ou no próprio programa.*

<br>

---















<br>

<h3 align="center"> static inline void ENABLEPROPS ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função permite que as funções do tipo PROPS sejam executadas no seu console, lembrando que, em alguns computadores algumas funções não irão funcionar corretamente, um exemplo é o uso da função que serve para definir o estilo do texto, que não consegue definir nenhum dos macros de estilo ( ITALIC, CUT , BLINKER1 ... )`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();
    
    // ...
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: O CONSOLE ATIVOU OS PROPS

```






















<br>

<h3 align="center"> static inline void PROP_RESTORECONSOLE ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função basicamente, faz com que quando chamada retorne qualquer alteração feita usando as funções PROPS sejam restauradas para o padrão do console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();

    // ... códigos
     
    /* UMA OBSERVAÇÃO: PROP_RESTORECONSOLE -> Reseta os estilos */
     
    // Restaurando o console para o padrão ( Remove todos os estilos do console, e a partir daqui volta para a cor padrão do console )
    PROP_RESTORECONSOLE ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: O CONSOLE RETORNA AS CONFIGURAÇÕES PADRÃO

```
















<br>

<h3 align="center"> static inline void PROP_TEXTCOLOR ( int CODE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função define a cor do texto usando os macros de "CORES DE ESTILIZAÇÃO DE TEXTO" para definir a cor do texto a partir da chamada da função, onde o macro utilizado deve ser usado em CODE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();

    // Mudando a cor do texto para amarelo
    PROP_TEXTCOLOR ( YELLOW_TEXT );

    // Uso do echo por ser melhor que o printf
    echo ("Eu gosto de comer arroz!");

    // Restaurando o console para o padrão ( Removendo cores, estilos ... )
    PROP_RESTORECONSOLE ();
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232172410-6c170dfc-8957-469b-a473-634864874976.png">
</p>

















<br>

<h3 align="center"> static inline void PROP_STYLE ( int CODE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função define o estilo do texto usando os macros de "ESTILIZAÇÃO DO TEXTO" para definir um estilo ao texto a partir da chamada da função, onde o macro utilizado deve ser usado em CODE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();

    // Uso do echo por ser melhor que o printf
    echo ("texto normal");

    // Quebra de linha
    PRL (1);
    
    // Estilizando o texto para itálico
    PROP_STYLE ( ITALIC );
    echo ("texto normal"); PRL (1);

    // Estilizando o texto para sublinhado
    PROP_STYLE ( UNDERLINE );
    echo ("texto normal"); PRL (1);
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232172880-59e5ed1e-a32c-4a14-91e2-a9101d9c61ba.png">
</p>















<br>

<h3 align="center"> static inline void PROP_BACKGROUNDCOLOR ( int CODE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função funciona assim como a "PROP_TEXTCOLOR" só que altera a cor de fundo`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();

    // Definindo a cor do plano de fundo
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );
    echo ("Texto de suporte");

    PROP_BACKGROUNDCOLOR ( MAGENTA_BACKGROUND );
    echo ("Texto de suporte");

    // Redefinindo o console
    PROP_RESTORECONSOLE ();
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232173502-a0e18739-024b-43f3-95ab-f017711ef469.png">
</p>

















<br>

<h3 align="center"> static inline void PROP_CLEARSCREEN ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `A função limpa toda a tela quando chamada, mas não faz com que o cursor volte para a posição ( 0 , 0 ) ou seja não funciona como a função "system("CLS");"`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();

    echo ("Você gosta de mulher?");
    getch ();

    // Apagando o texto escrito
    PROP_CLEARSCREEN ();

    echo ("This is a new echo");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
Você gosta de mulher?
_ <- sinal do getch
```

- Após a função:

```txt

This is a new echo
```












<br>

<h3 align="center"> static inline void PROP_CLEARBELOW ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Quando chamada, tudo que estiver abaixo do cursor será deletado`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    // ... CÓDIGO QUE UTILIZA O MOVIMENTO DO CURSOR

    // Limpando o que foi printado abaixo do cursor
    PROP_CLEARBELOW ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
OBSERVAÇÃO: FUNÇÃO QUE LIMPA NO CONSOLE TUDO QUE FOI PRINTADO ABAIXO DA ATUAL POSIÇÃO DO CURSOR ( PESQUISE SOBRE A FUNÇÃO GOTOXY )
```












<br>

<h3 align="center"> static inline void PROP_CLEARABOVE ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Quando chamada, tudo que estiver acima do cursor será deletado`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    // ... CÓDIGO QUE UTILIZA O MOVIMENTO DO CURSOR

    // Limpando o que foi printado acima do cursor
    PROP_CLEARABOVE ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
OBSERVAÇÃO: FUNÇÃO QUE LIMPA NO CONSOLE TUDO QUE FOI PRINTADO ACIMA DA ATUAL POSIÇÃO DO CURSOR ( PESQUISE SOBRE A FUNÇÃO GOTOXY )
```

















<br>

<h3 align="center"> static inline void PROP_CLEARLINE ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Quando chamada, limpa a última linha, mais o texto não substitui a antiga posição do texto removido`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    // Textos para teste
    PR ("Texto de suporte");

    PRL (1);

    PR ("Texto de suporte");
    getch ();

    // Limpando o que foi printado abaixo do cursor
    PROP_CLEARLINE ();

    echo ("Acentuação");
}

```

<br>

#### SAÍDA DO CONSOLE:


- Antes da função:


```sh
Texto de suporte
Texto de suporte
```

- Depois da função:


```sh
Texto de suporte
                Acentuação
```


























<br>

<h3 align="center"> static inline void PROP_CLEARRIGHT ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Quando chamada, limpa do cursor para a frente`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    // ... CÓDIGO QUE UTILIZA O MOVIMENTO DO CURSOR

    // Limpando o que foi printado partindo do cursor até o fim da direita
    PROP_CLEARRIGHT ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
OBSERVAÇÃO: FUNÇÃO QUE LIMPA NO CONSOLE TUDO DA ATUAL POSIÇÃO DO CURSOR PARA A DIREITA ( PESQUISE SOBRE A FUNÇÃO GOTOXY )
```
















<br>

<h3 align="center"> static inline void PROP_CLEARLEFT ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Quando chamada, limpa do cursor para o inicio`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    // ... CÓDIGO QUE UTILIZA O MOVIMENTO DO CURSOR

    // Limpando o que foi printado partindo do cursor até o inicio que fica na esquerda
    PROP_CLEARLEFT ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
OBSERVAÇÃO: FUNÇÃO QUE LIMPA NO CONSOLE TUDO DA ATUAL POSIÇÃO DO CURSOR PARA A ESQUERDA ( PESQUISE SOBRE A FUNÇÃO GOTOXY )
```






















<br>

<h3 align="center"> static inline void PROP_MOVEUP ( int POSITION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Sobe o cursor a quantidade de vezes definida por POSITION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    echo ("Texto 01");
    echo ("Texto 02");

    getch ();

    // Substituindo o texto 01
    PROP_MOVEUP ( 2 );
    echo ("U tried! my son!");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
Texto 01
Texto 02
```

- Depois da função:

```txt
U tried! my son!
Texto 02
```
























<br>

<h3 align="center"> static inline void PROP_MOVEDOWN ( int POSITION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `desce o cursor a quantidade de vezes definida por POSITION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    echo ("Texto 01");
    echo ("Texto 02");

    getch ();

    // Subindo o texto 01
    PROP_MOVEUP ( 2 );
    echo ("U tried! my son!");

    // Descendo
    PROP_MOVEDOWN ( 2 );
    echo ("Desci");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
Texto 01
Texto 02
```

- Depois da função:

```txt
U tried! my son!
Texto 02

Desci
```


















<br>

<h3 align="center"> static inline void PROP_MOVERIGHT ( int POSITION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `move para a direita o cursor a quantidade de vezes definida por POSITION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    echo ("Texto 01");
    echo ("Texto 02");

    getch ();

    // Subindo o texto 01
    PROP_MOVEUP ( 2 );
    echo ("U tried! my son!");

    // Descendo
    PROP_MOVEDOWN ( 2 );
    PR ("Desci");

    // Movendo para a direita
    PROP_MOVERIGHT ( 10 );
    PR ("Aqui!");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
Texto 01
Texto 02
```

- Depois da função:

```txt
U tried! my son!
Texto 02

Desci          Aqui!
```













<br>

<h3 align="center"> static inline void PROP_MOVELEFT ( int POSITION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `move para a esquerda o cursor a quantidade de vezes definida por POSITION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    echo ("Texto 01");
    echo ("Texto 02");

    getch ();

    // Subindo o texto 01
    PROP_MOVEUP ( 2 );
    echo ("U tried! my son!");

    // Descendo
    PROP_MOVEDOWN ( 2 );
    PR ("Desci");

    // Movendo para a direita
    PROP_MOVERIGHT ( 10 );
    PR ("Aqui!");

    // Movendo para a esquerda
    PROP_MOVELEFT ( 12 );
    PR ("HELLO");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
Texto 01
Texto 02
```

- Depois da função:

```txt
U tried! my son!
Texto 02

Desci   HELLO  Aqui!
```











<br>

<h3 align="center"> static inline void PROP_MOVECURSOR ( int X , int Y ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Move o cursor para uma posição específica do console ( X , Y )`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Ativando os props
    ENABLEPROPS ();

    echo ("ufa! amor ainda bem que estava enganado!");
    echo ("larguei mais cedo do trabalho!");
    echo ("e desci te fazer uma surpresa");

    getch ();

    // Escrevendo na frente da linha 01
    PROP_MOVECURSOR ( 41 , 1 ); PR (" - linha 01 da musica.");

    // Escrevendo na frente da linha 02
    PROP_MOVECURSOR ( 41 , 2 ); PR (" - linha 02 da musica.");

    // Escrevendo na frente da linha 03
    PROP_MOVECURSOR ( 41 , 3 ); PR (" - linha 03 da musica."); PRL (1);
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
ufa! amor ainda bem que estava enganado!
larguei mais cedo do trabalho!
e desci te fazer uma surpresa
```

- Depois da função:

```txt
ufa! amor ainda bem que estava enganado! - linha 01 da musica.
larguei mais cedo do trabalho!           - linha 02 da musica.
e desci te fazer uma surpresa            - linha 03 da musica.
```







