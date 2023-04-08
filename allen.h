# ifndef _ALLEN_










// DEFAULT HEADERS

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


// TERM_OS

# define MAX_PATH_LENGTH PATH_MAX
# define WM_SETBKCOLOR 0x2001
# ifndef _WIN32_WINNT
# define _WIN32_WINNT 0x0500
# endif
# define STATIC_TEXT_CLASS_NAME "STATIC"
# ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
# define ENABLE_VIRTUAL_TERMINAL_PROCESSING  0x0004
# endif





// MACROS


/*
    1. ALLEN DEFINED
*/

# define YES           1
# define yes           1
# define NO            0
# define no            0





/*
    2. REGIONS
*/

# define DEFAULT     850
# define BRAZIL     1252
# define LATIN      1250
# define CIRILICO   1251
# define JAPAN       932
# define COREAN      949
# define GREGO      1253
# define TURCO      1254






/*
    3. KEYS
*/

# define UP_KEY       72
# define DOWN_KEY     80
# define LEFT_KEY     75
# define RIGHT_KEY    77
# define ENTER        13
# define BACKSPACE     8
# define EMPTY         0
# define SPACEBAR     32





/*
    4. TEXT AND BACKGROUND STYLE
*/

# define BRIGHT1       0
# define BRIGHT2       1
# define UNBRIGHT      2
# define ITALIC        3
# define UNDERLINE     4
# define BLINKER1      5
# define BLINKER2      6
# define BACKSET       7
# define HIDE          8
# define CUT           9





/*
    5. ALLEN OPERATORS
*/

# define HT 989
# define LT 898
# define EQ 888
# define DF 999
# define HE 998
# define LE 889
# define NRM 22
# define CRY 33
# define SZE 44
# define PWD 87
# define ONS 13
# define PWS 82
# define ONN 34
# define PWN 23
# define PAR              54
# define IMPAR            85
# define MULTIPLO         62
# define QUADRADO_X_DF_Y  78
# define QUADRADO_X_EQ_Y  43
# define INVERSO          82
# define CRESCENTE      1004
# define DECRESCENTE    4001
# define NOTMULTIPLO    0404





/*
    6. GWC_STRING FUNCTION
*/

# define strSIZE   92
# define nSIZE      0
# define strEQT    32
# define strDFT    23
# define nTEXT   "@%!*"





/*
    7. PR_STRING FUNCTION
*/

# define string_NORMAL   9
# define string_INVERTED 99
# define string_FORMAT_H 88
# define string_FORMAT_L 77
# define string_CRYPTO   90
# define noSUBS 0
# define noTOKEN ' '


/*
    8. C FUNCTIONS MACRO
*/

# define se             if
# define e_se           else if
# define senao          else
# define para           for
# define enquanto       while
# define faca           do
# define escolha        switch
# define caso           case
# define quebre         break
# define inteiro        int
# define real32         float
# define real64         double
# define caractere      char
# define booleano       bool
# define emlinha        inline
# define tipoderegistro typedef
# define registro       struct
# define vazio          void
# define nao_registrado unsigned
# define padrao         default
# define tamanhode      sizeof
# define inteiro_longo  long
# define registrado     signed
# define estatico       static
# define inteiro_curto  short
# define constante      const
# define uniao          union
# define volatil        volatile
# define retorne        return
# define devolva        return
# define salve          return




# endif /*_ALLEN_*/


// GLOBAL FUNCTIONS





/*
    1. PR FUNCTIONS
*/


void PR              ( const char *TEXT );
void PRL             ( int TIMES );
void PRS             ( int TIMES );
void PR_INT          ( int VARIABLE );
void PR_CHAR         ( char VARIABLE, int TIMES );
void PR_FLOAT        ( float VARIABLE, int COMMAS );
void PR_DOUBLE       ( double VARIABLE, int COMMAS );
void PR_STRING       ( char STRING[] , int HOW_TO_PRINT ,char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ...);
void PRV_INT         ( int REVERSE , int SIZE , int TYPE , int SPACE , const char* ANY_TEXT , const char* ANY_TEXT2, int ARRAY [] );
void PRV_FLOAT       ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], float ARRAY [] );
void PRV_DOUBLE      ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], double ARRAY [] );
void PRM_INT         ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  int B_ARRAY [LINES] [COLS] );
void PRM_FLOAT       ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [LINES] [COLS] );
void PRM_DOUBLE      ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  double B_ARRAY [LINES] [COLS] );
void PRL_INT         ( int REVERSE , int LINES , int COLS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [LINES] [COLS] , int MORE_SPACE );
void PRL_FLOAT       ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  float array [] , char string [LINES] [COLS], int MORE_SPACE );
void PRL_DOUBLE      ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  double array [] , char string [LINES] [COLS], int MORE_SPACE );
void PR_intVETOR     ( int SIZE , int ARRAY [] );
void PR_intMATRIZ    ( int LINES , int COLS , int B_ARRAY [LINES] [COLS] );
void PR_floatVETOR   ( int SIZE , int COMMA , float ARRAY [] );
void PR_floatMATRIZ  ( int LINES , int COLS , int COMMA , float B_ARRAY [LINES] [COLS] );
void PR_doubleVETOR  ( int SIZE , int COMMA , double ARRAY [] );
void PR_doubleMATRIZ ( int LINES , int COLS , int COMMA , double B_ARRAY [LINES] [COLS] );
void PR_charVETOR    ( int SIZE , char ARRAY [] );
void PR_charMATRIZ   ( int LINES , int COLS , char B_ARRAY [LINES] [COLS] );





/*
    2. CS FUNCTIONS add a set icon functions
*/


void  CS_SETREGION                           ( int REGION );
void  CS_SETTITLE                            ( const char* TITLE );
void  CS_SETFULLSCREEN                       ( void );
void  CS_DISABLEMAXIMIZEBUTTON               ( void );
void  CS_DISABLEMINIMIZEBUTTON               ( void );
void  CS_DISABLECLOSEBUTTON                  ( void );
void  CS_DISABLEALLBUTTONS                   ( void );
void  CS_DISABLERESIZE                       ( void );
void  CS_DISABLESCROLLBAR                    ( void );
void  CS_SETTEXTATTRIBUTE                    ( int VARIATION );
void  CS_SETPOSITION                         ( int X , int Y );
void  CS_SETSIZE                             ( int WIDHT , int HEIGHT );
void  CS_SETFONTSIZE                         ( int SIZE );
void  CS_SETFONTFAMILY                       ( char* FONTNAME , int FONTWIDTH , int FONTHEIGHT );
void  CS_SETCURSORATTRIBUTES                 ( bool HIDE_ , bool BOLDCURSOR );
COORD CS_GETCURSORPOSITION                   ( void );
int   CS_GETxCURSORPOSITION                  ( void );
int   CS_GETyCURSORPOSITION                  ( void );
COORD CS_SETxyCURSOR                         ( int X , int Y );
void  CS_SETCURSORPOSITION                   ( COORD newPos );
void  CS_SETVISIBILITY                       ( bool HIDE_ );
void  NEWCONSOLE                             ( void );
void  CLOSECONSOLE                           ( void );





/*
    3. SYS FUNCTIONS
*/


void SYS_SETREGION        ( int REGION );
void SYS_SETSIZE          ( int COLS , int LINES );
void SYS_SETCOLOR         ( char TEXTCOLOR , char BACKGROUNDCOLOR );
void SYS_SETTITLE         ( const char* TITLE );
void SYS_PAUSE            ( int HIDE_ );
void SYS_GCCVERSION       ( void );
void SYS_READFILE         ( const char* TITLE );
void SYS_RESTARTCOMPUTER  ( void );
void SYS_SETFULLSCREEN    ( void );
void SYS_POPS             ( const char* COMMAND );
void SYS_CLEARSCREEN      ( void );
void SYS_READFILE         ( const char* FILENAME );
void SYS_LISTDIR          ( void );
void SYS_MOVETODIR        ( const char* DIR );
void SYS_CREATEDIR        ( const char* DIR );
void SYS_REMOVEDIR        ( const char* DIR );
void SYS_COPYFILE         ( const char* FILE , const char* DIR );
void SYS_XCOPYFILE        ( const char* FILE , const char* DIR );
void SYS_MOVEDIR          ( const char* DIR , const char* FINALDIR );
void SYS_DELETEFILE       ( const char* DIR_OR_FILE );
void SYS_RENAMEFILE       ( const char* FILE , const char* NEW_NAME );
void SYS_ECHO             ( const char* TEXT );
void SYS_PING             ( void );






/*
    4. PROP FUNCTIONS
*/


// PROPS
enum   COLORS { DEFAULT_TEXT , BLACK_TEXT = 30 , RED_TEXT , GREEN_TEXT , YELLOW_TEXT , BLUE_TEXT , MAGENTA_TEXT , CYAN_TEXT , WHITE_TEXT , DEFAULT_BACKGROUND = 40 , RED_BACKGROUND , GREEN_BACKGROUND , YELLOW_BACKGROUND , BLUE_BACKGROUND , MAGENTA_BACKGROUND , CYAN_BACKGROUND , WHITE_BACKGROUND };
enum   CLEARCODES { ClearTheTextFromTheCursorToTheEnd, ClearTheTextFromTheCursorToTheStart, ClearTheScreen };
static HANDLE stdoutHandle , stdinHandle;
static DWORD  outModeInit  , inModeInit;


// FUNCTIONS
static inline void ENABLEPROPS                ( void );
static inline void PROP_RESTORECONSOLE        ( void );
static inline void PROP_TEXTCOLOR             ( int CODE );
static inline void PROP_TEXTSTYLE             ( int CODE );
static inline void PROP_BACKGROUNDCOLOR       ( int CODE );
static inline void PROP_BACKGROUNDSTYLE       ( int CODE );
static inline void PROP_RESETCOLOR            ( void );
static inline void PROP_CLS                   ( void );
static inline void PROP_CLsAFTER              ( void );
static inline void PROP_ClsBEFORE             ( void );
static inline void PROP_CLEARLINE             ( void );
static inline void PROP_CLEARLINEtoRIGHT      ( void );
static inline void PROP_CLEARLINEtoLEFT       ( void );
static inline void PROP_MOVECURSORup          ( int POSITION );
static inline void PROP_MOVECURSORdown        ( int POSITION );
static inline void PROP_MOVECURSORright       ( int POSITION );
static inline void PROP_MOVECURSORleft        ( int POSITION );
static inline void PROP_MOVECURSORto          ( int ROW , int COL );
static inline void PROP_SAVECURSORPOSITION    ( void );
static inline void PROP_RESTORECURSORPOSITION ( void );
static inline void PROP_HIDECURSOR            ( void );
static inline void PROP_SHOWCURSOR            ( void );





/*
    5. G FUNCTIONS
*/


static inline void BUFFER     ( void );
char               get        ( void );
int                G_INT      ( void );
char               G_CHAR     ( void );
float              G_FLOAT    ( void );
double             G_DOUBLE   ( void );
static inline char G_STRING   ( char STRING [] );
int                GWC_INT    ( int VALUE , int CONDITION , int COMPARATOR , const char* TEXT , int LINE , int SPACES );
float              GWC_FLOAT  ( float VALUE , int CONDITION , float COMPARATOR , const char* TEXT , int LINE , int SPACES );
double             GWC_DOUBLE ( double VALUE , int CONDITION , double COMPARATOR , const char* TEXT , int LINE , int SPACES );
char               GWC_CHAR   ( char VALUE , int CONDITION , char COMPARATOR , const char* TEXT , int LINE , int SPACES );
char               GWC_STRING ( const char *QUESTION , char STRING [] , int LINES , int SPACES , int TYPE_OF , int SIZE_LIMITER , char TEXT_COMPARATOR [] , char EXIT_TOKEN [] );
int                getI       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int COMPARATOR );
float              getF       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , float COMPARATOR );
float              getD       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , double COMPARATOR );
char               getS       ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int MAX_SIZE , char STRING [MAX_SIZE] , char TOKEN , int NUMBER_OF_REPLACEMENTS , ... );


/*
    6. allen FUNCTIONS
*/


