# include "allen.h"



void  SetupConsole  ( void );
void  DrawnMenu     ( void );
void  DrawnStart    ( void );
void  DrawnLoad     ( void );
void  DrawnAbout    ( void );
void  DrawnClose    ( void );
void  MenuActions   ( void );

void  ListContent   ( void );



int  kaj        = 0;
int  jak        = 0;

int  MenuChoice = 0;
int  MenuClose  = 0;

char DesignLayout [100];


int
main ( void )
{
       // <1> Configurações do Console
       SetupConsole ();

       // <2> Menu Inicial
       DrawnMenu (); MenuActions ();

       // <3> Menus
       if ( MenuChoice == 1 ) DrawnStart ();

       if ( MenuChoice == 2 ) DrawnLoad ();

       if ( MenuChoice == 3 ) DrawnAbout ();

       if ( MenuChoice == 4 ) DrawnClose ();

       // <4> Fim
}




//////////////////////////////////////////////////////////////////////////////////////////////
void
SetupConsole ( void )
{
    ENABLEPROPS     ();
    PROP_HIDECURSOR ();

    SB_PLAYSOUND ( MB_ICONSTOP );

    CS_DISABLEMINIMIZEBUTTON ();
    CS_DISABLEMAXIMIZEBUTTON ();
    CS_DISABLERESIZE         ();
    CS_DISABLESCROLLBAR      ();

    CS_SETTITLE ("Color Editor");

    SYS_SETSIZE ( 60 , 22 );

    MenuClose = 0;

    FLEE_CREATEAFOLDER ( "DESIGNS" );
}
//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
void
DrawnMenu ( void )
{
    // 1. Background Brush
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
        PR_CHAR ( ' ' , 60 * 22 );



    // 2. Button Background Print
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );

                        /* PROGRAM NAME */
                        gotoxy ( 14 , 2 ); PR_CHAR ( ' ' , 32 );
                        gotoxy ( 14 , 3 ); PR_CHAR ( ' ' , 32 );
                        gotoxy ( 14 , 4 ); PR_CHAR ( ' ' , 32 );

    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );

                        gotoxy ( 15 , 5 ); PR_CHAR ( 223 , 32 );
                        gotoxy ( 46 , 4 ); PR_CHAR ( 219 , 1 );
                        gotoxy ( 46 , 3 ); PR_CHAR ( 219 , 1 );

    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );



                        /* START BUTTON */
                        gotoxy ( 24 , 7 );  PR_CHAR ( ' ' , 11 );

    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );

                        gotoxy ( 25 , 8 ); PR_CHAR ( 223 , 11 );
                        gotoxy ( 35 , 7 ); PR_CHAR ( 220 , 1 );

    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );

                        /* LOAD BUTTON */
                        gotoxy ( 24 , 10 );  PR_CHAR ( ' ' , 11 );

    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );

                        gotoxy ( 25 , 11 ); PR_CHAR ( 223 , 11 );
                        gotoxy ( 35 , 10 ); PR_CHAR ( 220 , 1 );

    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );

                        /* ABOUT BUTTON */
                        gotoxy ( 24 , 13 );  PR_CHAR ( ' ' , 11 );

    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );

                        gotoxy ( 25 , 14 ); PR_CHAR ( 223 , 11 );
                        gotoxy ( 35 , 13 ); PR_CHAR ( 220 , 1 );

    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );

                        /* CLOSE BUTTON */
                        gotoxy ( 24 , 16 );  PR_CHAR ( ' ' , 11 );

    PROP_TEXTCOLOR ( BLACK_TEXT );
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );

                        gotoxy ( 25 , 17 ); PR_CHAR ( 223 , 11 );
                        gotoxy ( 35 , 16 ); PR_CHAR ( 220 , 1 );

    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( WHITE_TEXT );

                        gotoxy ( 19 , 19 ); PR_CHAR ( 175 , 1 ); PR (" BETA PROGRAM v 1.2 "); PR_CHAR ( 174 , 1 );

    PROP_TEXTCOLOR ( BLACK_TEXT );

                        /* FINAL DETAILS */
                        gotoxy ( 14 , 1 ); PR_CHAR ( 242 , 32 );
                        gotoxy ( 24 , 6 ); PR_CHAR ( 242 , 11 );
                        gotoxy ( 24 , 9 ); PR_CHAR ( 242 , 11 );
                        gotoxy ( 24 , 12 ); PR_CHAR ( 242 , 11 );
                        gotoxy ( 24 , 15 ); PR_CHAR ( 242 , 11 );

                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 0 , kaj ); PR_CHAR ( 177 , 1 ); }
                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 1 , kaj ); PR_CHAR ( 176 , 1 ); }

                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 59 , kaj ); PR_CHAR ( 177 , 1 ); }
                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 58 , kaj ); PR_CHAR ( 176 , 1 ); }


    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );



    // 3. Button Content Print
    gotoxy ( 24 , 3 ); PR ("COLOR EDITOR");
    gotoxy ( 27 , 7 );  PR ("START");
    gotoxy ( 27 , 10 ); PR ("LOAD!");
    gotoxy ( 27 , 13 ); PR ("ABOUT");
    gotoxy ( 27 , 16 ); PR ("CLOSE");
}
//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
void
MenuActions ( void )
{
    char control;
    int  pos = MenuChoice;

    while ( control not_eq 13 or MenuChoice == 0 )
    {
        control = getch ();

        // 1. Interface Control
        switch ( control )
        {
        case 80: pos++; if ( pos > 4 ) pos = 1; break;
        case 72: pos--; if ( pos < 1 ) pos = 4; break;
        }



        // 2. Setting the Position
        if ( pos == 1 ) { gotoxy ( 27 , 7 ); PROP_TEXTCOLOR ( WHITE_TEXT );  PR ("START"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 7 ); PROP_TEXTCOLOR ( BLACK_TEXT );  PR ("START"); }

        if ( pos == 2 ) { gotoxy ( 27 , 10 ); PROP_TEXTCOLOR ( WHITE_TEXT ); PR ("LOAD!"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 10 ); PROP_TEXTCOLOR ( BLACK_TEXT ); PR ("LOAD!"); }

        if ( pos == 3 ) { gotoxy ( 27 , 13 ); PROP_TEXTCOLOR ( WHITE_TEXT ); PR ("ABOUT"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 13 ); PROP_TEXTCOLOR ( BLACK_TEXT ); PR ("ABOUT"); }

        if ( pos == 4 ) { gotoxy ( 27 , 16 ); PROP_TEXTCOLOR ( WHITE_TEXT ); PR ("CLOSE"); MenuChoice = pos; }
        else            { gotoxy ( 27 , 16 ); PROP_TEXTCOLOR ( BLACK_TEXT ); PR ("CLOSE"); }


    }
}
//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
void
DrawnStart ( void )
{
    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();
}
//////////////////////////////////////////////////////////////////////////////////////////////

