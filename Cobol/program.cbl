000100 IDENTIFICATION DIVISION.
000200 PROGRAM-ID. HelloWorld.

000300 DATA DIVISION.
000400 WORKING-STORAGE SECTION.
000500 01 myString PIC X(12) VALUE SPACES.
000600 01 myInt PIC 9(2) VALUE ZEROS.
000700 01 myFloat PIC 9(2)V9(2) VALUE ZEROS.
000800 01 myCounter PIC 9(4) VALUE ZEROS.

000900 PROCEDURE DIVISION.
001000     PERFORM initValues.
001100     PERFORM allLoops.
001200     DISPLAY myString.
001300     PERFORM myConcat.
001400     DISPLAY myString.
001500     CALL 'MULTI-PARAM-FUNCTION' USING BY REFERENCE
001510         myInt, myFloat.
001600     STOP RUN.

001700 initValues.
001800     MOVE 'Hello' TO myString.
001900     MOVE 42 TO myInt.
002000     MOVE 42.42 TO myFloat.

002100 allLoops.
002200     PERFORM startingFunction THRU endingFunction.
002300     MOVE 0 TO myCounter.
002900     PERFORM VARYING myCounter FROM 1 BY 1 UNTIL myCounter > 4
003000         DISPLAY myCounter
003100     END-PERFORM.
002400     PERFORM UNTIL myCounter >= 8
002500         ADD 1 TO myCounter
002600         DISPLAY myCounter
002700     END-PERFORM.
003300     PERFORM 8 TIMES
003400         multiply myCounter by 2 giving myCounter
003500         DISPLAY myCounter
003600     END-PERFORM.

003700 myConcat.
003800     MOVE ' World!' TO myString (6:7).

003900 startingFunction.
004000     DISPLAY 'Executing the starting function'.
004100     EXIT.

004200 goingThroughFunction.
004300     DISPLAY 'Executing the going through function'.
004400     EXIT.

004500 endingFunction.
004600     DISPLAY 'Executing the ending function'.
004700     EXIT.
