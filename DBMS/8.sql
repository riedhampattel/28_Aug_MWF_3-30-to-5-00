BEGIN
	DBMS_OUTPUT.PUT_LINE('HELLO WORLD!');
	DBMS_OUTPUT.PUT('HOW ARE YOU?');
	DBMS_OUTPUT.PUT_LINE(' BYE');
END;

DECLARE
	NUM NUMBER := 15;
BEGIN
	DBMS_OUTPUT.PUT_LINE('VALUE OF NUMBER = '||NUM);
END;

-- WRITE A PROGRAM TO SWAP VALUES OF TWO VARIABLES USING THIRD VARIABLE
DECLARE
	NUM1 NUMBER := 10;
	NUM2 NUMBER := 20;
	NUM3 NUMBER;
BEGIN
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF NUM1 BEFORE SWAPPING = '||NUM1);
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF NUM2 BEFORE SWAPPING = '||NUM2);
	NUM3 := NUM1;
	NUM1 := NUM2;
	NUM2 := NUM3;
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF NUM1 AFTER SWAPPING = '||NUM1);
	DBMS_OUTPUT.PUT_LINE('THE VALUE OF NUM2 AFTER SWAPPING = '||NUM2);
END;

-- WRITE A PROGRAM TO MAKE BASIC CALCULATOR
DECLARE 
	NUM1 NUMBER := 10;
	NUM2 NUMBER := 20;
BEGIN
	DBMS_OUTPUT.PUT_LINE('THE ADDITION IS = '|| (NUM1 + NUM2));
	DBMS_OUTPUT.PUT_LINE('THE SUBTRACTION IS = '|| (NUM1 - NUM2));
	DBMS_OUTPUT.PUT_LINE('THE MULTIPLICATION IS = '|| (NUM1 * NUM2));
	DBMS_OUTPUT.PUT_LINE('THE DIVISION IS = '|| (NUM1 / NUM2));
	DBMS_OUTPUT.PUT_LINE('THE REMAINDER IS = '|| MOD(NUM1,NUM2));
END;

-- BLOCKS
DECLARE -- FIRST BLOCK STARTS
	X NUMBER := 10;
BEGIN
	DECLARE -- SECOND BLOCK STARTS
		Y NUMBER := 20;
	BEGIN
		DECLARE -- THIRD BLOCK STARTS
			Z NUMBER := 30;
		BEGIN
            DBMS_OUTPUT.PUT_LINE('THIRD BLOCK := ');
			DBMS_OUTPUT.PUT_LINE('VALUE OF X = '||X);
			DBMS_OUTPUT.PUT_LINE('VALUE OF Y = '||Y);
			DBMS_OUTPUT.PUT_LINE('VALUE OF Z = '||Z);
		END; -- THIRD BLOCK ENDS
		DBMS_OUTPUT.PUT_LINE('SECOND BLOCK := ');
		DBMS_OUTPUT.PUT_LINE('VALUE OF X = '||X);
		DBMS_OUTPUT.PUT_LINE('VALUE OF Y = '||Y);
	END; -- SECOND BLOCK ENDS
	DBMS_OUTPUT.PUT_LINE('FIRST BLOCK := ');
	DBMS_OUTPUT.PUT_LINE('VALUE OF X = '||X);
END; -- FIRST BLOCK ENDS

-- WRITE A PROGRAM TO CHECK WHETHER NUMBER IS ODD OR EVEN
DECLARE
	NUM NUMBER := 8;
BEGIN
	IF MOD(NUM,2) = 0 THEN
		DBMS_OUTPUT.PUT_LINE(NUM||' IS AN EVEN NUMBER');
	ELSE
		DBMS_OUTPUT.PUT_LINE(NUM||' IS AN ODD NUMBER');
	END IF;
END;

DECLARE
	NUM1 NUMBER := 10;
	NUM2 NUMBER := 20;
	NUM3 NUMBER := 30;
BEGIN
	IF NUM1>NUM2 AND NUM1>NUM3 THEN
		DBMS_OUTPUT.PUT_LINE(NUM1||' IS THE BIGGEST NUMBER');
	ELSIF NUM2>NUM1 AND NUM2>NUM3 THEN
		DBMS_OUTPUT.PUT_LINE(NUM2||' IS THE BIGGEST NUMBER');
	ELSE
		DBMS_OUTPUT.PUT_LINE(NUM3||' IS THE BIGGEST NUMBER');
	END IF;
END;

-- SIMPLE LOOP
DECLARE
	I NUMBER := 1;
BEGIN
	LOOP
		DBMS_OUTPUT.PUT_LINE(I||'. TOPS TECHNOLOGIES');
		I := I + 1;
		IF I = 6 THEN
			EXIT;
		END IF;
	END LOOP;
