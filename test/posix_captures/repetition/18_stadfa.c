/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy3;
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt2 = NULL;
	yyt1 = YYCURSOR - 1;
	if (yych >= 0x01) goto yy5;
	yyt3 = YYCURSOR;
yy4:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[7] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = YYCURSOR;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt3;
	if (yyt3 != NULL) yypmatch[6] -= 1;
	{}
yy5:
	++YYCURSOR;
	yyt3 = NULL;
	yyt2 = YYCURSOR;
	goto yy4;
}

posix_captures/repetition/18_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
