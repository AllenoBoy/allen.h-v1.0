<h1 align="center"> SYS </h1>

---

#### As funções do tipo ` SYS `, servem para controlar algumas propriedades do console, mas seu diferencial é que esse tipo de função usa como base a execução de comandos diretamente no sistema, ou seja, permite que não só propriedades do console sejam alteradas, como também permite a execução de certas ações no próprio sistema operacional. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---











<br>

<h3 align="center"> void SYS_SETREGION ( int REGION ) </h3> 

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
       SYS_SETREGION (BRAZIL); 
       
       // Teste
       printf ("Acentuação\n\n");
       
       // Definindo o console como a padrão da linguagem c
       SYS_SETREGION (DEFAULT); 
       
       // Teste
       printf ("Acentuação");
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
Acentuação

AcentuaþÒo
```




















<br>

<h3 align="center"> void SYS_RESTARTCOMPUTER ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Reinicia o pc`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Reiniciando o pc
       SYS_RESTARTCOMPUTER ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: A FUNÇÃO IRÁ ENCERRAR O COMPUTADOR

```




















<br>

<h3 align="center"> void SYS_SETSIZE ( int COLS , int LINES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define o tamanho do console usando o COLS para definir a largura e LINES a altura`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Novo tamanho
       SYS_SETSIZE ( 50 , 10 );
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232136760-625d1408-b03a-41bf-bbe9-415ad28c8d6d.png">
</p>




























<br>

<h3 align="center"> void SYS_SETCOLOR ( char TEXTCOLOR , char BACKGROUNDCOLOR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define uma cor padrão para o console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo uma cor padrão ao console
       SYS_SETCOLOR ( 'f' , 'c' );

       printf ("Seguindo um texto que possivelmente estaria inserido aqui...\n\n");
}

```

<br>

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232137127-dcaec490-c5db-429f-bc4d-e98af20cd5e2.png">
</p>

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232137429-1abf55d0-71c8-4693-8d2e-5da01d2b15a6.png">
</p>


























<br>

<h3 align="center"> void SYS_SETTITLE ( const char* TITLE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define o título do console a partir de TITLE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo o nome do console
       SYS_SETTITLE ("today");
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232137880-eec4f0fd-5d66-4c9f-88de-2abda11a60b5.png">
</p>



























<br>

<h3 align="center"> void SYS_PAUSE ( int HIDE_ ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Cria um pause no console, de forma visível ou escondida usando a HIDE_`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       printf ("Olha so    ");
       
       // Printando a informação sem esconder
       SYS_PAUSE ( no );
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

Olha so    Pressione qualquer tecla para continuar...

```











<br>

<h3 align="center"> void SYS_SETFULLSCREEN ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Deixa o console em tela cheia da forma alt+enter`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Deixando em tela cheia
       SYS_SETFULLSCREEN ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: O CONSOLE FICARÁ EM TELA CHEIA NA FORMA ALT+ENTER

```










<br>

<h3 align="center"> void SYS_GCCVERSION ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Printa no console a atual versão do compilador da linguagem c`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Compilador padrão da biblioteca
       SYS_GCCVERSION ();
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232138920-0c61d00a-6d06-4c40-bbcb-b756a284c60d.png">
</p>


























<br>

<h3 align="center"> void SYS_POPS ( const char* COMMAND ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Funciona como a função system (""), onde você pode executar diversas funções, do sistema`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Exemplo: Comando de Pause
       SYS_POPS ( "pause" );
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
Pressione qualquer tecla para continuar...
```























<br>

<h3 align="center"> void SYS_CLEARSCREEN ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Limpa no console tudo o que já tiver cido escrito`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       printf ("i'm shaking my head, they say i am so humle, they give so much to me");
       getch ();
       
       SYS_CLEARSCREEN ();
       printf ("Discord");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da chamada da função:

```sh
i'm shaking my head, they say i am so humle, they give so much to me
```

- Depois da chamada da função:

```sh
Discord
```

























<br>

<h3 align="center"> void SYS_READFILE ( const char* FILENAME ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Lê o conteúdo de um arquivo específico diretamente no console, observação todas as funções referentes a arquivos / diretórios quando executadas na IDE levam em consideração a pasta do projeto, mais caso vc exporte o programa ele levará em consideração aquela pasta do executável`;

<br>

#### ARQUIVO DE EXEMPLO:

| arq.txt

```txt

Eu allen walker, gosto de comer chocolate!
allen anda d+
the feelings start to rise
when i get the time
oohh, forgiving who u are

```
<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
      // Printando o conteúdo do arquivo
      SYS_READFILE ( "arq.txt" );
      
      /*
       CASO O ARQUIVO ESTEJA DENTRO DE UMA PASTA ESPECÍFICA, A FORMA DE CHAMAR É A SEGUINTE:
       _suponhamos uma pasta "data" com o arquivo arq.txt, na execução do código ficaria assim
       
       SYS_READFILE ( "data\\arq.txt" );
       
       */
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
Eu allen walker, gosto de comer chocolate!
allen anda d+
the feelings start to rise
when i get the time
oohh, forgiving who u are
```
























<br>

<h3 align="center"> void SYS_LISTDIR ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Lista / Printa no console todas os diretórios locais`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
      // Mostrando todos os diretórios locais
      SYS_LISTDIR ("");
      
      /*
       * CASO VOCÊ QUEIRA LISTAR O CONTEÚDO DE UMA PASTA: FAÇA ASSIM -> SYS_LISTDIR ( "nome_da_pasta\\nome_da_pasta_2_se_tiver");
       */
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232146163-bc7ef16f-ee23-44e4-b9cd-21a991775b87.png">
</p>
























<br>

<h3 align="center"> void SYS_CREATEDIR ( const char* DIR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Cria uma pasta usando o parâmetro DIR`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
      // Criando uma pasta ( no diretório do programa )
    SYS_CREATEDIR ("ALLEN");

    /*
     * CASO QUEIRA CRIAR UMA PASTA DENTRO DE OUTRA: FAÇA ASSIM -> SYS_CREATEDIR ("ALLEN\\outra_pasta");
     */
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
OBSERVAÇÃO: SERÁ CRIADA UMA PASTA COM O NOME DEFINIDO NO DIRETÓRIO DO PROGRAMA!
```











































