/* Generated by re2c */
#line 1 "config/config7a.g.re"

#line 5 "config/config7a.g.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'E') {
		if (yych <= '@') goto yy2;
		if (yych <= 'D') goto yy4;
	} else {
		if (yych <= 'G') goto yy4;
		if (yych <= '`') goto yy2;
		if (yych <= 'g') goto yy4;
	}
yy2:
	++YYCURSOR;
#line 12 "config/config7a.g.re"
	{ return -1; }
#line 22 "config/config7a.g.c"
yy4:
	++YYCURSOR;
#line 10 "config/config7a.g.re"
	{ return 1; }
#line 27 "config/config7a.g.c"
}
#line 14 "config/config7a.g.re"
