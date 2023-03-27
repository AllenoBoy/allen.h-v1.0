# Allen.h
Biblioteca da linguagem c, para facilitar a programação.

LINKERS TO WORK:
"-luser32",
"-lgdi32",
"-lcomdlg32",
"-luuid",
"-loleaut32",
"-lole32"

---
static inline
HWND
W_CREATEWINDOW ( int ID , const char* CLASS ,const char* TITLE , COLORREF BACKGROUND_COLOR , int WIDTH , int HEIGHT ,  int X_POSITION , int Y_POSITION , bool MINIMIZE, bool MAXIMIZE, bool CLOSE )
{
//
//
//
    WNDCLASS wc = { 0 };

    wc.lpfnWndProc   = DefWindowProc;
    wc.hInstance     = GetModuleHandle (NULL);
    wc.hCursor       = LoadCursor ( NULL , IDC_ARROW );
    wc.lpszClassName = CLASS;
                       RegisterClass ( &wc );
//
//
    DWORD CAPTION_BUTTONS = WS_OVERLAPPEDWINDOW;

    if ( MAXIMIZE == false ) CAPTION_BUTTONS &= ~WS_MAXIMIZEBOX;
    if ( MINIMIZE == false ) CAPTION_BUTTONS &= ~WS_MINIMIZEBOX;
    if ( CLOSE    == false ) CAPTION_BUTTONS |= WS_SYSMENU;
//
//
    HWND hwnd = CreateWindow
    (
        CLASS
        ,
        TITLE
        ,
        CAPTION_BUTTONS
        ,
        X_POSITION , Y_POSITION
        ,
        WIDTH , HEIGHT
        ,
        NULL , NULL
        ,
        GetModuleHandle ( NULL )
        ,
        NULL
    );
//
//
//
//
    SetWindowLong ( hwnd , GWL_ID , ID );
//
    HBRUSH hbrBackground = CreateSolidBrush ( BACKGROUND_COLOR );
    SetClassLongPtr ( hwnd , GCLP_HBRBACKGROUND , ( LONG_PTR ) hbrBackground );
//
    ShowWindow ( hwnd , SW_SHOWDEFAULT );
    UpdateWindow ( hwnd );
//
    if ( CLOSE == false )
    {
        HMENU hMenu = GetSystemMenu ( hwnd , FALSE );
        EnableMenuItem ( hMenu , SC_CLOSE , MF_GRAYED | MF_BYCOMMAND );
    }
//
    return hwnd;

---

void
W_CREATETEXT ( HWND hwnd , char* TEXT , int TEXT_WEIGHT , bool ITALIC, bool UNDERLINE , bool STRIKEOUT , int X_POSITION , int Y_POSITION , BOOL SET_TRANSPARENT , COLORREF TEXT_COLOR , COLORREF BACKGROUND_COLOR , int FONT_SIZE , char* FONT_FAMILY )
{

    HDC hdc = GetDC ( hwnd );


    if ( SET_TRANSPARENT == true ) SetBkMode ( hdc , TRANSPARENT );
    else                           SetBkMode  ( hdc , OPAQUE );


    SetBkColor ( hdc , BACKGROUND_COLOR );
    SetTextColor ( hdc , TEXT_COLOR );


    HFONT hFont = CreateFont ( FONT_SIZE , 0, 0, 0, TEXT_WEIGHT, ITALIC, UNDERLINE, STRIKEOUT, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, FONT_FAMILY);
    SelectObject ( hdc , hFont );


    TextOut ( hdc , X_POSITION , Y_POSITION , TEXT , strlen ( TEXT ) );

    DeleteObject ( hFont );
    ReleaseDC ( hwnd , hdc );
}

---

--- 