int  allen_GETDIGITS              ( int VARIABLE );
void allen_GOTOXY                 ( int X , int Y );
void allen_TESTCODEPAGE           ( int CODE_PAGE );
void allen_CLEARSTRING            ( char *STRING );
int  allen_HIGHERVALUEOF_ARRAY    ( int SIZE , int ARRAY [] );
int  allen_HIGHERVALUEOFA_B_ARRAY ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] );
int  allen_LOWERVALUEOF_ARRAY     ( int SIZE , int ARRAY [] );
int  allen_LOWERVALUEOFA_B_ARRAY  ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] );
int  allen_SUBSINTARRAY           ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int TOKEN );
int  allen_COPYINTARRAY           ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int NEW_ARRAY [] );
void allen_CLEARINTARRAY          ( int SIZE , int ARRAY [] );
int  allen_SUBSINTB_ARRAY         ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int TOKEN , int B_ARRAY [LINES] [COLUNS] );
int  allen_INTCOPYB_ARRAY         ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int B_ARRAY [LINES] [COLUNS] , int NEW_B_ARRAY [LINES] [COLUNS] );
void allen_CLEARINTB_ARRAY        ( int LINES , int COLUNS , int B_ARRAY [ LINES ] [ COLUNS ] );
void allen_ADDTOSTRING            ( char * STRING , char * ADD );
void allen_REMAKESTRING           ( char * STRING , char * REMAKE );







/*
    7. SB FUNCTIONS
*/


int  SB_CREATEBOX ( LPCTSTR BOX_TEXT , LPCTSTR BOX_CAPTION, UINT BOX_TYPE );
void SB_PLAYSOUND ( UINT SOUND ); // MB_ICONASTERISK MB_ICONEXCLAMATION 0xFFFFFFFF MB_ICONERROR MB_ICONHAND MB_ICONINFORMATION MB_ICONQUESTION MB_ICONSTOP MB_ICONWARNING MB_OK





/*
    8. MATTE FUNCTIONS
*/


double MATTE_cosseno             ( double SIN , bool PRINT , int COMMAS );
double MATTE_cosemrad            ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_coshiperbolico      ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_seno                ( double SIN , bool PRINT , int COMMAS );
double MATTE_senoemrad           ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_senohiperbolico     ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_tangente            ( double TAN , bool PRINT , int COMMAS );
double MATTE_tangenteemrad       ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_arcotangente        ( double X , double Y , bool PRINT , int COMMAS );
double MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS );
double MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS );
double MATTE_exp                 ( double X , bool PRINT , int COMMAS );
double MATTE_modulo              ( double X , bool PRINT , int COMMAS );
double MATTE_mantissa            ( double X , bool PRINT , int COMMAS );
double MATTE_ldexp               ( double X , int EXPOENTE , bool PRINT , int COMMAS );
double MATTE_log                 ( double X , bool PRINT , int COMMAS );
double MATTE_log10               ( double X , bool PRINT , int COMMAS );
double MATTE_soapartedecimal     ( double X , bool PRINT , int COMMAS );
double MATTE_potencia            ( double BASE , double EXPO , bool PRINT , int COMMAS );
double MATTE_raizquadrada        ( double X , bool PRINT , int COMMAS );





/*
    9. LOCH FUNCTIONS
*/


void LOCH_LOCAL ( void );
void LOCH_SETLOCAL ( char TEXT [] );





/*
    10. FLEE FUNCTIONS
*/


void   FLEE_CREATEAFILE 	     ( const char * FILE_NAME );
void   FLEE_RENAMEAFILE 		 ( const char * FILE_NAME , const char * NEW_FILE_NAME );
void   FLEE_MOVEAFILE 		     ( const char * FILE_NAME , const char * NEW_DIRECTORY );
void   FLEE_COPYAFILE 		     ( const char * FOLDER , const char * FILE_NAME, const char* NEW_FOLDER , const char* NEW_FILENAME );
void   FLEE_CREATEAFILEANDFOLDER ( const char * FOLDER_NAME , const char* FILE_NAME );
void   FLEE_CREATEAFOLDER 	     ( const char * FOLDER_NAME );
void   FLEE_RENAMEAFOLDER 	     ( const char *FOLDER_NAME , const char *NEW_FOLDER_NAME );
void   FLEE_DELETEAFILE 		 ( const char *FILE_NAME );
void   FLEE_DELETEAFOLDER 	     ( const char * FOLDER_NAME );
void   FLEE_MOVEAFOLDER 		 ( const char *FOLDER_NAME , const char *NEW_PATH );
void   FLEE_COPYAFOLDER 		 ( const char *FOLDER_NAME , const char *NEW_PATH );
void   FLEE_SYSTEMFOLDER         ( const char * SYSTEM_FOLDER_NAME , char * FOLDER , char * SAVE_PATH );
void   FLEE_saveINT              ( int VALUE , const char * FILE_NAME );
int    FLEE_loadINT              ( const char * FILE_NAME );
void   FLEE_saveCHAR             ( char CHARACTER , const char * FILE_NAME );
char   FLEE_loadCHAR             ( const char * FILE_NAME );
void   FLEE_saveFLOAT            ( float VALUE , int COMMAS , const char * FILE_NAME );
float  FLEE_loadFLOAT            ( const char * FILE_NAME );
void   FLEE_saveDOUBLE           ( double VALUE , int COMMAS , const char * FILE_NAME );
double FLEE_loadDOUBLE           ( const char* FILE_NAME );
void   FLEE_saveSTRING           ( const char * STRING , const char * FILE_NAME );
void   FLEE_loadSTRING           ( char * STRING , int SIZE_OF_READ , const char * FILE_NAME );
int    FLEE_COUNTLINES           ( const char * FILE_NAME );
int    FLEE_COUNTWORDS           ( const char * FILE_NAME );
int    FLEE_COUNTNUMBERS         ( const char * FILE_NAME );
int    FLEE_COUNTint 	         ( const char * FILE_NAME , int VALUE );
int    FLEE_COUNTLINES           ( const char * FILE_NAME );
int    FLEE_COUNTWORDS           ( const char * FILE_NAME );
int    FLEE_COUNTNUMBERS         ( const char * FILE_NAME );
int    FLEE_COUNTint 	         ( const char * FILE_NAME , int VALUE );
int    FLEE_COUNTfloat           ( const char * FILE_NAME , float VALUE );
int    FLEE_COUNTdouble          ( const char * FILE_NAME , double VALUE );
int    FLEE_COUNTchar            ( const char * FILE_NAME , char CHAR );
int    FLEE_COUNTstring          ( const char * FILE_NAME , const char * STRING );
int    FLEE_GLOBALSUBSint        ( const char * FILE_NAME, int VALUE , const char * TOKEN );
int    FLEE_LOCALSUBSint         ( const char * FILE_NAME , int VALUE , const char * TOKEN );
int    FLEE_GLOBALSUBSintl       ( const char* FILE_NAME , int WHAT_LINE , int VALUE , const char* TOKEN );
int    FLEE_LOCALSUBSintl        ( const char * FILE_NAME , int WHAT_LINE , int VALUE , const char * TOKEN );


int    FLEE_GLOBALSUBSfloat      ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN );
int    FLEE_LOCALSUBSfloat       ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN );


int    FLEE_GLOBALSUBSdouble     ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN );
int    FLEE_LOCALSUBSdouble      ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN );


int    FLEE_GLOBALSUBSchar       ( const char * FILE_NAME , char VALUE , const char * TOKEN );
int    FLEE_LOCALSUBSchar        ( const char * FILE_NAME , char VALUE , const char * TOKEN );


int    FLEE_GLOBALSUBSstring     ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN );
int    FLEE_LOCALSUBSstring      ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN );

// PR



void
PR ( const char *TEXT )
{
     printf (TEXT);
}





void
PRL ( int TIMES )
{
     for (; TIMES > 0 ; TIMES--)
     printf ("\n");
}





void
PRS ( int TIMES )
{
     for (; TIMES > 0; TIMES--)
     printf (" ");
}





void
PR_INT ( int VARIABLE )
{
     printf ("%d", VARIABLE);
}





void
PR_CHAR ( char VARIABLE, int TIMES )
{
     for (; TIMES > 0; TIMES--)
     printf ("%c", VARIABLE);
}





void
PR_FLOAT ( float VARIABLE, int COMMAS )
{
     printf ("%.*f ", (COMMAS <= 0) ? 0 : COMMAS, VARIABLE);
}





void
PR_DOUBLE ( double VARIABLE, int COMMAS )
{
     printf ("%.*lf ", (COMMAS <= 0) ? 0 : COMMAS, VARIABLE);
}





void
PR_STRING ( char STRING[] , int HOW_TO_PRINT ,char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ...)
{

     va_list args;
     va_start ( args , NUMBER_OF_REPLACEMENTS );
     char subs [ NUMBER_OF_REPLACEMENTS ];
     int kaj;


     for ( kaj = 0; kaj < NUMBER_OF_REPLACEMENTS; kaj++ ) subs [ kaj ] = va_arg ( args , int );


     switch ( HOW_TO_PRINT )
     {
              case string_NORMAL:
                                 printf("%s", STRING);
              break;



              case string_INVERTED:
                                   for ( kaj = strlen ( STRING ) - 1; kaj >= 0; kaj-- ) putchar ( STRING [ kaj ] );
              break;



              case string_FORMAT_H:
                                   for ( kaj = 0; kaj < strlen(STRING); kaj++ ) putchar ( toupper ( STRING [ kaj ] ) );
              break;



              case string_FORMAT_L:
                                   for ( kaj = 0; kaj < strlen ( STRING ); kaj++ ) putchar ( tolower ( STRING [ kaj ] ) );
              break;



              case string_CRYPTO:

                                 for ( int i = 0; i < strlen ( STRING ); i++ )
                                 {
                                       char c = STRING [ i ];

                                              for ( int j = 0; j < NUMBER_OF_REPLACEMENTS; j++ )
                                                       if ( c == subs [ j ]) { c = REPLACEMENT_CHAR; break; }
                                 putchar ( c );
                                 }
                                 break;
    }

    va_end ( args );
}





void
PRV_INT ( int REVERSE , int SIZE , int TYPE , int SPACE , const char* ANY_TEXT , const char* ANY_TEXT2, int ARRAY [] )
{


       int GUARD = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {

                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("%d", ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("%s%d", ANY_TEXT, ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       printf ("\n%d%s", ARRAY [kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf ("\n%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf ("%d", ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("%d", ARRAY [kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = GUARD;
                 }
            }



       if ( TYPE == 2 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("%s%d ", ANY_TEXT, ARRAY [kaj]);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 3 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 4 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");
                  printf ("%s%d", ANY_TEXT, ARRAY [kaj]);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 5 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");
                  printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 6 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");
                  printf ("%d", ARRAY [kaj]);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = GUARD;
            }
       }



       }

}





void
PRV_FLOAT ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], float ARRAY [] )
{


       int guard = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*f", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*f%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 2 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*f", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 3 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 4 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*f%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }
}





void
PRV_DOUBLE ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], double ARRAY [] )
{


       int guard = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*lf", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*lf%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 2 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*lf", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 3 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }




            if ( TYPE == 4 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*lf%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");
                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       while ( SPACE > 0 ) { printf(" "); SPACE--; }
                       SPACE = guard;
                 }
            }

       }
}





void
PRM_INT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  int B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int higher = 0;
       int digits = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {


                case 0:

                if ( STYLE <= 1 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 2 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s\n", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 3 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;

                           if ( jak == COLS - 1 )
                           printf ("\n");
                     }

                }

                if ( STYLE >= 4 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           if ( B_ARRAY [kaj] [jak] >= higher )
                           higher = B_ARRAY [kaj] [jak];
                     }


                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           while ( higher not_eq 0 )
                           {
                                   higher /= 10;
                                   digits++;
                           }
                     }


                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%*d%s", LEFT_TEXT, digits, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;

                           if ( jak == COLS - 1 )
                           printf ("\n");
                     }

                }

                break;


                case 1:

                if ( STYLE <= 1 )
                {

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 2 )
                {

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%d%s\n", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 3 )
                {

                      for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                      for ( jak = COLS - 1; jak >= 0;  jak-- )
                      {
                            printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                            while ( SPACE > 0 ) { printf(" "); SPACE--; }
                            SPACE = guardby;

                            if ( jak == 0 )
                            printf ("\n");
                      }

                }

                if ( STYLE >= 4 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           if ( B_ARRAY [kaj] [jak] >= higher )
                           higher = B_ARRAY [kaj] [jak];
                     }

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           while ( higher not_eq 0 )
                           {
                                   higher /= 10;
                                   digits++;
                           }
                     }

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%*d%s", LEFT_TEXT, digits, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE > 0 ) { printf(" "); SPACE--; }
                           SPACE = guardby;

                           if ( jak == 0 )
                           printf ("\n");
                     }

                }

                break;

                default:
                         exit (1);
                break;

       }
}





