1.Which language to use

C is for high speed remand.C++ is ok when lightly rely on templates.



2.Compatibility

Upward compatible with Berkerley Unix,standard C and POSIX wich behaviour is well specified.

a.--ansi --posix and --compatible is use to turn extensions off,which is prohibit in standard c and posix.
b.Try to recognize environment POSIXLY_CORRECT in your program to suppress extensions that confict with POSIX.
c.Refrain from using extensions except that it can offer a boost(big improvement).



3.Standard C and Pre-Standard C

C89 is widespread enough to use its feature,besides "trigraph".1999 and 2011 editions are not fully supported on all platforms.Their feature will bring side effect which decide by compilers.

details about coding:

a.Function definition

int
foo (x, y)
	int x,y;
...

when argument prototype: int foo (int, int)

This skill does not work for integer types narrower than int,so if you want use these type,just declare it as int instead.
If you face with type like dev_t which is platform dependency(maybe wider than int,or opposite to that),use Autoconf to handle with them.

????????
/* Declare the prototype for a general external function.
#if defined (__STDC__) || defined (WINDOWSNT)
#define P_(proto) proto
#else
#define P_(proto) ()
#endif
*/


b.Condition compilation

if (HAS_FOO)
	...
else
	...

instead of:
#ifdef HAS_FOO
	...
#else
	...
#endif

although they will generate same code.

?????
#ifdef REVERSIBLE_CC_MODE
#define HAS_REVERSIBLE_CC_MODE 1
#else
#define HAS_REVERSIBLE_CC_MODE 0
#endif

4 Program behavior for all Programs

a.Non-GNU Standards


GCC implement nearly all features of Standard C,and GNU utilities follow specifications of POSIX.2,which shell script should obey.

--pedantic is use to prohibit all extensions so GCC now is compeletely implementation of the standard.environment variable "POSIXLY_CORRECT" is required if you want to 100% obey POSIX.2

don`t reject a new feature or remove an old one

b.Writing Robust Programs

1.) Avoid any limits on the length or number on any data struct by allocating all them dynamically.
2.)	Utilities reading files shouldn`t drop any nonpriting characters.
3.)	Check every system call for an error return unless you wish to ignore them.You need a robust error check.
4.) Check return of malloc and realloc every time you use them.Realloc may change address when you minimize a block,check that as well.Make everything clear about dynamical memory allocation.
...

c.Library behavior

	 A prefix(longer than 2 characters) for a library,use the prefix for functions and variables,static functions and variables can not fit any naming convention.

d.Formatting Error Messages
...
