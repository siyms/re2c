/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		goto yy3;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt4 = NULL;
		yyt2 = YYCURSOR;
		goto yy5;
	}
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt4 = NULL;
		yyt2 = YYCURSOR;
		goto yy7;
	}
	yyt3 = yyt5 = YYCURSOR;
yy6:
	yynmatch = 4;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[7] = yyt5;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt4;
	if (yyt4 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt5;
	if (yyt5 != NULL) yypmatch[6] -= 1;
	{}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt3 = yyt5 = YYCURSOR;
		goto yy6;
	}
	++YYCURSOR;
	yyt5 = NULL;
	yyt3 = yyt4 = YYCURSOR;
	goto yy6;
}

posix_captures/repetition/40.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
