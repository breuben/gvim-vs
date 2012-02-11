/* pathdef.c */ 
#include "vim.h" 
char_u *default_vim_dir = (char_u *)""; 
char_u *default_vimruntime_dir = (char_u *)""; 
char_u *all_cflags = (char_u *)"cl -c /W3 /nologo  -I. -Iproto -DHAVE_PATHDEF -DWIN32   -DFEAT_CSCOPE -DFEAT_NETBEANS_INTG      -DWINVER=0x0500 -D_WIN32_WINNT=0x0500  /Fo.\\ObjG/ /Ox /GL -DNDEBUG /arch:SSE2 /Zl /MT -DFEAT_MBYTE_IME -DDYNAMIC_IME -DFEAT_MBYTE -DFEAT_GUI_W32 -DDYNAMIC_ICONV -DDYNAMIC_GETTEXT -DFEAT_BIG /Fd.\\ObjG/ /Zi"; 
char_u *all_lflags = (char_u *)"link /RELEASE /nologo /subsystem:windows /LTCG:STATUS oldnames.lib kernel32.lib advapi32.lib shell32.lib gdi32.lib  comdlg32.lib ole32.lib uuid.lib /machine:i386 /nodefaultlib gdi32.lib version.lib   winspool.lib comctl32.lib advapi32.lib shell32.lib  /machine:i386 /nodefaultlib libcmt.lib   user32.lib           WSock32.lib  /PDB:gvim.pdb -debug"; 
char_u *compiled_user = (char_u *)"breuben"; 
char_u *compiled_sys = (char_u *)"AMHSCENTRAL"; 
