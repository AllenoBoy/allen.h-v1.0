<h1 align="center"> CS </h1>

---

#### As funções do tipo ` CS `, servem para permitir que em seu programa, haja um "total" controle do console, permitindo a alteração de elementos do console, como botões de maximizar, posição, tamanho, caption entre outras coisas, que serão mostradas nesse documento . 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---








<br>

<h3 align="center"> void CS_SETREGION ( int REGION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define a região do texto, usando os macros de regiões do console para substituir REGION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo o console como português
       CS_SETREGION (BRAZIL); 
       
       // Teste
       printf ("Acentuação\n\n");
       
       // Definindo o console como a padrão da linguagem c
       CS_SETREGION (DEFAULT); 
       
       // Teste
       printf ("Acentuação");
}

```

<br>


















<br>

<h3 align="center"> void CS_SETTITLE ( const char * TITLE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define o título do programa que fica no topo console pela substituição da variável TITLE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo a Caption do programa
       CS_SETTITLE ("biblioteca allen.h");
}

```

<br>




#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232086709-677d30c3-38c3-4b19-830d-cadbdcdff957.png">
</p>






















<br>

<h3 align="center"> void CS_SETFULLSCREEN ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Faz com que o console fique em tela cheia`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Programa iniciara em tela cheia
       CS_SETFULLSCREEN ();
}

```

<br>




#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: O CONSOLE FICARÁ EM TELA CHEIA!

```


















<br>

<h3 align="center"> void CS_DISABLEMAXIMIZEBUTTON ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Desativa o botão de maximizar do console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Desativando o botão de maximizar
       CS_DISABLEMAXIMIZEBUTTON ();
}

```

<br>




#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232088894-39bed794-2903-4d03-bce1-b49e4c3b9d45.png">
</p>












<br>

<h3 align="center"> void CS_DISABLEMINIMIZEBUTTON ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Desativa o botão de minimizar do console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Desativando o botão de minimizar
       CS_DISABLEMINIMIZEBUTTON ();
}

```

<br>




#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232089300-2523e06c-a216-4bef-bb7f-bbb5f12790c4.png">
</p>













<br>

<h3 align="center"> void CS_DISABLECLOSEBUTTON ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Desativa o botão de fechar do console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Desativando o botão de fechar
       CS_DISABLECLOSEBUTTON ();
}

```

<br>




#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232089605-07715bde-be36-4cbc-8f5a-08c1f351ea24.png">
</p>

















<br>

<h3 align="center"> void CS_DISABLEALLBUTTONS ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Desativa todos os botões do console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Desativando todos os botões
       CS_DISABLEALLBUTTONS ();
}

```

<br>




#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232090622-d858672b-b93c-40d9-bf2a-9c3827ae175d.png">
</p>


















<br>

<h3 align="center"> void CS_DISABLERESIZE ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Desativa a propriedade de resize presente no console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Agora o console não pode sofrer resize
       CS_DISABLERESIZE ();
}

```

<br>




#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: O CONSOLE SIMPLESMENTE NÃO PODERÁ SOFRER RESIZE!

```





















<br>

<h3 align="center"> void CS_DISABLESCROLLBAR ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Desativa a scrollbar do console se existir`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Desativando a scrollbar
       CS_DISABLESCROLLBAR ();
}

```

<br>




#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232091689-8fd1fb2f-8623-4ad0-a7ed-4707b8ed49e2.png">
</p>



























<br>

<h3 align="center"> void CS_SETTEXTATTRIBUTE ( int VARIATION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define a estilização / cor do console a partir do uso do parâmetro VARIATION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Loop para mostrar todas as possíveis variações
       for ( kaj = 0; kaj < 255; kaj++ )
       {
            CS_SETTEXTATTRIBUTE ( kaj );
            printf ("COLOR %d\n", kaj );
       }
}

```

<br>



#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: PARA SABER CORRETAMENTE QUAL VARIAÇÃO USAR EXECUTE O CÓDIGO ACIMA QUE VOCÊ OBTERÁ A VARIAÇÃO DESEJADA, O VALOR 15 É O PADRÃO DE C

