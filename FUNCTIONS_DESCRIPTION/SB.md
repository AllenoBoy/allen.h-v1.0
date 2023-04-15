<h1 align="center"> SB </h1>

---

#### As funções do tipo ` SB `, servem para criar messagebox usando a api do windows.h e também permitem o uso de sons do sistema diretamente no seu programa. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---








<br>

<h3 align="center"> int SB_CREATEBOX ( LPCTSTR BOX_TEXT , LPCTSTR BOX_CAPTION, UINT BOX_TYPE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Cria uma messagebox padrão do windows com botões e textos específicos`;

<br>

#### MACROS PARA ESSA FUNÇÃO:

```txt
Listagem dos MACROS da api do windows que podem ser usados em UINT BOX_TYPE:

> TIPOS DE MESSAGEBOX:

MB_OK:               Exibe apenas o botão "OK".
MB_OKCANCEL:         Exibe os botões "OK" e "Cancelar".
MB_ABORTRETRYIGNORE: Exibe os botões "Abortar", "Repetir" e "Ignorar".
MB_YESNOCANCEL:      Exibe os botões "Sim", "Não" e "Cancelar".
MB_YESNO:            Exibe os botões "Sim" e "Não".
MB_RETRYCANCEL:      Exibe os botões "Repetir" e "Cancelar".

> ICONES DA MESSAGEBOX:

MB_ICONHAND:        Exibe um ícone de mão com um "X" vermelho.
MB_ICONQUESTION:    Exibe um ícone de ponto de interrogação.
MB_ICONEXCLAMATION: Exibe um ícone de ponto de exclamação.
MB_ICONASTERISK:    Exibe um ícone de asterisco.
MB_USERICON:        Exibe um ícone personalizado. < EXEMPLO DE USO NO FIM DESSE DOCUMENTO >

> DEFINIÇÕES:

MB_DEFBUTTON1:  Define o primeiro botão (esquerda) como o botão padrão.
MB_DEFBUTTON2:  Define o segundo botão como o botão padrão.
MB_DEFBUTTON3:  Define o terceiro botão como o botão padrão.
MB_DEFBUTTON4:  Define o quarto botão como o botão padrão.
MB_APPLMODAL:   Especifica que a caixa de mensagem deve ser modal para a aplicação atual.
MB_SYSTEMMODAL: Especifica que a caixa de mensagem deve ser modal para todo o sistema.
MB_TASKMODAL:   Especifica que a caixa de mensagem deve ser modal apenas para a janela atual.

OBS.: Esses macros podem ser chamados sozinhos ou com mais de um assim: MACRO | MACRO2 | MACRO 3
```

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
}

```

<br>

#### SAÍDA DO CONSOLE:

```txt
```

















<br>

<h3 align="center"> int SB_PLAYSOUND ( UINT SOUND ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Executa um som específico do sistema windows, definido pelo parâmetro SOUND`;

<br>

#### MACROS PARA ESSA FUNÇÃO:

```txt
Listagem dos MACROS da api do windows que podem ser usados em UINT SOUND:

MB_OK:              Som de aviso padrão. Valor padrão.
MB_ICONASTERISK:    Som de asterisco (usado no Windows XP e versões anteriores).
MB_ICONEXCLAMATION: Som de ponto de exclamação.
MB_ICONHAND:        Som de mão (usado no Windows XP e versões anteriores).
MB_ICONQUESTION:    Som de ponto de interrogação.
MB_ICONERROR:       Som de erro.
MB_ICONINFORMATION: Som de informação.
MB_ICONWARNING:     Som de aviso.
MB_ICONSTOP:        Som de parada.

OBS.: Esses macros podem ser chamados sozinhos ou com mais de um -> SB_PLAYSOUND ( MB_ICONQUESTION  | MB_OK ); 
```

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{
    PR ("Aperte qualquer tecla para reproduzir o som\n");
    getch ();

    SB_PLAYSOUND ( MB_ICONSTOP | MB_ICONWARNING );

    PR ("Som reproduzido");
}

```

<br>

#### SAÍDA DO CONSOLE:

- Antes da função:

```txt
Aperte qualquer tecla para reproduzir o som
_ <- Sinal do getch
```

- Após a função:

```txt
Aperte qualquer tecla para reproduzir o som
Som reproduzido! 
```
