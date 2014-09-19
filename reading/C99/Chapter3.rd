Making The Best Use of C

When making GNU softwares

1.Formating your source code

a.Keep less than 80 character in a line.

b.defun like this:

static char *
concat (s1, s2)
	char *s1, *s2;
{
	...
}
In Standard C, if the arguments don’t fit nicely on one line, split it like this:
int
lots_of_args (int an_integer, long a_long, short a_short,
		double a_double, float a_float)
	...

c.A space after a comma,before and after a sign which split two expressions and before an open-parentheses

d.expression more than one line,split it before an operator:
if (foo_this_is_long && bar > win (x, y, z)
	&& remaining_condition)

e.Try to avoid having two operators of different precedence at the same level of indentation.Like the || and > in the command, don’t write this:
mode = (inmode[j] == VOIDmode
		|| GET_MODE_SIZE (outmode[j]) > GET_MODE_SIZE (inmode[j])
		? outmode[j] : inmode[j]);
Instead, use extra parentheses so that the indentation shows the nesting:
mode = ((inmode[j] == VOIDmode
			|| (GET_MODE_SIZE (outmode[j]) > GET_MODE_SIZE (inmode[j])))
		? outmode[j] : inmode[j]);

f.Adding a set of parentheses produces something that looks equally nice, and which Emacs will preserve:
v = (rup->ru_utime.tv_sec*1000 + rup->ru_utime.tv_usec/1000
		+ rup->ru_stime.tv_sec*1000 + rup->ru_stime.tv_usec/1000);

g.formfeed(Ctrl+L)?????

2.Commenting your work

a.write a brief comment for its use at the very beginning of any source file.