void
PRM_FLOAT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {

       case 0:

       if ( STYLE <= 1 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == COLS - 1 )
                  printf ("\n");
            }
       }

       break;

       case 1:

       if ( STYLE <= 1 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  printf ("%s%.*f%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {

            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == 0 )
                  printf ("\n");
            }
       }

       break;

       default:
               exit (1);
       break;

       }
}





void
PRM_DOUBLE ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  double B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {

       case 0:

       if ( STYLE <= 1 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == COLS - 1 )
                  printf ("\n");
            }
       }

       break;

       case 1:

       if ( STYLE <= 1 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {


                  printf ("%s%.*lf%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {

            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                  while ( SPACE > 0 ) { printf(" "); SPACE--; }
                  SPACE = guardby;

                  if ( jak == 0 )
                  printf ("\n");
            }
       }

       break;

       default:
               exit (1);
       break;

       }
}





void
PRL_INT ( int REVERSE , int LINES , int COLS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [LINES] [COLS] , int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < LINES; kaj++ )
               {
                     printf ("%s%d%s%s", TEXT1, array[kaj], TEXT2, string [kaj]);
                     while ( SPACE > 0 ) { printf(" "); SPACE--; }

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = LINES - 1; kaj >= 0; kaj-- )
               {
                     printf ("%s%d%s%s\n", TEXT1, array[kaj], TEXT2, string [kaj]);
                     while ( SPACE > 0 ) { printf(" "); SPACE--; }
                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

}





void
PRL_FLOAT ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  float array [] , char string [LINES] [COLS], int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < LINES; kaj++)
               {
                     printf("%s%.*f%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);
                     while ( SPACE > 0 ) { printf(" "); SPACE--; }

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = LINES - 1; kaj >= 0; kaj-- )
               {

                     printf("%s%.*f%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);
                     while ( SPACE > 0 ) { printf(" "); SPACE--; }

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }
}





void
PRL_DOUBLE ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  double array [] , char string [LINES] [COLS], int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < LINES; kaj++)
               {
                     printf("%s%.*lf%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);
                     while ( SPACE > 0 ) { printf(" "); SPACE--; }

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = LINES - 1; kaj >= 0; kaj-- )
               {
                     printf("%s%.*lf%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);
                     while ( SPACE > 0 ) { printf(" "); SPACE--; }

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }
}





void PR_intVETOR     ( int SIZE , int ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ ) printf ("%d ", ARRAY [kaj] );
}





void PR_intMATRIZ    ( int LINES , int COLS , int B_ARRAY [LINES] [COLS] )
{
    int kaj = 0, jak = 0;
    for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
          printf ("%d ", B_ARRAY [kaj] [jak] );
}





void PR_floatVETOR   ( int SIZE , int COMMA , float ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ )
          printf("%.*f ", (COMMA <= 0) ? 0 : COMMA , ARRAY [kaj] );
}





void PR_floatMATRIZ  ( int LINES , int COLS , int COMMA , float B_ARRAY [LINES] [COLS] )
{
    int kaj = 0, jak = 0;
    for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
          printf ("%.*f ", (COMMA <= 0) ? 0 : COMMA , B_ARRAY [kaj] [jak] );
}






void PR_doubleVETOR  ( int SIZE , int COMMA , double ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ )
          printf("%.*lf ", (COMMA <= 0) ? 0 : COMMA , ARRAY [kaj] );
}





void PR_doubleMATRIZ ( int LINES , int COLS , int COMMA , double B_ARRAY [LINES] [COLS] )
{
    int kaj = 0, jak = 0;
    for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
          printf ("%.*lf ", (COMMA <= 0) ? 0 : COMMA , B_ARRAY [kaj] [jak] );
}





void PR_charVETOR    ( int SIZE , char ARRAY [] )
{
    int kaj = 0;
    for ( kaj = 0; kaj < SIZE; kaj++ ) printf ("%c ", ARRAY [kaj] );
}





void PR_charMATRIZ   ( int LINES , int COLS , char B_ARRAY [LINES] [COLS] )
{
     int kaj = 0, jak = 0;
     for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLS; jak++ )
           printf ("%c ", B_ARRAY [kaj] [jak] );
}





// CS



void
CS_SETREGION ( int REGION )
{
     SetConsoleOutputCP ( REGION );
}





void
CS_SETTITLE ( const char* TITLE )
{
     SetConsoleTitle ( TITLE );
}






void
CS_SETFULLSCREEN ()
{
     HWND co = GetConsoleWindow ();
     ShowWindow ( co , SW_SHOWMAXIMIZED );
}





void
CS_DISABLEMAXIMIZEBUTTON ()
{
     HWND co = GetConsoleWindow ();
     DWORD sty = GetWindowLong ( co , GWL_STYLE );

     sty &= ~WS_MAXIMIZEBOX;
     SetWindowLong ( co, GWL_STYLE , sty );
}





void
CS_DISABLEMINIMIZEBUTTON ()
{
     HWND co = GetConsoleWindow ();
     DWORD sty = GetWindowLong ( co , GWL_STYLE );

     sty &= ~WS_MINIMIZEBOX;
     SetWindowLong ( co , GWL_STYLE , sty );
}





void
CS_DISABLECLOSEBUTTON ()
{
     HWND hwnd = GetConsoleWindow ();
     HMENU hmenu = GetSystemMenu ( hwnd , FALSE );

     EnableMenuItem ( hmenu , SC_CLOSE , MF_GRAYED );
     RemoveMenu ( hmenu , SC_CLOSE , MF_BYCOMMAND );
}





void
CS_DISABLEALLBUTTONS ()
{
    HWND co = GetConsoleWindow ();
    DWORD sty = GetWindowLong ( co , GWL_STYLE );

    sty &= ~WS_SYSMENU;
    SetWindowLong ( co , GWL_STYLE , sty);
}





void
CS_DISABLERESIZE ()
{
     HWND co = GetConsoleWindow ();

     DWORD sty = GetWindowLong ( co , GWL_STYLE );
     sty &= ~WS_SIZEBOX;

     SetWindowLong ( co , GWL_STYLE , sty );
}





void
CS_DISABLESCROLLBAR ()
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     GetConsoleScreenBufferInfo ( hConsole , &csbi );

     COORD bufferSize = { csbi.srWindow.Right - csbi.srWindow.Left + 1, csbi.srWindow.Bottom - csbi.srWindow.Top + 1 };

     SetConsoleScreenBufferSize ( hConsole , bufferSize );
}





void
CS_SETTEXTATTRIBUTE ( int VARIATION )
{
     SetConsoleTextAttribute ( GetStdHandle ( STD_OUTPUT_HANDLE ) , VARIATION );
}





void
CS_SETPOSITION ( int X , int Y )
{
     HWND CW = GetConsoleWindow ();
     SetWindowPos ( CW , 0 , X , Y , 0 , 0 , SWP_NOSIZE | SWP_NOZORDER );
}





void
CS_SETSIZE ( int WIDHT , int HEIGHT )
{
     WIDHT--; HEIGHT--;

     SMALL_RECT windowSize = { 0 , 0 , WIDHT , HEIGHT };
     SetConsoleWindowInfo ( GetStdHandle ( STD_OUTPUT_HANDLE ) , TRUE , &windowSize );
}




void
CS_SETFONTSIZE ( int SIZE )
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     CONSOLE_FONT_INFOEX font = { sizeof ( CONSOLE_FONT_INFOEX ) };

     GetCurrentConsoleFontEx ( hConsole , FALSE , &font );
     font.dwFontSize.Y = SIZE;
     SetCurrentConsoleFontEx ( hConsole , FALSE , &font );
}





void
CS_SETFONTFAMILY ( char* FONTNAME , int FONTWIDTH , int FONTHEIGHT )
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_FONT_INFOEX font;

     font.cbSize = sizeof(font);
     GetCurrentConsoleFontEx(hConsole, FALSE, &font);

     wchar_t wcFontName[LF_FACESIZE];
     mbstowcs(wcFontName, FONTNAME, LF_FACESIZE);
     wcscpy_s(font.FaceName, LF_FACESIZE, wcFontName);

     font.dwFontSize.X = FONTWIDTH;
     font.dwFontSize.Y = FONTHEIGHT;

     SetCurrentConsoleFontEx(hConsole, FALSE, &font);
}





void
CS_SETCURSORATTRIBUTES ( bool HIDE_ , bool BOLDCURSOR )
{
     HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_CURSOR_INFO info;

     if ( BOLDCURSOR == true ) info.dwSize = 100;
     if ( BOLDCURSOR == false ) info.dwSize = 1;

     if ( HIDE == true ) info.bVisible = FALSE;
     if ( HIDE == false ) info.bVisible = TRUE;

     SetConsoleCursorInfo(consoleHandle, &info);
}





COORD
CS_GETCURSORPOSITION ()
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO consoleInfo;

     GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
     COORD cursorPos = consoleInfo.dwCursorPosition;

     return cursorPos;
}





int
CS_GETxCURSORPOSITION ()
{
     COORD cursorPos = CS_GETCURSORPOSITION ();
     return cursorPos.X;
}





int
CS_GETyCURSORPOSITION ()
{
     COORD cursorPos = CS_GETCURSORPOSITION();
     return cursorPos.Y;
}





COORD
CS_SETxyCURSOR ( int X , int Y )
{
     COORD newPos = { X , Y };
     return newPos;
}





void
CS_SETCURSORPOSITION ( COORD newPos )
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     SetConsoleCursorPosition ( hConsole, newPos );
}





void
CS_SETVISIBILITY ( bool HIDE_ )
{
     HWND consoleWindow = GetConsoleWindow ();

     if ( HIDE == true  ) ShowWindow ( consoleWindow , SW_HIDE );
     if ( HIDE == false ) ShowWindow ( consoleWindow , SW_SHOW );
}





void
NEWCONSOLE ()
{
     FreeConsole ();
     AllocConsole ();

     freopen ("CONOUT$" , "w" , stdout );
     freopen ("CONIN$"  , "r" , stdin  );
}





void
CLOSECONSOLE ()
{
     HWND console_window = GetConsoleWindow ();
     if ( console_window not_eq NULL ) PostMessage ( console_window , WM_CLOSE , 0 , 0 );
}









// SYS


void
SYS_SETREGION ( int REGION )
{
     char command [20];

     sprintf ( command , "CHCP %d > NULL", REGION );
     system  ( command );
}



void SYS_RESTARTCOMPUTER ( void )
{
     system ("Restart-Computer");
}



void
SYS_SETSIZE ( int COLS , int LINES )
{
     if ( COLS <= 14 ) COLS  = 15;
     if ( LINES <= 0 ) LINES = 1;

     char command [30];

     sprintf ( command , "MODE CON: COLS=%d LINES=%d" , COLS , LINES );
     system  ( command );
}





void
SYS_SETCOLOR ( char TEXTCOLOR , char BACKGROUNDCOLOR )
{
     char command [30];

     sprintf ( command , "COLOR %c%c" , BACKGROUNDCOLOR , TEXTCOLOR );
     system  ( command );
}





void
SYS_SETTITLE ( const char* TITLE )
{
     char command [50];

     sprintf ( command , "TITLE %s" , TITLE );
     system  ( command );
}





void
SYS_PAUSE ( int HIDE_ )
{
     if ( HIDE == 1 ) system ("PAUSE > NULL");
     else             system ("PAUSE");
}






void
SYS_SETFULLSCREEN ( void )
{
     keybd_event ( VK_MENU, 0x36, 0, 0 );
     keybd_event ( VK_RETURN, 0x1C, 0, 0 );
     keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
     keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
}





void SYS_GCCVERSION ( void )
{
     system ("gcc --version");
}





void
SYS_POPS ( const char* COMMAND )
{
     system ( COMMAND );
}





void
SYS_CLEARSCREEN ()
{
     system ("CLS");
}





void
SYS_READFILE ( const char* FILENAME )
{
     char command [50];

     sprintf ( command , "TYPE %s" , FILENAME );
     system  ( command );
}





void
SYS_LISTDIR ( void )
{
    system ("dir");
}





void
SYS_MOVETODIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "cd %s" , DIR );
    system  ( command );
}





void
SYS_CREATEDIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "md %s" , DIR );
    system  ( command );
}





void
SYS_REMOVEDIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "rd %s" , DIR );
    system  ( command );
}





void
SYS_COPYFILE ( const char* FILE , const char* DIR )
{
    char command [50];

    sprintf ( command , "copy %s %s" , FILE , DIR );
    system  ( command );
}






void
SYS_XCOPYFILE ( const char* FILE , const char* DIR )
{
    char command [50];

    sprintf ( command , "xcopy %s %s" , FILE , DIR );
    system  ( command );
}