```


















<br>

<h3 align="center"> void CS_SETPOSITION ( int X , int Y ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define a posição onde o console irá estar, usando os parâmetros X e Y que sempre devem ser positivos`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo a posição inicial do console
       CS_SETPOSITION ( 0 , 0 );

       getch ();

       // Definindo uma nova posição do console
       CS_SETPOSITION ( 300 , 50 );
}

```

<br>



#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: A POSIÇÃO DO CONSOLE SERÁ DEFINIDA A PARTIR DE X E Y ( CONSIDERANDO O TAMANHO DO CONSOLE TBM e que x e y nunca são negativos ) 

```



















<br>

<h3 align="center"> void CS_SETSIZE ( int WIDHT , int HEIGHT ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define o tamanho do console, a partir dos parâmetros WIDTH e HEIGHT`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo um novo tamanho para o console
       CS_SETSIZE ( 50 , 10 );
}

```

<br>




#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232095968-43eb685a-4174-4e37-a5c0-001bd10ec9b1.png">
</p>




















<br>

<h3 align="center"> void CS_SETCURSORATTRIBUTES ( bool HIDE_ , bool BOLDCURSOR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define os atributos do cursor do console, onde HIDE_ definirá se ele estará visível e BOLDCURSOR define se o cursor será do tipo bold ou não`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Antes
    printf ("\n Texto para checar");
    getch ();

        system ("CLS");

    // Depois
    CS_SETCURSORATTRIBUTES ( YES , false );
    printf ("\n Texto para checar");
    getch ();
}

```

<br>


#### SAÍDA DO CONSOLE:

- ANTES

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232099808-46a082ac-9ef2-41cb-8f75-f89f319a6429.png">
</p>

- DEPOIS

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232099891-9f92f43f-e2db-468e-ac94-34c057f80734.png">
</p>


















<br>

<h3 align="center"> COORD CS_GETCURSORPOSITION ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Salva em uma variável / estrutura do tipo COORD a posição do cursor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    
    /* ESSE TIPO DE DADO 'COORD' DEVE SER USADO COM AS FUNÇÃO CS_SETCURSORPOSITION */
    
    // Exemplo da estrutura COORD
    COORD teste = { 10 , 20 };

    // Pegando a posição inicial
    COORD star = CS_GETCURSORPOSITION ();

    printf ("ARROZ GOSTA DE ALLEN");

    // Pegando a posição final
    COORD fim = CS_GETCURSORPOSITION ();


    // PRINTANDO AS COORDENADAS
    printf ("\n\nallen: Agora vamos pegar todas as coordenadas que definimos: \n\n");
    printf ("teste -> ( %d , %d ) \n", teste.X , teste.Y );
    printf ("star  -> ( %d , %d ) \n", star.X , star.Y );
    printf ("fim   -> ( %d , %d ) \n", fim.X , fim.Y );
}

```

<br>


#### SAÍDA DO CONSOLE:

```sh

ARROZ GOSTA DE ALLEN

allen: Agora vamos pegar todas as coordenadas que definimos:

teste -> ( 10 , 20 )
star  -> ( 0 , 0 )
fim   -> ( 20 , 0 )

```

















<br>

<h3 align="center"> COORD CS_SETCURSORPOSITION ( COORD newPos ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define atráves de uma COORD a nova posição do cursor`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Estrutura COORD para definirmos o lugar onde iremos substituir
    COORD pos = { 0 , 0 };

    // Texto Inicial de Teste que será substituido
    printf ("Texto para Teste");

    getch ();

    // Voltando o cursor para a posição 'pos'
    CS_SETCURSORPOSITION ( pos );

    // Substuindo o texto anterior
    printf ("Agora o texto foi substituido!");

    getch ();
}

```


<br>


#### SAÍDA DO CONSOLE:

- 1 ( Antes de chamar a função )

```sh

Texto para Teste

```

- 2 ( Depois de chamar a função )

```sh

Agora o texto foi substituido!

```


















<br>

<h3 align="center"> void CS_SETVISIBILITY ( bool HIDE_ ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Esconde ou mostra o console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{     
    // Escondendo o console
    CS_SETVISIBILITY ( true ); 
}

```


<br>


#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: SE O PARÂMETRO FOR IGUAL A true ESCONDE O CONSOLE E SE FOR IGUAL A false REAPARECE

```