// <- 25

//////////////////////////////////////////////////////////////////////////////////////////////
void
DrawnLoad ( void )
{
    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();


    // 1. Background Brush
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
        PR_CHAR ( ' ' , 60 * 22 );

    gotoxy ( 14 , 1 ); PR ("DESIGNS");

    for ( kaj = 2; kaj < 20; kaj++ ) { gotoxy ( 1 , kaj ); PR_CHAR ( 186 , 1 ); gotoxy ( 33 , kaj ); PR_CHAR ( 186 , 1 ); }

    gotoxy ( 1 , 1 ); PR_CHAR ( 201 , 1 );
    gotoxy ( 2 , 1 ); PR_CHAR ( 205 , 11 );

    gotoxy ( 1 , 20 ); PR_CHAR ( 200 , 1 );
    gotoxy ( 2 , 20 ); PR_CHAR ( 205 , 31 );

    gotoxy ( 33 , 1 ); PR_CHAR ( 187 , 1 );
    gotoxy ( 33 , 20 ); PR_CHAR ( 188 , 1 );
    gotoxy ( 22 , 1 ); PR_CHAR ( 205 , 11 );


    PROP_TEXTCOLOR ( WHITE_TEXT );
    ListContent ();


    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );

    for ( jak = 35; jak < 60; jak++ )
    for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( jak , kaj );   PR_CHAR ( ' ' , 1 ); }

    PROP_TEXTCOLOR ( BLACK_TEXT );

    gotoxy ( 42 , 10 ); PR ("LOAD DESIGN");

    PROP_TEXTCOLOR ( BLUE_TEXT );
    gotoxy ( 38 , 1 ); PR ("HOW TO USE:");
    PROP_TEXTCOLOR ( BLACK_TEXT );

    gotoxy ( 50 , 1 ); PR ("TYPE THE ");
    gotoxy ( 38 , 2 ); PR ("DESIGN NAME TO LOAD");
    gotoxy ( 38 , 3 ); PR ("AND TO RETURN TO THE");
    gotoxy ( 38 , 4 ); PR ("MENU TYPE :q!");

    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    gotoxy ( 36 , 13 ); PR_CHAR ( ' ' , 23 );

    PROP_TEXTCOLOR ( WHITE_TEXT );

    gotoxy ( 37 , 13 ); getS ( "" , 0 , 0 , SZE , 21 , DesignLayout , ' ' , 0 );


    if ( strcmp ( DesignLayout , ":q!" ) == 0 or strcmp ( DesignLayout , ":Q!" ) == 0 ) main ();
}