void
SYS_MOVEDIR ( const char* DIR , const char* FINALDIR )
{
    char command [50];

    sprintf ( command , "move %s %s" , DIR , FINALDIR );
    system  ( command );
}





void
SYS_DELETEFILE ( const char* DIR_OR_FILE )
{
    char command [50];

    sprintf ( command , "del %s" , DIR_OR_FILE );
    system  ( command );
}





void
SYS_RENAMEFILE ( const char* FILE , const char* NEW_NAME )
{
    char command [50];

    sprintf ( command , "ren %s %s" , FILE , NEW_NAME );
    system  ( command );
}





void
SYS_ECHO ( const char* TEXT )
{
    char command [50];

    sprintf ( command , "ren %s" , TEXT );
    system  ( command );
}





void
SYS_PING ( void )
{
    system ("IPCONFIG");
    system ("NETSTAT");
}


// PROP





static inline
void
ENABLEPROPS ( void )
{
     DWORD outMode = 0 , inMode = 0;

     stdoutHandle = GetStdHandle  ( STD_OUTPUT_HANDLE );
     stdinHandle  = GetStdHandle  ( STD_INPUT_HANDLE  );

     if ( stdoutHandle == INVALID_HANDLE_VALUE || stdinHandle == INVALID_HANDLE_VALUE ) exit ( GetLastError () );
     if ( !GetConsoleMode ( stdoutHandle , &outMode ) || !GetConsoleMode ( stdinHandle , &inMode ) ) exit ( GetLastError() );

     outModeInit = outMode;
     inModeInit = inMode;

     outMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
     inMode &= ~( ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT );

     if ( !SetConsoleMode ( stdoutHandle , outMode ) || !SetConsoleMode ( stdinHandle , inMode ) ) exit ( GetLastError () );
     system ("CLS");
}





static inline
void
PROP_RESTORECONSOLE ( void )
{
     printf ("\x1b[0m");

     if ( !SetConsoleMode ( stdoutHandle , outModeInit ) || !SetConsoleMode ( stdinHandle , inModeInit ) ) exit ( GetLastError () );
}





static inline
void
PROP_TEXTCOLOR ( int CODE )
{
     printf ("\x1b[%dm" , CODE);
}





static inline
void
PROP_TEXTSTYLE ( int CODE )
{
     printf ("\x1b[%d;1m" , CODE );
}





static inline
void
PROP_BACKGROUNDCOLOR ( int CODE )
{
     printf ("\x1b[%dm" , CODE );
}





static inline
void
PROP_BACKGROUNDSTYLE ( int CODE )
{
     printf ("\x1b[%d;1m" , CODE );
}





static inline
void
PROP_RESETCOLOR ( void )
{
     printf ("\x1b[%dm" , DEFAULT_TEXT );
}





static inline
void
PROP_CLS ( void )
{
     printf ("\x1b[%dJ" , ClearTheScreen );
}





static inline
void
PROP_CLsAFTER ( void )
{
     printf ("\x1b[%dJ" , ClearTheTextFromTheCursorToTheEnd );
}





static inline
void
PROP_ClsBEFORE ( void )
{
     printf ("\x1b[%dJ" , ClearTheTextFromTheCursorToTheStart );
}





static inline
void
PROP_CLEARLINE ( void )
{
     printf ("\x1b[%dK" , ClearTheScreen );
}





static inline
void
PROP_CLEARLINEtoRIGHT ( void )
{
     printf ("\x1b[%dK" , ClearTheTextFromTheCursorToTheEnd );
}





static inline
void
PROP_CLEARLINEtoLEFT ( void )
{
     printf ("\x1b[%dK" , ClearTheTextFromTheCursorToTheStart );
}





static inline
void
PROP_MOVECURSORup ( int POSITION )
{
     printf ("\x1b[%dA" , POSITION);
}





static inline
void
PROP_MOVECURSORdown ( int POSITION )
{
     printf ("\x1b[%dB" , POSITION );
}





static inline
void
PROP_MOVECURSORright ( int POSITION )
{
     printf ("\x1b[%dC" , POSITION );
}





static inline
void
PROP_MOVECURSORleft ( int POSITION )
{
     printf ("\x1b[%dD" , POSITION );
}





static inline
void
PROP_MOVECURSORto ( int ROW , int COL )
{
     printf ("\x1b[%d;%df" , ROW , COL );
}





static inline
void
PROP_SAVECURSORPOSITION ( void )
{
     printf ("\x1b%d" , 7 );
}





static inline
void
PROP_RESTORECURSORPOSITION ( void )
{
     printf ("\x1b%d" , 8 );
}





static inline
void
PROP_HIDECURSOR ( void )
{
     printf("\e[?25l");
}





static inline
void
PROP_SHOWCURSOR ( void )
{
     printf("\e[?25h");
}


// GET



static inline
void
BUFFER ( void )
{
     setbuf ( stdin , NULL );
     fflush ( stdin );
     setbuf ( stdout , NULL );
     fflush ( stdout );
}





int
G_INT ( void )
{
     int INT_VALUE;

     scanf (" %d", &INT_VALUE);
     setbuf (stdin, NULL);

     return INT_VALUE;
}





char
G_CHAR ( void )
{
     char CHAR_VALUE;

     scanf ("%c", &CHAR_VALUE);
     setbuf (stdin, NULL);

     return CHAR_VALUE;
}





float
G_FLOAT ( void )
{
     float FLOAT_VALUE;

     scanf ("%f", &FLOAT_VALUE);
     setbuf (stdin, NULL);

     return FLOAT_VALUE;
}





double
G_DOUBLE ( void )
{
     double DOUBLE_VALUE;

     scanf ("%lf", &DOUBLE_VALUE);
     setbuf (stdin, NULL);

     return DOUBLE_VALUE;
}





static inline
char
G_STRING ( char STRING [] )
{
    scanf ("%[^\n]", STRING );
    setbuf ( stdin , NULL );

    return *STRING;
}





int
GWC_INT ( int VALUE , int CONDITION , int COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





float
GWC_FLOAT ( float VALUE , int CONDITION , float COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





double
GWC_DOUBLE ( double VALUE , int CONDITION , double COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





char
GWC_CHAR ( char VALUE , int CONDITION , char COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





char
GWC_STRING ( const char *QUESTION , char STRING [] , int LINES , int SPACES , int TYPE_OF , int SIZE_LIMITER , char TEXT_COMPARATOR [] , char EXIT_TOKEN [] )
{

    int kaj = 0;

             switch ( TYPE_OF )
             {
                    case strSIZE:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strlen ( STRING ) > SIZE_LIMITER or strlen ( STRING ) == 0 or STRING [0] == ' ' );
                    break;

                    case strDFT:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strcmp ( STRING , TEXT_COMPARATOR ) not_eq 0 );
                    break;

                    case strEQT:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strcmp ( STRING , TEXT_COMPARATOR ) == 0 );
                    break;

                    case NRM:
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );
                    break;
             }


             return *STRING;
}





int
getI ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int COMPARATOR )
{

    int RESULT = 0;

    char c;
    char matr [100];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT not_eq COMPARATOR );
     break;




     case HE:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

                matr [pos] = 0;
                RESULT = atoi ( matr );

     break;


    } // end of the switch


    return RESULT;          /* RETURN THE REQUISITED VALUE */
}





float
getF ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , float COMPARATOR )
{

    float RESULT = 0;
    int COMMA = 0;

    char c;
    char matr [100];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT not_eq COMPARATOR );
     break;



     case HE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     break;


    } // end of the switch


    return RESULT;
}





float
getD ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , double COMPARATOR )
{

    double RESULT = 0;
    int COMMA = 0;

    char c;
    char matr [50];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT not_eq COMPARATOR );
     break;



     case HE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     break;


    } // end of the switch


    return RESULT;
}





char
getS ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int MAX_SIZE , char STRING [MAX_SIZE] , char TOKEN , int NUMBER_OF_REPLACEMENTS , ... )
{

    va_list args;
    va_start ( args , NUMBER_OF_REPLACEMENTS );

    char c;

    char toCRY [NUMBER_OF_REPLACEMENTS];

    int  pos = 0;

    for ( pos = 0; pos < NUMBER_OF_REPLACEMENTS; pos++ ) toCRY [ pos ] = va_arg ( args , int );

    switch ( CONDITION )
    {


     case SZE:

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;


      break;

      case CRY:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      for ( int i = 0; i < strlen ( STRING ); i++ )
      {
                 for ( int j = 0; j < NUMBER_OF_REPLACEMENTS; j++ )
                 if ( STRING [ i ] == toCRY [j] ) { STRING [i] = TOKEN; }
      }
      return *STRING;

      case PWD:

           pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf ("%c", TOKEN);
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("%c", TOKEN);
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("%c", TOKEN);
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("%c", TOKEN);
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("%c", TOKEN);
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf ("%c", TOKEN);
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf ("%c", TOKEN);
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("%c", TOKEN);
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("%c", TOKEN);
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("%c", TOKEN);
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("%c", TOKEN);
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("%c", TOKEN);
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf ("%c", TOKEN);
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", TOKEN);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", TOKEN);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("%c", TOKEN);
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf ("%c", TOKEN);
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("%c", TOKEN);
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("%c", TOKEN);
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("%c", TOKEN);
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("%c", TOKEN);
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("%c", TOKEN);
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("%c", TOKEN);
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("%c", TOKEN); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("%c", TOKEN); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("%c", TOKEN); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("%c", TOKEN); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;

      case ONS:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      break;






      case PWS:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf ("%c", TOKEN);
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("%c", TOKEN);
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("%c", TOKEN);
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("%c", TOKEN);
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("%c", TOKEN);
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf ("%c", TOKEN);
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf ("%c", TOKEN);
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("%c", TOKEN);
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("%c", TOKEN);
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("%c", TOKEN);
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("%c", TOKEN);
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("%c", TOKEN);
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf ("%c", TOKEN);
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", TOKEN);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", TOKEN);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("%c", TOKEN);
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf ("%c", TOKEN);
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("%c", TOKEN);
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("%c", TOKEN);
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("%c", TOKEN);
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("%c", TOKEN);
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("%c", TOKEN);
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("%c", TOKEN);
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("%c", TOKEN); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("%c", TOKEN); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("%c", TOKEN); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("%c", TOKEN); }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;




      case ONN:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      break;




      case PWN:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;

    }


    va_end ( args );

    return *STRING;
}



// allen Functions

int
allen_GETDIGITS ( int VARIABLE )
{
     int counting = 0;

     while ( VARIABLE not_eq 0 )
     {
        VARIABLE /= 10;
        counting++;
     }

     return counting;
}





void
allen_GOTOXY ( int X , int Y )
{
     COORD coord;
     coord.X = X;
     coord.Y = Y;
     SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}





void
allen_TESTCODEPAGE ( int CODE_PAGE )
{
         SetConsoleOutputCP ( CODE_PAGE );

         for ( int kaj = 0; kaj < 300; kaj++ )
            printf ("Caractere %d -> ( %c )\n", kaj , kaj );
}





void
allen_CLEARSTRING ( char *STRING )
{
    memset ( STRING , 0, strlen ( STRING ) );
}





int
allen_HIGHERVALUEOF_ARRAY ( int SIZE , int ARRAY [] )
{
                   int HIGHER = ARRAY [0];

  for ( int i = 1; i < SIZE; i++ )
     if ( ARRAY [i] > HIGHER ) HIGHER = ARRAY [i];

  return HIGHER;
}





int
allen_HIGHERVALUEOFA_B_ARRAY ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] )
{
                   int HIGHER = B_ARRAY [0] [0];
                   int l = 0, c = 0;

  for ( l = 1; l < LINES; l++ ) for ( c = 1; c < COLUNS; c++ )
     if ( B_ARRAY [l] [c] > HIGHER ) HIGHER = B_ARRAY [l] [c];

  return HIGHER;
}





int
allen_LOWERVALUEOF_ARRAY ( int SIZE , int ARRAY [] )
{
                   int LOWER = ARRAY [0];
                   int i = 0;

  for ( i = 1; i < SIZE; i++ )
     if ( ARRAY [i] < LOWER ) LOWER = ARRAY [i];

  return LOWER;
}





int
allen_LOWERVALUEOFA_B_ARRAY ( int LINES , int COLUNS , int B_ARRAY [LINES] [COLUNS] )
{
                   int LOWER = B_ARRAY [0] [0];
                   int l = 0, c = 0;

  for ( l = 1; l < LINES; l++ ) for ( c = 1; c < COLUNS; c++ )
     if ( B_ARRAY [l] [c] < LOWER ) LOWER = B_ARRAY [l] [c];

  return LOWER;
}





