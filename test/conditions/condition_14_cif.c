/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -cif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	BSIZE	8192

enum ScanContition {
	EStateNormal,
	EStateComment,
	EStateSkiptoeol,
	EStateString,
};


typedef struct Scanner
{
	FILE			    *fp;
	unsigned char	    *cur, *tok, *lim, *eof;
	unsigned char 	    buffer[BSIZE];
	unsigned char       yych;
	enum ScanContition  cond;
	int                 state;
} Scanner;

size_t fill(Scanner *s, size_t len)
{
	size_t got = ~0, cnt;

	if (!s->eof && s->lim - s->tok < len)
	{
		if (s->tok > s->buffer)
		{
			cnt = s->tok - s->buffer;
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
			cnt = &s->buffer[BSIZE] - s->lim;
		}
		else
		{
			cnt = BSIZE;
		}
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	if (s->eof && s->cur + len > s->eof)
	{
		return ~0; /* not enough input data */
	}
	return got;
}

size_t init(Scanner *s)
{
	s->cur = s->tok = s->lim = s->buffer;
	s->eof = 0;
	s->cond = EStateNormal;
	s->state = -1;

	return fill(s, 0);
}

void fputl(const char *s, size_t len, FILE *stream)
{
	while(len-- > 0)
	{
		fputc(*s++, stream);
	}
}

void scan(Scanner *s)
{
	s->tok = s->cur;

	switch (s->state) {
	default:
		goto yy0;
	case 0:
		goto yyFillLabel0;
	case 1:
		goto yyFillLabel1;
	case 2:
		goto yyFillLabel2;
	case 3:
		goto yyFillLabel3;
	}

	for(;;)
	{
		s->tok = s->cur;


yy0:
		switch (s->cond) {
		case EStateNormal:
			goto yyc_Normal;
		case EStateComment:
			goto yyc_Comment;
		case EStateSkiptoeol:
			goto yyc_Skiptoeol;
		case EStateString:
			goto yyc_String;
		}
/* *********************************** */
yyc_Normal:
		s->state = 0;(0);
		if ((s->lim - s->cur) < 4) if (fill(s, 4) == ~0) break;
yyFillLabel0:
		s->yych = *s->cur;
		switch (s->yych) {
		case '"':	goto yy5;
		case '\'':	goto yy7;
		case '/':	goto yy8;
		case '?':	goto yy9;
		default:	goto yy3;
		}
yy3:
		++s->cur;
yy4:
		fputc(s->cur[-1], stdout);
		continue;
yy5:
		++s->cur;
		s->cond = EStateString;(EStateString);
		fputc(s->cur[-1], stdout);
		continue;
yy7:
		s->yych = *(s->tok = ++s->cur);
		switch (s->yych) {
		case '"':	goto yy10;
		case '\\':	goto yy12;
		default:	goto yy4;
		}
yy8:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '*':	goto yy13;
		case '/':	goto yy15;
		default:	goto yy4;
		}
yy9:
		s->yych = *(s->tok = ++s->cur);
		switch (s->yych) {
		case '?':	goto yy17;
		default:	goto yy4;
		}
yy10:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '\'':	goto yy18;
		default:	goto yy11;
		}
yy11:
		s->cur = s->tok;
		goto yy4;
yy12:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '"':	goto yy10;
		default:	goto yy11;
		}
yy13:
		++s->cur;
		s->cond = EStateComment;(EStateComment);
		continue;
yy15:
		++s->cur;
		s->cond = EStateSkiptoeol;(EStateSkiptoeol);
		continue;
yy17:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '!':	goto yy20;
		case '\'':	goto yy22;
		case '(':	goto yy24;
		case ')':	goto yy26;
		case '-':	goto yy28;
		case '/':	goto yy30;
		case '<':	goto yy32;
		case '=':	goto yy34;
		case '>':	goto yy36;
		default:	goto yy11;
		}
yy18:
		++s->cur;
		fputl("'\"'", 3, stdout);
		continue;
yy20:
		++s->cur;
		fputc('|', stdout);
		continue;
yy22:
		++s->cur;
		fputc('^', stdout);
		continue;
yy24:
		++s->cur;
		fputc('[', stdout);
		continue;
