/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
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
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy4;
	yyt8 = yyt10 = NULL;
	yyt6 = yyt7 = yyt9 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych >= 0x01) {
		yyt8 = NULL;
		yyt6 = yyt7 = YYCURSOR;
		goto yy8;
	}
	yyt9 = YYCURSOR;
yy7:
	yynmatch = 10;
	yypmatch[2] = yyt1;
	yypmatch[5] = yyt2;
	yypmatch[7] = yyt3;
	yypmatch[8] = yyt4;
	yypmatch[11] = yyt5;
	yypmatch[13] = yyt6;
	yypmatch[14] = yyt7;
	yypmatch[17] = yyt8;
	yypmatch[19] = yyt9;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt4;
	yypmatch[4] = yyt2;
	if (yyt2 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt3;
	if (yyt3 != NULL) yypmatch[6] -= 1;
	yypmatch[9] = yyt7;
	yypmatch[10] = yyt5;
	if (yyt5 != NULL) yypmatch[10] -= 2;
	yypmatch[12] = yyt6;
	if (yyt6 != NULL) yypmatch[12] -= 1;
	yypmatch[15] = YYCURSOR;
	yypmatch[16] = yyt8;
	if (yyt8 != NULL) yypmatch[16] -= 2;
	yypmatch[18] = yyt9;
	if (yyt9 != NULL) yypmatch[18] -= 1;
	{}
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = yyt9;
		yyt3 = yyt10;
		yyt4 = yyt9;
		yyt5 = yyt10;
		yyt9 = YYCURSOR;
		goto yy7;
	}
	yyt6 = yyt8 = NULL;
	yyt5 = yyt7 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = yyt9;
		yyt3 = yyt10;
		yyt4 = yyt9;
		yyt9 = YYCURSOR;
		goto yy7;
	}
	++YYCURSOR;
	yyt2 = yyt9;
	yyt3 = yyt10;
	yyt4 = yyt9;
	yyt9 = NULL;
	yyt8 = YYCURSOR;
	goto yy7;
}

posix_captures/repetition/10.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