int
allen_SUBSINTARRAY ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int TOKEN )
{

    int kaj = 0, jak = 0 , pos = 0, COPYA [SIZE], temp = 0;

     switch ( CONDITION )
     {
     case HT:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] > COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case LT:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] < COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case EQ:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] == COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case DF:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] not_eq COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case HE:
          for ( kaj = 0; kaj < SIZE; kaj++ )
            if ( ARRAY [kaj] >= COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                 return pos;
     break;

     case LE:
          for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] <= COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case PAR:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % 2 == 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case IMPAR:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % 2 not_eq 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case MULTIPLO:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % COMPARATOR == 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case NOTMULTIPLO:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( ARRAY [kaj] % COMPARATOR not_eq 0 ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case QUADRADO_X_EQ_Y:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( pow ( ARRAY [kaj] , 2 ) == COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case QUADRADO_X_DF_Y:
         for ( kaj = 0; kaj < SIZE; kaj++ )
           if ( pow ( ARRAY [kaj] , 2 ) not_eq COMPARATOR ) { ARRAY [kaj] = TOKEN; pos++; }
                return pos;
     break;

     case INVERSO:

         for ( kaj = 0; kaj < SIZE; kaj++ )
               COPYA [kaj] = ARRAY [kaj];

         for ( kaj = SIZE - 1; kaj > -1; kaj-- )
         {
               ARRAY [pos] = COPYA [kaj];
               pos++;
         }

     return pos;
     break;

     case CRESCENTE:
                   for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] > ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }
     return pos;
     break;


     case DECRESCENTE:
                    for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] < ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }

     break;

     }

     return pos;
}


int
allen_COPYINTARRAY ( int SIZE , int ARRAY [] , int CONDITION , int COMPARATOR , int NEW_ARRAY [] )
{
    int jak = 0, kaj = 0, pos = 0, temp = 0;

    switch ( CONDITION )
     {
     case HT:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] > COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }

     return pos;
     break;

     case LT:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] < COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case EQ:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] == COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case DF:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] not_eq COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case HE:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] >= COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case LE:
            for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] <= COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case PAR:
             for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] % 2 == 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case IMPAR:
               for ( jak = 0; jak < SIZE; jak++ )
                  if ( ARRAY [jak] % 2 not_eq 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case MULTIPLO:
                  for ( jak = 0; jak < SIZE; jak++ )
                     if ( ARRAY [jak] % COMPARATOR == 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case  NOTMULTIPLO:
                      for ( jak = 0; jak < SIZE; jak++ )
                         if ( ARRAY [jak] % COMPARATOR not_eq 0 ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case QUADRADO_X_EQ_Y:
                         for ( jak = 0; jak < SIZE; jak++ )
                         if ( pow ( ARRAY [jak] , 2 ) == COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case QUADRADO_X_DF_Y:
                        for ( jak = 0; jak < SIZE; jak++ )
                        if ( pow ( ARRAY [jak] , 2 ) not_eq COMPARATOR ) { NEW_ARRAY [pos] = ARRAY [jak]; pos++; }
     return pos;
     break;

     case INVERSO:
                        for ( jak = 0; jak < SIZE; jak++ )
                              NEW_ARRAY [jak] = ARRAY [jak];

                        for ( jak = SIZE - 1; jak > -1; jak-- )
                        {
                               NEW_ARRAY [pos] = ARRAY [jak];
                               pos++;
                        }
     return pos;
     break;

     case CRESCENTE:
                       for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                       {
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] > ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }
                       }
                       for ( kaj = 0; kaj < SIZE; kaj++ )
     NEW_ARRAY [kaj] = ARRAY [kaj];
     return pos;
     break;

     case DECRESCENTE:

                     for ( kaj = 0; kaj < SIZE - 1; kaj++ )
                     {
                       for ( jak = kaj + 1; jak < SIZE; jak++ )
                             if ( ARRAY [kaj] < ARRAY [jak] )
                             {
                                  temp = ARRAY [kaj];
                                  ARRAY [kaj] = ARRAY [jak];
                                  ARRAY [jak] = temp;
                                  pos++;
                             }
                     }
                       for ( kaj = 0; kaj < SIZE; kaj++ )
     NEW_ARRAY [kaj] = ARRAY [kaj];

     break;

     }
     return pos;
}


void
allen_CLEARINTARRAY  ( int SIZE , int ARRAY [] )
{
      int jaks;

      for ( jaks = 0; jaks < SIZE; jaks++ ) ARRAY [jaks] = 0;
}





int
allen_SUBSINTB_ARRAY ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int TOKEN , int B_ARRAY [LINES] [COLUNS] )
{
    int pos = 0 , kaj = 0, jak = 0, low_1 = 0, low_2 = 0, COPYA [LINES] [COLUNS], SIZE = LINES * COLUNS , VET [SIZE];

    switch ( CONDITION )
     {
     case HT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] > COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }

     return pos;
     break;

     case LT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] < COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case EQ:
            for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                  if ( B_ARRAY [kaj] [jak] == COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case DF:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] not_eq COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case HE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] >= COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case LE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] <= COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case PAR:
              for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 == 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case IMPAR:
                for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 not_eq 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case MULTIPLO:
                   for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         if ( B_ARRAY [kaj] [jak] % COMPARATOR == 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case NOTMULTIPLO:
                      for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                            if ( B_ARRAY [kaj] [jak] % COMPARATOR not_eq 0 ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case QUADRADO_X_EQ_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                                if ( pow ( B_ARRAY [kaj] [jak] , 2 ) == COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case QUADRADO_X_DF_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                                if ( pow ( B_ARRAY [kaj] [jak] , 2 ) not_eq COMPARATOR ) { B_ARRAY [kaj] [jak] = TOKEN; pos++; }
     return pos;
     break;

     case INVERSO:
                         for ( kaj = LINES - 1; kaj >= 0; kaj-- , low_1++ ) for ( jak = COLUNS - 1; jak >= 0; jak-- , low_2++ )
                         { COPYA [ low_1 ] [ low_2 ] = B_ARRAY [ kaj ] [ jak ]; pos++; }


                         low_1 = 0; low_2 = 0;

                         for ( kaj = 0; kaj < LINES;  low_1++ , kaj++ ) for ( jak = 0; jak < COLUNS; low_2++ , jak++ )
                         B_ARRAY [ kaj ] [ jak ] = COPYA [ low_1 ] [ low_2 ];
     return pos;
     break;

     case CRESCENTE:
                         low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] > VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;


     case DECRESCENTE:
                                                  low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              // printf ("%d " , VET [low_1] );
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] < VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;

     }

    return pos;
}





int
allen_INTCOPYB_ARRAY ( int LINES , int COLUNS , int CONDITION , int COMPARATOR , int B_ARRAY [LINES] [COLUNS] , int NEW_B_ARRAY [LINES] [COLUNS] )
{
    int pos = 0 , kaj = 0, jak = 0, low_1 = 0, low_2 = 0, COPYA [LINES] [COLUNS], SIZE = LINES * COLUNS , VET [SIZE];

    switch ( CONDITION )
     {
     case HT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] > COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;


     case LT:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] < COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case EQ:
            for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] == COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case DF:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] not_eq COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case HE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] >= COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case LE:
             for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] <= COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case PAR:
              for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 == 0 ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case IMPAR:
                for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                   if ( B_ARRAY [kaj] [jak] % 2 not_eq 0 ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case MULTIPLO:
                   for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         if ( B_ARRAY [kaj] [jak] % COMPARATOR == 0 ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case NOTMULTIPLO:
                      for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         if ( B_ARRAY [kaj] [jak] % COMPARATOR not_eq 0 ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case QUADRADO_X_EQ_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                             if ( pow ( B_ARRAY [kaj] [jak] , 2 ) == COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case QUADRADO_X_DF_Y:
                          for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                             if ( pow ( B_ARRAY [kaj] [jak] , 2 ) not_eq COMPARATOR ) { NEW_B_ARRAY [kaj] [jak] = B_ARRAY [kaj] [jak];  pos++; }
     return pos;
     break;



     case INVERSO:
                         for ( kaj = LINES - 1; kaj >= 0; kaj-- , low_1++ ) for ( jak = COLUNS - 1; jak >= 0; jak-- , low_2++ )
                         { COPYA [ low_1 ] [ low_2 ] = B_ARRAY [ kaj ] [ jak ]; pos++; }


                         low_1 = 0; low_2 = 0;

                         for ( kaj = 0; kaj < LINES;  low_1++ , kaj++ ) for ( jak = 0; jak < COLUNS; low_2++ , jak++ )
                         NEW_B_ARRAY [ kaj ] [ jak ] = COPYA [ low_1 ] [ low_2 ];
     return pos;
     break;



     case CRESCENTE:
                         low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] > VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            NEW_B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;


     case DECRESCENTE:
                                                  low_1 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                              VET [ low_1 ] = B_ARRAY [ kaj ] [ jak ];
                              // printf ("%d " , VET [low_1] );
                              low_1++;
                         }

                         for ( kaj = 0; kaj < SIZE - 1; kaj++ ) for ( jak = kaj + 1; jak < SIZE; jak++ )

                            if ( VET [kaj] < VET [jak] )
                            {
                                  low_2 = VET [kaj];
                                  VET [kaj] = VET [jak];
                                  VET [jak] = low_2;
                                  pos++;
                            }

                         low_2 = 0;

                         for ( kaj = 0; kaj < LINES; kaj++ ) for ( jak = 0; jak < COLUNS; jak++ )
                         {
                            NEW_B_ARRAY [ kaj ] [ jak ] = VET [low_2];
                            low_2++;
                         }
     return pos;
     break;

     }

    return pos;
}





void
allen_CLEARINTB_ARRAY  ( int LINES , int COLUNS , int B_ARRAY [ LINES ] [ COLUNS ] )
{
      int allen, llen;

      for ( allen = 0; allen < LINES; allen++ ) for ( llen = 0; llen < COLUNS; llen++ ) B_ARRAY [allen] [llen] = 0;
}





void
allen_ADDTOSTRING ( char * STRING , char * ADD )
{
    sprintf ( STRING , "%s%s" , STRING , ADD );
}





void
allen_REMAKESTRING ( char * STRING , char * REMAKE )
{
     sprintf ( STRING , "%s" , REMAKE );
}





// SIMPLE BOX



int
SB_CREATEBOX ( LPCTSTR BOX_TEXT , LPCTSTR BOX_CAPTION, UINT BOX_TYPE )
{
    return MessageBox ( NULL , BOX_TEXT, BOX_CAPTION, BOX_TYPE );
}





void
SB_PLAYSOUND ( UINT SOUND )
{
   MessageBeep ( SOUND );
}






// MATTE FUNCTIONS


double
MATTE_cosseno ( double COS , bool PRINT , int COMMAS )
{
                COS = acos ( COS );

                if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, COS);

                return COS;
}





double
MATTE_seno ( double SIN , bool PRINT , int COMMAS )
{
             SIN = asin ( SIN );

             if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, SIN);

             return SIN;
}





double
MATTE_tangente ( double TAN , bool PRINT , int COMMAS )
{
                 TAN = atan ( TAN );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, TAN);

                 return TAN;
}





double
MATTE_arcotangente ( double X , double Y , bool PRINT , int COMMAS )
{


                     double ARCO = atan2 ( Y , X );

                     if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ARCO);

                     return ARCO;
}





double
MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS )
{
                            X = ceil ( X );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                            return X;
}





double
MATTE_cosemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                 ANGULO = cos ( ANGULO );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                 return ANGULO;
}





double
MATTE_coshiperbolico ( double ANGULO , bool PRINT , int COMMAS )
{
                       ANGULO = cosh ( ANGULO );

                       if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                       return ANGULO;
}





double
MATTE_exp ( double X , bool PRINT , int COMMAS )
{
            X = exp ( X );

            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

            return X;
}





double
MATTE_modulo ( double X , bool PRINT , int COMMAS )
{
               X = fabs ( X );

               if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

               return X;
}





double
MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS )
{
                            X = floor ( X );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                            return X;
}





double
MATTE_mantissa ( double X , bool PRINT , int COMMAS )
{
                 int EXPOENTE;

                 X = frexp ( X , &EXPOENTE );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                 return X;
}





