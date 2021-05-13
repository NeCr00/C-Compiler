
PROGRAM x

STRUCT test1
    VARS
    INTEGER X;
    

ENDSTRUCT


FUNCTION test (INTEGER x, CHAR x)
VARS
FLOAT x=2;

x=0;

RETURN 1;

END_FUNCTION



STARTMAIN

VARS
INTEGER X=1,y=3,d=3;
FLOAT x[10],y=1.1;

PRINT("aaaa");

var2 = var3 + 5 * 2^(3-7/(var1+var3));

test(1)

STRUCT test1 t

WHILE (x>10)
    var =1;
    IF(var == 1) THEN
        x=x+1;
    ENDIF
    
    FOR counter:=1 TO 20 STEP 1
        x=x+1,Y=2;
    ENDFOR
    BREAK
ENDWHILE

SWITCH(c)
    CASE (1):
        x=1;
    CASE (2):
        x=2;
    DEFAULT:
        x=0;
ENDSWITCH

PRINT("TEST PASSED"[10]);

ENDMAIN

