/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy3;
	yyt1 = yyt2 = yyt4 = yyt5 = NULL;
	yyt3 = YYCURSOR;
yy2:
	yynmatch = 4;
	yypmatch[0] = yyt3;
	yypmatch[2] = yyt5;
	yypmatch[3] = yyt4;
	yypmatch[5] = yyt1;
	yypmatch[7] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt1;
	if (yyt1 != NULL) yypmatch[4] -= 2;
	yypmatch[6] = yyt2;
	if (yyt2 != NULL) yypmatch[6] -= 1;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = NULL;
	yyt3 = yyt4 = yyt5 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt2 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt4;
	if (yych <= 0x00) {
		yyt2 = NULL;
		yyt1 = yyt4 = YYCURSOR;
		goto yy2;
	}
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = NULL;
	yyt5 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt2 = yyt4 = YYCURSOR;
		goto yy2;
	}
	goto yy4;
}

posix_captures/repetition/35_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/35_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/repetition/35_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