double
MATTE_ldexp ( double X , int EXPOENTE , bool PRINT , int COMMAS )
{
                 X = ldexp ( X , EXPOENTE );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                 return X;
}





double
MATTE_log ( double X , bool PRINT , int COMMAS )
{
            X = log ( X );

            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

            return X;
}





double
MATTE_log10 ( double X , bool PRINT , int COMMAS )
{
              X = log10 ( X );

              if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

              return X;
}





double
MATTE_soapartedecimal ( double X , bool PRINT , int COMMAS )
{
        double P;

                        X = modf ( X , &P );

                        if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                        return X;
}





double
MATTE_potencia ( double BASE , double EXPO , bool PRINT , int COMMAS )
{
                 double RESULT;

                 RESULT = pow ( BASE , EXPO );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, RESULT);

                 return RESULT;
}





double
MATTE_senoemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                  ANGULO = sin ( ANGULO );

                  if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                  return ANGULO;
}






double
MATTE_senohiperbolico ( double ANGULO , bool PRINT , int COMMAS )
{
                        ANGULO = sinh ( ANGULO );

                        if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                        return ANGULO;
}





double
MATTE_raizquadrada ( double X , bool PRINT , int COMMAS )
{
                     X = sqrt ( X );

                     if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                     return X;
}





double
MATTE_tangenteemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                      ANGULO = tan ( ANGULO );

                      if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                      return ANGULO;
}





double
MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS )
{
                            ANGULO = tanh ( ANGULO );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                            return ANGULO;
}




// LOCH FUNCTIONS



void
LOCH_LOCAL ( void )
{
    setlocale ( LC_ALL , "pt_BR.UTF-8" );
}





void
LOCH_SETLOCAL ( char TEXT [] )
{
    setlocale ( LC_ALL , TEXT );
}




// FLEE FUNCTIONS



/* GENERAL FILE FUNCTIONS */



void
FLEE_CREATEAFILE ( const char* FILE_NAME )
{

                  FILE* file = fopen ( FILE_NAME , "w" );

                  if ( file == NULL ) printf ("Error creating file!");

                  fclose ( file );
}





void
FLEE_RENAMEAFILE ( const char* FILE_NAME , const char * NEW_FILE_NAME )
{
                   int RESULT = rename ( FILE_NAME , NEW_FILE_NAME );

                   if ( RESULT not_eq 0 ) printf ("Erro on renaming the file");
}





void
FLEE_MOVEAFILE ( const char * FILE_NAME , const char * NEW_DIRECTORY )
{
                 char NEW_DIR [50];
                 sprintf ( NEW_DIR , "./%s/%s" , NEW_DIRECTORY , FILE_NAME  );

                 int RESULT = rename ( FILE_NAME , NEW_DIR );

                 if ( RESULT not_eq 0 ) printf ("Error moving the file!");
}





void
FLEE_COPYAFILE ( const char * FOLDER , const char * FILE_NAME, const char* NEW_FOLDER , const char* NEW_FILENAME )
{

                char CHECKNAME [1024];
                sprintf ( CHECKNAME , "./%s/%s", FOLDER , FILE_NAME );

                FILE * ORIGIN = fopen ( CHECKNAME, "rb");
                if ( ORIGIN == NULL) printf ("Error with the copied file!");


                char NEW_FOLDER_PLACE [200];
                sprintf ( NEW_FOLDER_PLACE, "./%s/%s", NEW_FOLDER, NEW_FILENAME );


                FILE * ENDPOINT = fopen(NEW_FOLDER_PLACE, "wb");
                if ( ENDPOINT == NULL ) { printf ("Error with the copy, not the copied file!"); fclose(ORIGIN); }


                char buffer [1024];
                size_t bytes_lidos;

                while ( ( bytes_lidos = fread ( buffer , sizeof(char) , sizeof ( buffer ) , ORIGIN ) ) > 0 )
                fwrite ( buffer , sizeof(char) , bytes_lidos , ENDPOINT );


    fclose ( ORIGIN );
    fclose ( ENDPOINT );

}




void
FLEE_CREATEAFILEANDFOLDER ( const char* FOLDER_NAME , const char* FILE_NAME )
{
                            char FINAL [50];
                            sprintf ( FINAL , "./%s/%s" , FOLDER_NAME , FILE_NAME );

                            FILE* file = fopen ( FINAL , "w" );

                            if ( file == NULL ) printf ("Error with the creation!");

                            fclose ( file );
}





void
FLEE_CREATEAFOLDER ( const char* FOLDER_NAME )
{
                     int RESULT = mkdir ( FOLDER_NAME );

                     if ( RESULT not_eq 0 ) printf ("Error creating folder!");
}





void
FLEE_RENAMEAFOLDER ( const char *FOLDER_NAME , const char *NEW_FOLDER_NAME )
{
                    int RESULT = rename ( FOLDER_NAME , NEW_FOLDER_NAME );

                    if ( RESULT not_eq 0 ) printf ("Error renaming the folder!");
}





void
FLEE_DELETEAFILE ( const char *FILE_NAME )
{
                  int RESULT = remove ( FILE_NAME );

                  if ( RESULT not_eq 0 ) printf ("Error removing the file!");
}






void
FLEE_DELETEAFOLDER ( const char * FOLDER_NAME )
{
    DIR *FOLDER = opendir ( FOLDER_NAME );
    struct dirent *arquivo;
    char caminho[1000];
    struct stat info;

    while ( ( arquivo = readdir ( FOLDER ) ) != NULL )
    {
              if ( strcmp ( arquivo -> d_name , "." ) not_eq 0 and strcmp ( arquivo -> d_name , ".." ) not_eq 0 )
              {
                   sprintf ( caminho , "./%s/%s" , FOLDER_NAME , arquivo -> d_name );

              if ( stat ( caminho , &info ) not_eq 0 )
              {
                printf("Error with the following file %s.", caminho );
                continue;
              }
              if ( S_ISDIR ( info.st_mode ) ) FLEE_DELETEAFOLDER ( caminho );
              else                                        remove ( caminho );

              }
    }

    closedir ( FOLDER );
    int RESULT = rmdir ( FOLDER_NAME );
    if ( RESULT not_eq 0 ) printf ("Error deleting the folder!");

}






void
FLEE_MOVEAFOLDER ( const char *FOLDER_NAME , const char *NEW_PATH )
{
                   DIR* dir = opendir ( FOLDER_NAME );

                   if ( dir == NULL ) printf ("Failed to open directory!");

                   int ret = mkdir ( NEW_PATH );

                   struct dirent * entry;

                   char source_path [ 1024 ];
                   char dest_path   [ 1024 ];

                   while ( ( entry = readdir ( dir ) ) not_eq NULL )
                   {
                             if ( strcmp ( entry -> d_name , "." ) == 0 or strcmp ( entry -> d_name , ".." ) == 0) continue;

                             sprintf ( source_path , "%s/%s" , FOLDER_NAME , entry -> d_name );
                             sprintf ( dest_path   , "%s/%s" , NEW_PATH   , entry -> d_name );

                       struct stat stat_buf;

                                   if ( stat ( source_path , &stat_buf ) not_eq 0 ) { printf("Failed to get file status!"); continue; }
                                   if ( S_ISDIR ( stat_buf.st_mode ) )
                                   {
                                        FLEE_MOVEAFOLDER ( source_path , dest_path );
                                        ret = rmdir ( source_path );
                                        if ( ret not_eq 0 ) printf ("Failed to delete subfolder!");
                                   }
                                   else
                                   {
                                       FILE* source_file = fopen ( source_path , "rb" );
                                       if ( source_file == NULL ) { printf("Failed to open source file!"); continue; }

                                       FILE* dest_file = fopen ( dest_path , "wb" );
                                       if ( dest_file == NULL ) { printf("Failed to open destination file!"); fclose ( source_file );  continue; }

                                       char buffer [1024];
                                       size_t bytes_read;

                       while ( ( bytes_read = fread ( buffer , sizeof ( char ) , sizeof ( buffer ) , source_file ) ) > 0)
                       fwrite ( buffer , sizeof ( char ) , bytes_read , dest_file );

                       fclose ( source_file );
                       fclose ( dest_file );

                                ret = remove ( source_path );
                                if (ret not_eq 0) printf("Failed to delete file!");
                                   }
                   }
                   closedir ( dir );
                   rmdir (FOLDER_NAME);
}





void
FLEE_COPYAFOLDER ( const char *FOLDER_NAME , const char *NEW_PATH )
{
                   DIR* dir = opendir ( FOLDER_NAME );

                   if ( dir == NULL ) printf ("Failed to open directory!");

                   mkdir ( FOLDER_NAME );

                   struct dirent * entry;

                   char source_path [ 1024 ];
                   char dest_path   [ 1024 ];

                   while ( ( entry = readdir ( dir ) ) not_eq NULL )
                   {
                             if ( strcmp ( entry -> d_name , "." ) == 0 or strcmp ( entry -> d_name , ".." ) == 0) continue;

                             sprintf ( source_path , "%s/%s" , FOLDER_NAME , entry -> d_name );
                             sprintf ( dest_path   , "%s/%s" , FOLDER_NAME   , entry -> d_name );

                       struct stat stat_buf;

                                   if ( stat ( source_path , &stat_buf ) not_eq 0 ) { printf("Failed to get file status!"); continue; }
                                   if ( S_ISDIR ( stat_buf.st_mode ) )
                                   {
                                        FLEE_COPYAFOLDER ( source_path , dest_path );
                                   }
                                   else
                                   {
                                       FILE* source_file = fopen ( source_path , "rb" );
                                       if ( source_file == NULL ) { printf("Failed to open source file!"); continue; }

                                       FILE* dest_file = fopen ( dest_path , "wb" );
                                       if ( dest_file == NULL ) { printf("Failed to open destination file!"); fclose ( source_file );  continue; }

                                       char buffer [1024];
                                       size_t bytes_read;

                       while ( ( bytes_read = fread ( buffer , sizeof ( char ) , sizeof ( buffer ) , source_file ) ) > 0)
                       fwrite ( buffer , sizeof ( char ) , bytes_read , dest_file );

                       fclose ( source_file );
                       fclose ( dest_file );

                                   }
                   }
                   closedir ( dir );
}





void
FLEE_SYSTEMFOLDER ( const char * SYSTEM_FOLDER_NAME , char * FOLDER , char * SAVE_PATH )
{
     sprintf ( SAVE_PATH , "%s\\%s\\" , getenv ( SYSTEM_FOLDER_NAME ) , FOLDER );
}



/* BASIC / SIMPLE VARIABLE FILE FUNCTIONS */



void
FLEE_saveINT ( int VALUE , const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME , "w");
    if (fp == NULL)  printf("Erro ao abrir o arquivo.\n");

    fprintf ( fp , "%d" , VALUE );
    fclose ( fp );
}





int
FLEE_loadINT ( const char * FILE_NAME )
{
    int RETURN_VALUE;

    FILE* fp = fopen ( FILE_NAME , "r" );

    if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    fscanf ( fp, "%d", &RETURN_VALUE);
    fclose ( fp );

    return RETURN_VALUE;
}





void
FLEE_saveCHAR ( char CHARACTER , const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME, "w");

    if ( fp == NULL ) printf ("Erro ao abrir o arquivo.\n");

    fputc ( CHARACTER , fp );
    fclose ( fp );
}





char
FLEE_loadCHAR ( const char * FILE_NAME )
{
    char CHARACTER;

    FILE* fp = fopen ( FILE_NAME, "r" );

    if ( fp == NULL ) printf ("Erro ao abrir o arquivo.\n");

    CHARACTER = fgetc(fp);
    fclose(fp);

    return CHARACTER;
}





void
FLEE_saveFLOAT ( float VALUE , int COMMAS , const char * FILE_NAME )
{
    FILE * fp = fopen ( FILE_NAME , "w" );

    if ( fp == NULL ) printf ("Erro ao abrir o arquivo.\n");

    char format [20];

    sprintf ( format , "%%.%df" , COMMAS );
    fprintf ( fp , format , VALUE );
    fclose  ( fp );
}





float
FLEE_loadFLOAT ( const char * FILE_NAME )
{
    float RETURN_VALUE;
    char str[100];

    FILE* fp = fopen ( FILE_NAME , "r" );

    if (fp == NULL) printf("Erro ao abrir o arquivo.\n");

    fgets  ( str , 100 , fp );
    sscanf ( str , "%f" , &RETURN_VALUE );
    fclose ( fp );

    return RETURN_VALUE;
}





