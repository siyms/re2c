/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	if (yych >= 0x01) {
		yyt2 = NULL;
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
		yyt5 = NULL;
		yyt3 = yyt4 = YYCURSOR;
		goto yy5;
	}
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt3 = yyt5 = NULL;
		yyt2 = yyt4 = YYCURSOR;
		goto yy7;
	}
	yyt6 = YYCURSOR;
yy6:
	yynmatch = 7;
	yypmatch[2] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[7] = yyt3;
	yypmatch[8] = yyt4;
	yypmatch[11] = yyt5;
	yypmatch[13] = yyt6;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt4;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt3;
	if (yyt3 != NULL) yypmatch[6] -= 1;
	yypmatch[9] = YYCURSOR;
	yypmatch[10] = yyt5;
	if (yyt5 != NULL) yypmatch[10] -= 2;
	yypmatch[12] = yyt6;
	if (yyt6 != NULL) yypmatch[12] -= 1;
	{}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt6 = YYCURSOR;
		goto yy6;
	}
	++YYCURSOR;
	yyt6 = NULL;
	yyt5 = YYCURSOR;
	goto yy6;
}

posix_captures/repetition/44.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