//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
void
DrawnAbout ( void )
{
    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();

    // 1. Background Brush
    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( BLACK_TEXT );
        PR_CHAR ( ' ' , 60 * 22 );



        // 2. Button Background Print
    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );

                        /* PROGRAM NAME */
                        gotoxy ( 14 , 2 ); PR_CHAR ( ' ' , 32 );
                        gotoxy ( 14 , 3 ); PR_CHAR ( ' ' , 32 );
                        gotoxy ( 14 , 4 ); PR_CHAR ( ' ' , 32 );


                        /* ABOUT BOX */
                        gotoxy ( 18 , 8 ); PR_CHAR ( ' ' , 24 );
                        gotoxy ( 18 , 9 ); PR_CHAR ( ' ' , 24 );
                        gotoxy ( 18 , 10 ); PR_CHAR ( ' ' , 24 );
                        gotoxy ( 18 , 11 ); PR_CHAR ( ' ' , 24 );
                        gotoxy ( 18 , 12 ); PR_CHAR ( ' ' , 24 );
                        gotoxy ( 18 , 13 ); PR_CHAR ( ' ' , 24 );
                        gotoxy ( 18 , 14 ); PR_CHAR ( ' ' , 24 );
                        gotoxy ( 18 , 15 ); PR_CHAR ( ' ' , 24 );



    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );

                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 0 , kaj ); PR_CHAR ( 177 , 1 ); }
                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 1 , kaj ); PR_CHAR ( 176 , 1 ); }

                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 59 , kaj ); PR_CHAR ( 177 , 1 ); }
                        for ( kaj = 0; kaj < 22; kaj++ ) { gotoxy ( 58 , kaj ); PR_CHAR ( 176 , 1 ); }


                        gotoxy ( 14 , 1 ); PR_CHAR ( 242 , 32 );

                        gotoxy ( 18 , 7 ); PR_CHAR ( 242 , 24 );



                        gotoxy ( 15 , 5 ); PR_CHAR ( 223 , 32 );
                        gotoxy ( 46 , 4 ); PR_CHAR ( 219 , 1 );
                        gotoxy ( 46 , 3 ); PR_CHAR ( 219 , 1 );

                        gotoxy ( 19 , 16 ); PR_CHAR ( 223 , 24 );
                        for ( jak = 9; jak <= 15; jak++ ) { gotoxy ( 42 , jak ); PR_CHAR ( 219 , 1 ); }



    PROP_BACKGROUNDCOLOR ( CYAN_BACKGROUND );


                        gotoxy ( 28 , 3 ); PR ("ABOUT");
                        gotoxy ( 24 , 9 ); PR ("COLOR EDITOR");
                        gotoxy ( 22 , 11 ); PR ("In-console color");
                        gotoxy ( 23 , 12 ); PR ("rendering tool");
                        gotoxy ( 21 , 13 ); PR ("using escape codes");
                        gotoxy ( 24 , 14 ); PR ("and allen.h");







    PROP_BACKGROUNDCOLOR ( BLUE_BACKGROUND );
    PROP_TEXTCOLOR ( WHITE_TEXT );

                        gotoxy ( 15 , 19 ); PR_CHAR ( 175 , 1 ); PR (" PRESS R TO RETURN TO MENU "); PR_CHAR ( 174 , 1 );

    while ( getch () not_eq 114 ) {} main ();
}
//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
void
DrawnClose ( void )
{
    MenuClose = SB_CREATEBOX ( "Você deseja encerrar a aplicação?" , "Confirme" , MB_YESNO | MB_ICONQUESTION |MB_DEFBUTTON2 | MB_SYSTEMMODAL );

    MenuChoice = 0;

    if ( MenuClose not_eq IDYES ) main ();

    SYS_CLEARSCREEN ();
    PROP_RESETCOLOR ();
}
//////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////
void ListContent ( void )
{
     DIR * dir;
     struct dirent * ent;
     struct stat file_stat;

     char * folder_name = "DESIGNS";
     char * ext = ".txt";

     int ext_len = strlen ( ext );

     dir = opendir ( folder_name );

     kaj = 1;

     while ( ( ent = readdir ( dir ) ) not_eq NULL )
     {
          if ( strlen ( ent -> d_name ) >= ext_len and strcmp ( ent -> d_name + strlen ( ent -> d_name ) - ext_len , ext ) == 0 )
          {
             char path [ 1024 ];

             gotoxy ( 4 , kaj ); sprintf ( path , "%s/%s" , folder_name , ent -> d_name );

             if ( stat ( path , &file_stat ) == -1 ) continue;

             if ( S_ISREG ( file_stat.st_mode ) ) printf ("%s\n", ent -> d_name);
          }
          kaj++;
     }

    closedir ( dir );
}
//////////////////////////////////////////////////////////////////////////////////////////////