void
FLEE_saveDOUBLE ( double VALUE , int COMMAS , const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME, "w" );

    if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    char format[20];

    sprintf ( format , "%%.%dlf" , COMMAS );
    fprintf ( fp , format , VALUE );
    fclose  ( fp );
}





double
FLEE_loadDOUBLE ( const char* FILE_NAME )
{
    double RETURN_VALUE;
    char str [ 100 ];

    FILE* fp = fopen ( FILE_NAME , "r" );

    if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    fgets  ( str , 100 , fp );
    sscanf ( str , "%lf" , &RETURN_VALUE );
    fclose ( fp );

    return RETURN_VALUE;
}





void
FLEE_saveSTRING ( const char * STRING , const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME , "w");

    if (fp == NULL) printf ("Erro ao abrir o arquivo.\n");

    fprintf ( fp , "%s" , STRING );
    fclose  ( fp );
}





void
FLEE_loadSTRING ( char * STRING , int SIZE_OF_READ , const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME , "r" );

    if ( fp == NULL ) printf ("Erro ao abrir o arquivo.\n");

    fgets ( STRING , SIZE_OF_READ , fp );
    fclose ( fp );
}



/* SCAN FILE FUNCTIONS */



int
FLEE_COUNTLINES ( const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME , "r" );

    if (fp == NULL) printf("Erro ao abrir o arquivo.\n");

    int NUMBER_OF_LINES = 0;

    char buffer [ 1024 * 100 ];

    while ( fgets ( buffer , sizeof ( buffer ) , fp ) ) NUMBER_OF_LINES++;

    fclose ( fp );

    return NUMBER_OF_LINES;
}





int
FLEE_COUNTWORDS ( const char * FILE_NAME )
{
    FILE* fp = fopen ( FILE_NAME , "r" );

    if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    int NUMBER_OF_WORDS = 0;

    char word [100];

    while ( fscanf ( fp , "%s" , word ) != EOF ) NUMBER_OF_WORDS++;

    fclose ( fp );

    return NUMBER_OF_WORDS;
}





int
FLEE_COUNTNUMBERS ( const char * FILE_NAME )
{

    FILE* fp;

    int count_int = 0;
    int count_float = 0;
    int ch;

    fp = fopen ( FILE_NAME, "r" );
    if ( fp == NULL ) perror ("Error opening file");


    while ( ( ch = fgetc ( fp ) ) not_eq EOF )
    {
        if ( isdigit ( ch ) or ch == '.' or ch == ',' )
        {
             while ( isdigit ( ch ) or ch == '.' or ch == ',' ) ch = fgetc ( fp );

             if ( ch == '.' or ch == ',' ) count_float++;

             else count_int++;
        }
    }

    fclose ( fp );

    return count_int + count_float;
}





int FLEE_COUNTint ( const char * FILE_NAME , int VALUE )
{
    FILE *fp = fopen ( FILE_NAME , "r" );
    int RETURN_VALUE = 0;

    if ( fp == NULL ) printf("Erro ao abrir o arquivo.\n");

    char c;
    int num = 0;
    int is_num = 0;

    while ( ( c = fgetc ( fp ) ) not_eq EOF )
    {
           if ( c == ' ' or c == '\t' or c == '\n' )
           {
                if ( is_num and num == VALUE ) RETURN_VALUE++;

                num = 0;
                is_num = 0;
           }

           else if ( c >= '0' and c <= '9' ) { num = num * 10 + (c - '0'); is_num = 1; }

           else if ( c == '.' )
           {
                     is_num = 0;
                     num = 0;

           while ( ( c = fgetc ( fp ) ) not_eq EOF ) if ( c == ' ' or c == '\t' or c == '\n' ) break;

           }
    }

    if ( is_num and num == VALUE ) RETURN_VALUE++;

    fclose ( fp );

    return RETURN_VALUE;
}





int
FLEE_COUNTfloat ( const char * FILE_NAME , float VALUE )
{
                  FILE* fp;
             char buffer [ 1024 ];
              int len;
            float num, diff;
              int RETURN_VALUE = 0;

    if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr, "Error opening the file!\n");

    while ( fgets ( buffer , 1024 , fp ) )
    {
        len = strlen ( buffer );

        if ( len > 0 and buffer [ len - 1 ] == '\n' ) buffer [ len - 1 ] = '\0';

        char * comma = strchr ( buffer , ',' );
        while ( comma not_eq NULL ) { *comma = '.'; comma = strchr(comma, ','); }
        char* token = strtok ( buffer , " " );

        while ( token not_eq NULL )
        {
                num = atof ( token );
                diff = num - VALUE;

            if ( diff > -0.0001 and diff < 0.0001 ) RETURN_VALUE++;
            token = strtok ( NULL , " " );
        }
    }

    fclose ( fp );
    return RETURN_VALUE;
}





int
FLEE_COUNTdouble ( const char * FILE_NAME , double VALUE )
{
                  FILE* fp;
             char buffer [ 1024 ];
              int len;
            double num, diff;
              int RETURN_VALUE = 0;

    if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr, "Error opening the file!\n");

    while ( fgets ( buffer , 1024 , fp ) )
    {
        len = strlen ( buffer );

        if ( len > 0 and buffer [ len - 1 ] == '\n' ) buffer [ len - 1 ] = '\0';

        char * comma = strchr ( buffer , ',' );
        while ( comma not_eq NULL ) { *comma = '.'; comma = strchr(comma, ','); }
        char* token = strtok ( buffer , " " );

        while ( token not_eq NULL )
        {
                num = atof ( token );
                diff = num - VALUE;

            if ( diff > -0.0001 and diff < 0.0001 ) RETURN_VALUE++;
            token = strtok ( NULL , " " );
        }
    }

    fclose ( fp );
    return RETURN_VALUE;
}





int
FLEE_COUNTchar ( const char * FILE_NAME , char CHAR )
{
    FILE* fp;
    char buffer[1024];
    int len, i;
    int RETURN_VALUE = 0;

    if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr , "Erro ao abrir o arquivo.\n" );

    while ( fgets ( buffer , 1024 , fp ) )
    {
            len = strlen ( buffer );
                for ( i = 0; i < len; i++ ) if ( buffer [ i ] == CHAR ) RETURN_VALUE++;



    }

    fclose ( fp );

    return RETURN_VALUE;
}





int
FLEE_COUNTstring ( const char * FILE_NAME , const char * STRING )
{
    FILE* fp;

    char buffer [ 1024 ];
    int RETURN_VALUE = 0;

    if ( ( fp = fopen ( FILE_NAME , "r" ) ) == NULL ) fprintf ( stderr, "Erro ao abrir o arquivo.\n");

    int string_len = strlen ( STRING );

    while ( fgets ( buffer , 1024 , fp ) )
    {
            int buffer_len = strlen ( buffer );

            if ( buffer [ buffer_len - 1 ] == '\n' ) { buffer [ buffer_len - 1 ] = '\0'; buffer_len--; }

            char* ptr = buffer;

            while ( ( ptr = strstr ( ptr , STRING ) ) not_eq NULL )
            {
                      if ( ( ptr == buffer or isspace ( * ( ptr - 1 ) ) ) and ( ptr + string_len == buffer + buffer_len or isspace ( * ( ptr + string_len ) ) ) )
                      RETURN_VALUE++;
            ptr++;
            }
    }

    fclose ( fp );

    return RETURN_VALUE;
}



/* SUBS IN THE FILE FUNCTIONS */



int
FLEE_GLOBALSUBSint ( const char * FILE_NAME, int VALUE , const char * TOKEN )
{
    FILE * file;
    char STRING_VALUE[50];

    sprintf ( STRING_VALUE , "%d" , VALUE );

    char temp_filename [] = "allen.txt";
    int old_word_len = strlen ( STRING_VALUE );

    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME , "r" );
    if ( file == NULL ) printf ("Failed to open the file!\n");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { printf("Error with the file reading!\n"); fclose ( file ); }

         char line [ 99999 ];

    while ( fgets ( line , 99999 , file ) )
    {
         char * pos = line;

         while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
         {
              char temp [ 100 ] = "";
              int len = pos - line;

                   strncat ( temp , line , len );
                   strcat  ( temp , TOKEN );
                   pos += old_word_len;

                   strcpy  ( line , pos );
                   pos = line;

                   strncat ( temp , line , strlen ( line ) );
                   strcpy  ( line , temp );
                   RETURN_VALUE++;
         }

        fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





int
FLEE_GLOBALSUBSfloat ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN )
{
     FILE * file;
     FILE * temp_file;

     char temp_filename [ ] = "allen.txt";
     char line [ 99999 ];
     char string_value [ 50 ];
     char * pos;
     int old_word_len , new_word_len;
     int return_value = 0;

         snprintf ( string_value , 50 , "%.*f" , COMMAS , VALUE );

     for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

     old_word_len = strlen ( string_value );
     new_word_len = strlen ( TOKEN );

     file = fopen ( FILE_NAME , "r" );
           if ( file == NULL ) printf ("Failed to open the file!\n");

     temp_file = fopen ( temp_filename , "w" );
              if ( temp_file == NULL ) { printf ("Failed to open temporary file!\n"); fclose ( file ); }

              while ( fgets ( line , 99999 , file ) )
              {
                   char * comma = strchr ( line , ',' );

                   while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ','); }

                   pos = line;

              while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
              {
                   fwrite ( line , pos - line , 1 , temp_file );
                   fwrite ( TOKEN , new_word_len , 1 , temp_file );
                   pos += old_word_len;

                         if ( * pos == '.' )
                         {
                                pos++;
                                int i;

                           for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );

                                old_word_len += i - COMMAS;
                         }

               strcpy ( line , pos );
               pos = line;
               return_value++;
              }

     fwrite ( line , strlen ( line ) , 1 , temp_file );

    }

     fclose ( file ); fclose ( temp_file );

     if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Failed on the end of the function execution!");
     if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Failed on the end of the function execution!");

     return return_value;
}





int
FLEE_GLOBALSUBSdouble ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN )
{
     FILE * file;
     FILE * temp_file;

     char temp_filename [ ] = "allen.txt";
     char line [ 99999 ];
     char string_value [ 50 ];
     char * pos;
     int old_word_len , new_word_len;
     int return_value = 0;

         snprintf ( string_value , 50 , "%.*lf" , COMMAS , VALUE );

     for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

     old_word_len = strlen ( string_value );
     new_word_len = strlen ( TOKEN );

     file = fopen ( FILE_NAME , "r" );
           if ( file == NULL ) printf ("Failed to open the file!\n");

     temp_file = fopen ( temp_filename , "w" );
              if ( temp_file == NULL ) { printf ("Failed to open temporary file!\n"); fclose ( file ); }

              while ( fgets ( line , 99999 , file ) )
              {
                   char * comma = strchr ( line , ',' );

                   while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ','); }

                   pos = line;

              while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
              {
                   fwrite ( line , pos - line , 1 , temp_file );
                   fwrite ( TOKEN , new_word_len , 1 , temp_file );
                   pos += old_word_len;

                         if ( * pos == '.' )
                         {
                                pos++;
                                int i;

                           for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );

                                old_word_len += i - COMMAS;
                         }

               strcpy ( line , pos );
               pos = line;
               return_value++;
              }

     fwrite ( line , strlen ( line ) , 1 , temp_file );

    }

     fclose ( file ); fclose ( temp_file );

     if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Failed on the end of the function execution!");
     if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Failed on the end of the function execution!");

     return return_value;
}





