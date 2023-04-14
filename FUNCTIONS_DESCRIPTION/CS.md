<h1 align="center"> CS </h1>

---

#### As funções do tipo ` CS `, servem para permitir que em seu programa, haja um "total" controle do console, permitindo a alteração de elementos do console, como botões de maximizar, posição, tamanho, caption entre outras coisas, que serão mostradas nesse documento . 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---








<br>

<h3 align="center"> void CS_SETREGION ( int REGION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define a região do texto, usando os macros de regiões do console`;

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

- **O QUE ELA FAZ**: `Define o título do programa que fica no topo console`;

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

- **O QUE ELA FAZ**: `Define a estilização / cor do console`;

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

- **O QUE ELA FAZ**: `Define a posição onde o console irá estar`;

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
