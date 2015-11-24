/* Generated by re2c */

#include <stdio.h>
#include <stdlib.h> /* malloc, free */

static void *read_file
    ( const char *fname
    , size_t unit
    , size_t padding
    , size_t *pfsize
    )
{
    void *buffer = NULL;
    size_t fsize = 0;

    /* open file */
    FILE *f = fopen(fname, "rb");
    if(f == NULL) {
        goto error;
    }

    /* get file size */
    fseek(f, 0, SEEK_END);
    fsize = (size_t) ftell(f) / unit;
    fseek(f, 0, SEEK_SET);

    /* allocate memory for file and padding */
    buffer = malloc(unit * (fsize + padding));
    if (buffer == NULL) {
        goto error;
    }

    /* read the whole file in memory */
    if (fread(buffer, unit, fsize, f) != fsize) {
        goto error;
    }

    fclose(f);
    *pfsize = fsize;
    return buffer;

error:
    fprintf(stderr, "error: cannot read file '%s'\n", fname);
    free(buffer);
    if (f != NULL) {
        fclose(f);
    }
    return NULL;
}

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYBACKUP() marker = cursor
#define YYRESTORE() cursor = marker
#define YYBACKUPCTX() ctxmarker = cursor
#define YYRESTORECTX() cursor = ctxmarker
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line26
    ( unsigned int i
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys [3 * i + 1];
    const YYKEYTYPE rule_exp = keys [3 * i + 2];
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line26: control flow is undefined for input"
                " at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[3 * i];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line26: at position %ld (iteration %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , i
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

int lex_line26()
{
    const size_t padding = 13; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ("input_custom_fgetc.S--input(custom).c.line26.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ("input_custom_fgetc.S--input(custom).c.line26.keys"
        , 3 * sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && i < keys_count; ++i) {
        token = cursor;
        const YYCTYPE *marker = NULL;
        const YYCTYPE *ctxmarker = NULL;
        YYCTYPE yych;

        if (YYLESSTHAN (13)) YYFILL(13);
        yych = YYPEEK ();
        switch (yych) {
        case 'i':    goto yy4;
        default:    goto yy2;
        }
yy2:
        YYSKIP ();
yy3:
        status = action_line26(i, keys, input, token, &cursor, 254);
        continue;
yy4:
        YYSKIP ();
        YYBACKUP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'n':    goto yy5;
        default:    goto yy3;
        }
yy5:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 't':    goto yy7;
        default:    goto yy6;
        }
yy6:
        YYRESTORE ();
        goto yy3;
yy7:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case ' ':    goto yy8;
        default:    goto yy6;
        }
yy8:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'b':    goto yy9;
        default:    goto yy6;
        }
yy9:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'u':    goto yy10;
        default:    goto yy6;
        }
yy10:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'f':    goto yy11;
        default:    goto yy6;
        }
yy11:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'f':    goto yy12;
        default:    goto yy6;
        }
yy12:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'e':    goto yy13;
        default:    goto yy6;
        }
yy13:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case 'r':    goto yy14;
        default:    goto yy6;
        }
yy14:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case ' ':    goto yy15;
        default:    goto yy6;
        }
yy15:
        YYSKIP ();
        yych = YYPEEK ();
        YYBACKUPCTX ();
        switch (yych) {
        case '[':    goto yy16;
        default:    goto yy6;
        }
yy16:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy17;
        default:    goto yy6;
        }
yy17:
        YYSKIP ();
        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        switch (yych) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy17;
        case ']':    goto yy19;
        default:    goto yy6;
        }
yy19:
        YYSKIP ();
        YYRESTORECTX ();
        status = action_line26(i, keys, input, token, &cursor, 0);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line26: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line26: unused keys left after %u iterations\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYBACKUP
#undef YYRESTORE
#undef YYBACKUPCTX
#undef YYRESTORECTX
#undef YYLESSTHAN
#undef YYFILL

int main()
{
    if(lex_line26() != 0) {
        return 1;
    }
    return 0;
}
 hj�int buffer [00]int buffer [99]int buffer [00 int buffer [99/int buffer [00:int buffer [99\int buffer [00^int buffer [99�int buffer [0]int buffer [9]int buffer [0 int buffer [9/int buffer [0:int buffer [9\int buffer [0^int buffer [9�int buffer [ int buffer [/int buffer [:int buffer [�int buffer  int buffer Zint buffer \int buffer �int buffer int bufferint buffer!int buffer�int buffe int buffeqint buffesint buffe�int buff int buffdint bufffint buff�int buf int bufeint bufgint buf�int bu int bueint bugint bu�int b int btint bvint b�int  int aint cint �int intint!int�in insinuin�i imioi�����  ������  ������������������
�
�
�
�	�	�	�	�����������������������������