int
FLEE_GLOBALSUBSchar ( const char * FILE_NAME , char VALUE , const char * TOKEN )
{
     FILE * file;

    char STRING_VALUE [ 2 ] = "";
    STRING_VALUE      [ 0 ] = VALUE;

    char temp_filename [ ] = "allen.txt";
    int  old_word_len      = strlen ( STRING_VALUE );
    int new_word_len       = strlen ( TOKEN );
    int RETURN_VALUE       = 0;

                            file = fopen ( FILE_NAME , "r" );
                            if ( file == NULL ) printf ("Failed to open the file!");

                            FILE * temp_file = fopen ( temp_filename , "w" );
                            if ( temp_file == NULL ) { printf ("Error with the file reading!\n"); fclose ( file ); }

    char line [ 99999 ];

         while ( fgets ( line , 99999 , file ) )
         {
              char * pos = line;

         while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
         {
              if ( * pos not_eq VALUE and pos [ old_word_len ] not_eq ' ' and pos [ old_word_len ] not_eq '\n' ) { pos += old_word_len; continue; }

                fwrite ( line  , pos - line   , 1 , temp_file );
                fwrite ( TOKEN , new_word_len , 1 , temp_file );
                pos += old_word_len;

                strcpy ( line , pos );
                pos = line;
                RETURN_VALUE++;
         }

          fwrite ( line , strlen ( line ) , 1 , temp_file );

         }

    fclose ( file );    fclose ( temp_file );  remove ( FILE_NAME );    rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





int
FLEE_GLOBALSUBSstring ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN )
{
    FILE * file;

    char temp_filename [] = "allen.txt";
    int old_word_len = strlen ( OLD_WORD );
    int new_word_len =  strlen ( TOKEN);

    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME, "r");
    if ( file == NULL) printf("Failed to open the file!");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { printf("Error with the file reading!\n"); fclose ( file ); }

    char line [ 99999 ];

    while ( fgets ( line , 99999 , file ) )
    {
         char * pos = line;

               while ( ( pos = strstr ( pos , OLD_WORD ) ) not_eq NULL )
               {
                      fwrite ( line  , pos - line   , 1 , temp_file );
                      fwrite ( TOKEN , new_word_len , 1 , temp_file );
                      pos += old_word_len;

                      strcpy ( line , pos );
                      pos = line;
                      RETURN_VALUE++;
               }

        fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file ); fclose ( temp_file ); remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





int
FLEE_LOCALSUBSint ( const char * FILE_NAME , int VALUE , const char * TOKEN )
{

    FILE * file;
    char STRING_VALUE [ 50 ];

         sprintf ( STRING_VALUE , "%d" , VALUE );

    char temp_filename [ ] = "allen.txt";
    int  old_word_len      = strlen ( STRING_VALUE );
    int  new_word_len      = strlen ( TOKEN );

    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME , "r" );
    if ( file == NULL ) printf ("Failed to open the file!\n");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { printf ("Error with the file reading!\n"); fclose ( file ); }

    char line [ 99999 ];

         while ( fgets ( line , 99999 , file ) )
         {
              char * pos = line;

         while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
         {
              if ( ( * ( pos + old_word_len ) == ' ' or * ( pos + old_word_len ) == '\n' or * ( pos + old_word_len ) == '\0' ) and ( pos == line or * ( pos - 1 ) == ' ' or * ( pos - 1 ) == '\n' or * ( pos - 1 ) == '\0' ) )
              {
                   fwrite ( line , pos - line , 1 , temp_file );
                   fwrite ( TOKEN , new_word_len , 1 , temp_file );
                   pos += old_word_len;

                   strcpy ( line , pos );
                   pos = line;
                   RETURN_VALUE++;
              }
              else pos += old_word_len;
         }

              fwrite ( line , strlen ( line ) , 1 , temp_file );
         }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME );    rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





int
FLEE_LOCALSUBSfloat ( const char * FILE_NAME , float VALUE , int COMMAS , const char * TOKEN )
{
    FILE * file;
    FILE * temp_file;

         char   temp_filename [ ] = "allen.txt";
         char   line [ 99999 ];
         char   string_value [ 50 ];
         char * pos;
         int    old_word_len , new_word_len;
         int    return_value = 0;

    snprintf ( string_value , 50 , "%.*f" , COMMAS , VALUE );

            for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

                file = fopen ( FILE_NAME , "r" );
                if ( file == NULL ) printf ("Failed to open the file!\n");

                temp_file = fopen ( temp_filename , "w" );
                if ( temp_file == NULL ) { printf ("Failed to open temporary file!\n");  fclose ( file ); }

    while ( fgets ( line , 99999 , file ) )
    {

         char * comma = strchr ( line , ',' );

    while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }
    pos = line;

    while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
    {
         if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and isspace ( * ( pos + old_word_len ) ) )
         {
           fwrite ( line  , pos - line   , 1 , temp_file );
           fwrite ( TOKEN , new_word_len , 1 , temp_file );
           pos += old_word_len;

         if ( * pos == '.' )
         {
                pos++;
            int i;

                for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                old_word_len += i - COMMAS;
         }

              strcpy ( line , pos );
              pos = line;
              return_value++;

         }

         else pos += old_word_len;

    }

         fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );

    if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Error with the end of the function!");
    if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Error with the end of the function!");

    return return_value;
}




int
FLEE_LOCALSUBSdouble ( const char * FILE_NAME , double VALUE , int COMMAS , const char * TOKEN )
{
    FILE * file;
    FILE * temp_file;

         char   temp_filename [ ] = "allen.txt";
         char   line [ 99999 ];
         char   string_value [ 50 ];
         char * pos;
         int    old_word_len , new_word_len;
         int    return_value = 0;

    snprintf ( string_value , 50 , "%.*lf" , COMMAS , VALUE );

            for ( pos = string_value; * pos not_eq '\0'; pos++ ) if ( * pos == ',') * pos = '.';

    old_word_len = strlen ( string_value );
    new_word_len = strlen ( TOKEN );

                file = fopen ( FILE_NAME , "r" );
                if ( file == NULL ) printf ("Failed to open the file!\n");

                temp_file = fopen ( temp_filename , "w" );
                if ( temp_file == NULL ) { printf ("Failed to open temporary file!\n");  fclose ( file ); }

    while ( fgets ( line , 99999 , file ) )
    {

         char * comma = strchr ( line , ',' );

    while ( comma not_eq NULL ) { * comma = '.'; comma = strchr ( comma , ',' ); }
    pos = line;

    while ( ( pos = strstr ( pos , string_value ) ) not_eq NULL )
    {
         if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and isspace ( * ( pos + old_word_len ) ) )
         {
           fwrite ( line  , pos - line   , 1 , temp_file );
           fwrite ( TOKEN , new_word_len , 1 , temp_file );
           pos += old_word_len;

         if ( * pos == '.' )
         {
                pos++;
            int i;

                for ( i = 0; i < COMMAS and * pos not_eq '\0'; i++, pos++ ) fwrite ( pos , 1 , 1 , temp_file );
                old_word_len += i - COMMAS;
         }

              strcpy ( line , pos );
              pos = line;
              return_value++;

         }

         else pos += old_word_len;

    }

         fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file );    fclose ( temp_file );

    if ( remove ( FILE_NAME ) not_eq 0 )                 printf ("Error with the end of the function!");
    if ( rename ( temp_filename , FILE_NAME ) not_eq 0 ) printf ("Error with the end of the function!");

    return return_value;
}





int
FLEE_LOCALSUBSchar ( const char * FILE_NAME , char VALUE , const char * TOKEN )
{
    FILE *file;

    char STRING_VALUE [ 2 ];
                            sprintf ( STRING_VALUE , "%c" , VALUE );

    char temp_filename [ ] = "allen.txt";
    int  old_word_len      = strlen ( STRING_VALUE );
    int  new_word_len      = strlen ( TOKEN );
    int  RETURN_VALUE = 0;

    file = fopen ( FILE_NAME , "r" );
    if ( file == NULL ) printf ("Failed to open the file!");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { printf ("Error with the file reading!\n"); fclose(file); }

    char line [ 99999 ];

    while ( fgets ( line , 99999 , file ) )
    {

         char * pos = line;

    while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
    {

         if ( pos [ old_word_len ] not_eq ' ' and pos [ old_word_len ] not_eq '\n' ) { pos += old_word_len; continue; }

       fwrite ( line  , pos - line   , 1 , temp_file );
       fwrite ( TOKEN , new_word_len , 1 , temp_file );
       pos += old_word_len;

       strcpy ( line , pos );
       pos = line;
       RETURN_VALUE++;
    }

       fwrite ( line , strlen ( line ) , 1 , temp_file );
    }

    fclose ( file ); fclose ( temp_file ); remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





int
FLEE_LOCALSUBSstring ( const char * FILE_NAME , const char * OLD_WORD , const char * TOKEN )
{
    FILE * file;
    char temp_filename [ ] = "allen.txt";

    int old_word_len = strlen ( OLD_WORD );
    int new_word_len = strlen ( TOKEN );
    int RETURN_VALUE = 0;

    file = fopen ( FILE_NAME , "r" );
    if ( file == NULL ) printf ("Failed to open the file!");

    FILE * temp_file = fopen ( temp_filename , "w" );
    if ( temp_file == NULL ) { printf ("Error with the file reading!\n"); fclose ( file ); }

    char line [ 99999 ];

        while ( fgets ( line , 99999 , file ) )
        {

             char * pos = line;

        while ( ( pos = strstr ( pos , OLD_WORD ) ) not_eq NULL )
        {

             if ( ( pos == line or isspace ( * ( pos - 1 ) ) ) and ( pos [ old_word_len ] == '\0' or isspace ( pos [ old_word_len ] ) ) )
             {
                 fwrite ( line  , pos - line   , 1 , temp_file );
                 fwrite ( TOKEN , new_word_len , 1 , temp_file );
                 pos += old_word_len;

                  strcpy ( line , pos );
                  pos = line;
                  RETURN_VALUE++;
             }
             else pos += old_word_len;
        }

        fwrite ( line , strlen ( line ) , 1 , temp_file );

        }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME );   rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





int
FLEE_GLOBALSUBSintl ( const char* FILE_NAME , int WHAT_LINE , int VALUE , const char* TOKEN )
{
     FILE* file;
     char STRING_VALUE [ 50 ];

                         sprintf ( STRING_VALUE , "%d" , VALUE );

     char temp_filename [ ] = "allen.txt";
     int  old_word_len      = strlen ( STRING_VALUE );
     int  RETURN_VALUE      = 0;
     int  current_line      = 1;

          file = fopen(FILE_NAME, "r");
              if ( file == NULL ) printf ("Failed to open the file!\n");

          FILE * temp_file = fopen ( temp_filename , "w" );
              if ( temp_file == NULL ) { printf ("Error with the file reading!\n"); fclose ( file ); }

     char line [ 99999 ];

     while ( fgets ( line , 99999 , file ) )
     {

          if ( current_line == WHAT_LINE )
          {
              char* pos = line;

     while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
     {
                char temp [ 100 ] = "";
                int  len          = pos - line;

                     strncat ( temp , line , len );
                     strcat  ( temp , TOKEN );
                     pos += old_word_len;

                     strcpy ( line , pos );
                     pos = line;

                strncat ( temp , line , strlen ( line ) );
                strcpy  ( line , temp );
                RETURN_VALUE++;
     }
     }

      fwrite ( line , strlen ( line ) , 1 , temp_file );
      current_line++;

    }

    fclose ( file );    fclose ( temp_file );   remove ( FILE_NAME );    rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}





int
FLEE_LOCALSUBSintl ( const char * FILE_NAME , int WHAT_LINE , int VALUE , const char * TOKEN )
{

    FILE* file;
    char STRING_VALUE [ 50 ];

                            sprintf ( STRING_VALUE , "%d" , VALUE );

    char temp_filename [ ]  = "allen.txt";
    int  old_word_len       = strlen ( STRING_VALUE );
    int  new_word_len       = strlen ( TOKEN );
    int RETURN_VALUE        = 0;
    int current_line_number = 1;

                            file = fopen ( FILE_NAME , "r" );
                                if ( file == NULL ) printf ("Failed to open the file!\n");

                            FILE * temp_file = fopen ( temp_filename , "w" );
                                if ( temp_file == NULL ) { printf ("Error with the file reading!\n"); fclose ( file ); }

    char line [ 99999 ];

        while ( fgets ( line , 99999 , file ) )
        {
             if ( current_line_number == WHAT_LINE )
             {
               char * pos = line;

        while ( ( pos = strstr ( pos , STRING_VALUE ) ) not_eq NULL )
        {
                if ( ( * ( pos + old_word_len ) == ' ' or * ( pos + old_word_len ) == '\n' or * ( pos + old_word_len ) == '\0' ) and ( pos == line or * ( pos - 1 ) == ' ' or * ( pos - 1 ) == '\n' or * ( pos - 1 ) == '\0' ) )
                {
                      fwrite ( line  , pos - line   , 1 , temp_file );
                      fwrite ( TOKEN , new_word_len , 1 , temp_file );
                      pos += old_word_len;

                      strcpy ( line , pos );
                      pos = line;
                      RETURN_VALUE++;
                }
                else pos += old_word_len;
        }

             fwrite ( line , strlen ( line ) , 1 , temp_file );
        }
        else fwrite ( line , strlen ( line ) , 1 , temp_file );

        current_line_number++;
    }

    fclose ( file ); fclose ( temp_file ); remove ( FILE_NAME ); rename ( temp_filename , FILE_NAME );

    return RETURN_VALUE;
}
