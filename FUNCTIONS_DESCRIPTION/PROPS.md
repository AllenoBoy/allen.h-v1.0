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

<h3 align="center"> static inline void PROP_RESETCOLOR ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `A partir da chamada dessa função, é alterada qualquer estilo ou cor para o padrão ignorando o que já foi printado`;

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
    PROP_BACKGROUNDCOLOR ( RED_BACKGROUND );
    echo ("Texto de suporte");

    // Cancelando a alteração da cor de fundo
    PROP_RESETCOLOR ();
    echo ("Texto de suporte");
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232173750-f3238a9d-a163-4e62-af24-c3ee426fe795.png">
</p>