END;

-- SIMPLE LOOP
DECLARE
	I NUMBER := 1;
BEGIN
	LOOP
		DBMS_OUTPUT.PUT_LINE(I||'. TOPS TECHNOLOGIES');
		I := I + 1;
		EXIT WHEN I = 6;
	END LOOP;
END;

-- FOR LOOP
BEGIN
	FOR X IN 1..5 LOOP
		DBMS_OUTPUT.PUT_LINE(X||'. TOPS TECHNOLOGIES');
	END LOOP;
END;

-- FOR LOOP
DECLARE
	X NUMBER := 1;
BEGIN
	FOR I IN 1..5 LOOP
		DBMS_OUTPUT.PUT_LINE(X);
		X := X + 1;
	END LOOP;
END;

-- WHILE LOOP
DECLARE 
	X NUMBER := 1;
BEGIN
	WHILE X<=5 LOOP
		DBMS_OUTPUT.PUT_LINE(X||'. TOPS TECHNOLOGIES');
		X := X + 1;
	END LOOP;
END;

-- PRACTICE QUESTIONS
DECLARE
	ROW NUMBER := 3;
	COL NUMBER := 4;
BEGIN
	FOR X IN 1..ROW LOOP
		FOR Y IN 1..COL LOOP
			DBMS_OUTPUT.PUT('* ');
		END LOOP;
		DBMS_OUTPUT.PUT_LINE(' ');
	END LOOP;
END;

DECLARE
	ROW NUMBER := 5;
	SPC NUMBER := 4;
BEGIN
	FOR X IN 1..ROW LOOP
		FOR Y IN 1..SPC LOOP
			DBMS_OUTPUT.PUT(' ');
		END LOOP;
		FOR Z IN 1..X LOOP
			DBMS_OUTPUT.PUT('* ');
		END LOOP;
		DBMS_OUTPUT.PUT_LINE(' ');
		SPC := SPC-1;
	END LOOP;
END;

DECLARE
	ROW NUMBER := 5;
BEGIN
	FOR I IN 1..ROW LOOP
		FOR J IN 1..I LOOP
			IF MOD(J,2)=0 THEN
				DBMS_OUTPUT.PUT('0 ');
			ELSE
				DBMS_OUTPUT.PUT('1 ');
			END IF;
		END LOOP;
		DBMS_OUTPUT.PUT_LINE(' ');
	END LOOP;
END;

DECLARE
	ROW NUMBER := 5;
	SPC NUMBER := 4;
	STAR NUMBER := 4;
BEGIN
	FOR X IN 1..ROW LOOP
		FOR Y IN 1..SPC LOOP
			DBMS_OUTPUT.PUT(' ');
		END LOOP;
		FOR Z IN 1..X LOOP
			DBMS_OUTPUT.PUT('* ');
		END LOOP;
		DBMS_OUTPUT.PUT_LINE(' ');
		SPC := SPC-1;
	END LOOP;
	FOR X IN 1..ROW-1 LOOP
        FOR Y IN 1..X LOOP
        	DBMS_OUTPUT.PUT(' ');
		END LOOP;
		FOR Z IN 1..STAR LOOP
            DBMS_OUTPUT.PUT('* ');
		END LOOP;
		DBMS_OUTPUT.PUT_LINE(' ');
		STAR := STAR - 1;
	END LOOP;
END;

select * from employees;

--EXPLICIT CURSOR
DECLARE
	EID EMPLOYEES.EMPLOYEE_ID%TYPE;
	FNAME EMPLOYEES.FIRST_NAME%TYPE;
	SAL EMPLOYEES.SALARY%TYPE;
	CURSOR EMP IS SELECT EMPLOYEE_ID,FIRST_NAME,SALARY FROM EMPLOYEES; 
BEGIN
	OPEN EMP;
	LOOP
	FETCH EMP INTO EID,FNAME,SAL;
	DBMS_OUTPUT.PUT_LINE(EID||' ---> '||FNAME||' ---> '||SAL);
	EXIT WHEN EMP%NOTFOUND;
	END LOOP;
	CLOSE EMP;
END;

-- IMPLICIT CURSOR
DECLARE
	ROW_NUMBER NUMBER := 0;
BEGIN
	UPDATE EMPLOYEES SET SALARY = SALARY + 2000 WHERE DEPARTMENT_ID = 90;
	IF SQL%FOUND THEN
		ROW_NUMBER := SQL%ROWCOUNT;
	ELSE
		DBMS_OUTPUT.PUT_LINE('NO EMPLOYEES UPDATED');
	END IF;
		DBMS_OUTPUT.PUT_LINE('UPDATED EMPLOYEES = '||ROW_NUMBER);
END;