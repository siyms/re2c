/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = NULL;
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	case 'z':
		yyt1 = yyt2 = YYCURSOR;
		goto yy5;
	default:
		yyt2 = yyt3 = yyt4 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt4;
	if (yyt4 != NULL) yypmatch[4] -= 1;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = NULL;
		yyt2 = YYCURSOR;
		goto yy3;
	case 'z':
		yyt2 = YYCURSOR;
		goto yy5;
	default:
		yyt3 = YYCURSOR;
		goto yy2;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt4 = NULL;
		yyt2 = YYCURSOR;
		goto yy3;
	case 'z':	goto yy5;
	default:
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
}

posix_captures/nullsubexpr/11.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/11.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/nullsubexpr/11.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
