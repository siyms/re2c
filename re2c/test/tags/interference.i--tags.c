/* Generated by re2c */
// This example shows the neccesity of tracking interference
// induced by copy commands: fallback tag interferes with another
// tag in a way that makes it impossible to spot interference
// unless we examine the copy command.

// On input "cdabe" 2nd rule should match with '@q' pointing to 'd'.

yyt1
yyt2
yyt3


{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy5;
	case 'c':	goto yy6;
	case 'e':	goto yy7;
	default:	goto yy3;
	}
yy2:
	p = yyt1;
	{ p }
yy3:
	++YYCURSOR;
yy4:
	{}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':
		yyt2 = YYCURSOR;
		goto yy9;
	default:	goto yy4;
	}
yy7:
	++YYCURSOR;
	q = yyt2;
	{ q }
yy9:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt3 = yyt1;
		yyt1 = YYCURSOR;
		goto yy10;
	case 'c':
		yyt3 = yyt1;
		goto yy12;
	case 'e':	goto yy7;
	default:	goto yy2;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy11;
	}
yy11:
	YYCURSOR = YYMARKER;
	yyt1 = yyt3;
	goto yy2;
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':
		yyt2 = YYCURSOR;
		goto yy9;
	default:	goto yy11;
	}
}

re2c: warning: line 11: rule matches empty string [-Wmatch-empty-string]