yy26:
		++s->cur;
		fputc(']', stdout);
		continue;
yy28:
		++s->cur;
		fputc('~', stdout);
		continue;
yy30:
		++s->cur;
		fputc('\\', stdout);
		continue;
yy32:
		++s->cur;
		fputc('{', stdout);
		continue;
yy34:
		++s->cur;
		fputc('#', stdout);
		continue;
yy36:
		++s->cur;
		fputc('}', stdout);
		continue;
/* *********************************** */
yyc_Comment:
		s->state = 1;(1);
		if ((s->lim - s->cur) < 2) if (fill(s, 2) == ~0) break;
yyFillLabel1:
		s->yych = *s->cur;
		switch (s->yych) {
		case '*':	goto yy42;
		default:	goto yy40;
		}
yy40:
		++s->cur;
yy41:
		continue;
yy42:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '/':	goto yy43;
		default:	goto yy41;
		}
yy43:
		++s->cur;
		s->cond = EStateNormal;(EStateNormal);
		continue;
/* *********************************** */
yyc_Skiptoeol:
		s->state = 2;(2);
		if ((s->lim - s->cur) < 5) if (fill(s, 5) == ~0) break;
yyFillLabel2:
		s->yych = *s->cur;
		switch (s->yych) {
		case '\n':	goto yy49;
		case '\r':	goto yy51;
		case '?':	goto yy52;
		case '\\':	goto yy53;
		default:	goto yy47;
		}
yy47:
		++s->cur;
yy48:
		continue;
yy49:
		++s->cur;
		s->cond = EStateNormal;(EStateNormal);
		fputc('\n', stdout);
		continue;
yy51:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '\n':	goto yy54;
		default:	goto yy48;
		}
yy52:
		s->yych = *(s->tok = ++s->cur);
		switch (s->yych) {
		case '?':	goto yy56;
		default:	goto yy48;
		}
yy53:
		s->yych = *(s->tok = ++s->cur);
		switch (s->yych) {
		case '\n':	goto yy58;
		case '\r':	goto yy60;
		default:	goto yy48;
		}
yy54:
		++s->cur;
		s->cond = EStateNormal;(EStateNormal);
		fputc('\r', stdout);
		fputc('\n', stdout);
		continue;
yy56:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '/':	goto yy61;
		default:	goto yy57;
		}
yy57:
		s->cur = s->tok;
		goto yy48;
yy58:
		++s->cur;
		continue;
yy60:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '\n':	goto yy58;
		default:	goto yy57;
		}
yy61:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '\n':	goto yy62;
		case '\r':	goto yy64;
		default:	goto yy57;
		}
yy62:
		++s->cur;
		continue;
yy64:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '\n':	goto yy62;
		default:	goto yy57;
		}
/* *********************************** */
yyc_String:
		s->state = 3;(3);
		if ((s->lim - s->cur) < 2) if (fill(s, 2) == ~0) break;
yyFillLabel3:
		s->yych = *s->cur;
		switch (s->yych) {
		case '"':	goto yy69;
		case '\\':	goto yy71;
		default:	goto yy67;
		}
yy67:
		++s->cur;
yy68:
		fputc(s->cur[-1], stdout);
		continue;
yy69:
		++s->cur;
		s->cond = EStateNormal;(EStateNormal);
		fputc(s->cur[-1], stdout);
		continue;
yy71:
		s->yych = *++s->cur;
		switch (s->yych) {
		case '\n':	goto yy68;
		default:	goto yy72;
		}
yy72:
		++s->cur;
		fputl((const char*)s->cur-2, 2, stdout);
		continue;

	}
}

int main(int argc, char **argv)
{
	Scanner in;

	if (argc != 2)
	{
		fprintf(stderr, "%s <file>\n", argv[0]);
		return 1;;
	}

	memset((char*) &in, 0, sizeof(in));

	if (!strcmp(argv[1], "-"))
	{
		in.fp = stdin;
	}
	else if ((in.fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		return 1;
	}

	if (init(&in) > 0)
	{
 		scan(&in);
 	}

	if (in.fp != stdin)
	{
		fclose(in.fp);
	}
	return 0;
}