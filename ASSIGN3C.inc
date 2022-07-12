1                   J E S 2  J O B  L O G  --  S Y S T E M  2 9 6 4  --  N O D E  S V S C J E S 2
0
 19.03.03 JOB05813 ---- WEDNESDAY, 10 FEB 2021 ----
 19.03.03 JOB05813  IRR010I  USERID KC03D4D  IS ASSIGNED TO THIS JOB.
 19.03.03 JOB05813  ICH70001I KC03D4D  LAST ACCESS AT 18:51:01 ON WEDNESDAY, FEBRUARY 10, 2021
 19.03.03 JOB05813  $HASP373 KC03D4DA STARTED - INIT 3    - CLASS A        - SYS 2964
 19.03.03 JOB05813  $HASP395 KC03D4DA ENDED - RC=0000
0------ JES2 JOB STATISTICS ------
-  10 FEB 2021 JOB EXECUTION DATE
-           45 CARDS READ
-          105 SYSOUT PRINT RECORDS
-            0 SYSOUT PUNCH RECORDS
-           11 SYSOUT SPOOL KBYTES
-         0.00 MINUTES EXECUTION TIME
         1 //KC03D4DA JOB ,'L. JAOS',MSGCLASS=H                                    JOB05813
         2 //JSTEP01  EXEC PGM=ASSIST
         3 //STEPLIB  DD DSN=KC00NIU.ASSIST.LOADLIB,DISP=SHR
         4 //SYSPRINT DD SYSOUT=*
         5 //SYSIN    DD *
         6 //
 ICH70001I KC03D4D  LAST ACCESS AT 18:51:01 ON WEDNESDAY, FEBRUARY 10, 2021
 IEFA111I KC03D4DA IS USING THE FOLLOWING JOB RELATED SETTINGS:
          SWA=ABOVE,TIOT SIZE=32K,DSENQSHR=DISALLOW,GDGBIAS=JOB
 IEF236I ALLOC. FOR KC03D4DA JSTEP01
 IGD103I SMS ALLOCATED TO DDNAME STEPLIB
 IEF237I JES2 ALLOCATED TO SYSPRINT
 IEF237I JES2 ALLOCATED TO SYSIN
 IEF142I KC03D4DA JSTEP01 - STEP WAS EXECUTED - COND CODE 0000
 IGD104I KC00NIU.ASSIST.LOADLIB                       RETAINED,  DDNAME=STEPLIB
 IEF285I   KC03D4D.KC03D4DA.JOB05813.D0000102.?         SYSOUT
 IEF285I   KC03D4D.KC03D4DA.JOB05813.D0000101.?         SYSIN
 IEF373I STEP/JSTEP01 /START 2021041.1903
 IEF032I STEP/JSTEP01 /STOP  2021041.1903
         CPU:     0 HR  00 MIN  00.00 SEC    SRB:     0 HR  00 MIN  00.00 SEC
         VIRT:   584K  SYS:   244K  EXT:        0K  SYS:    11224K
         ATB- REAL:                  1056K  SLOTS:                     0K
              VIRT- ALLOC:      13M SHRD:       0M
 IEF375I  JOB/KC03D4DA/START 2021041.1903
 IEF033I  JOB/KC03D4DA/STOP  2021041.1903
         CPU:     0 HR  00 MIN  00.00 SEC    SRB:     0 HR  00 MIN  00.00 SEC
1*** ASSIST 4.0/A2-05/15/82  470/V7A/0:OS/VS2  INS=SDFP7/X=BGHO, CHECK/TRC/=1180, OPTS=CDKMPR FROM PENN ST*NIU COMPSCI*LT
0
0                                                                                                               PAGE    1
0  LOC  OBJECT CODE    ADDR1 ADDR2  STMT   SOURCE STATEMENT
                                       1 *****************************************************************
                                       2 *                                                               *
                                       3 *  CSCI 360-1/PE1           ASSIGNMENT 3           SPRING 2021  *
                                       4 *                                                               *
                                       5 *  DEVELOPER NAME: LEONART JAOS                                 *
                                       6 *  DATE DUE:  02/10/2021                                        *
                                       7 *                                                               *
                                       8 * PART C OF ASSIGNMENT 3. THE LABELS THAT WERE PREVIOUSLY STOR- *
                                       9 * ED IN LOCATIONS 030-03C, (NUM1,2 ANSWER1,2) HAVE BEEN REMOVED *
                                      10 * AND REPLACED WITH THE PROPER D(X,B) ADDRESSES IN THEIR PLACE. *
                                      11 *                                                               *
                                      12 *****************************************************************
                                      13 *        COL. 10
                                      14 *        |     COL. 16
                                      15 *        |     |
                                      16 *        v     v
 000000                               17 ASSIGN3C     CSECT
 000000                               18          USING ASSIGN3C,15     ESTABLISH ADDRESSABILITY ON REG 15
 000000 E160 0000 0000 00000          19          XDUMP ,           DUMP CONTENTS OF ALL 16 REGS
 000006 5810 F030            00030    20          L     1,48(,15)      LOAD VAL IN NUM1 TO REG 1
 00000A 5820 F034            00034    21          L     2,52(,15)      LOAD VAL IN NUM2 TO REG 2
 00000E 1B12                          22          SR    1,2         VAL IN REG1 = VAL REG1 - VAL REG2
 000010 5830 F030            00030    23          L     3,48(,15)      LOAD VAL IN NUM1 TO REG 3
 000014 5840 F034            00034    24          L     4,52(,15)      LOAD VAL IN NUM2 TO REG 4
 000018 1A43                          25          AR    4,3         VAL IN REG4 = VAL REG4 + VAL REG3
 00001A 5010 F038            00038    26          ST    1,56(,15)   STORE VAL IN REG 1 INTO MEM AT ANSWER1
 00001E 5040 F03C            0003C    27          ST    4,60(,15)   STORE VAL IN REG 4 INTO MEM AT ANSWER2
 000022 E060 F038 0008 00038          28          XDUMP 56(,15),8   DUMP 8 BYTES BEGINNING AT LABEL ANSWER1
 000028 E160 0000 0000 00000          29          XDUMP ,           DUMP CONTENTS OF ALL 16 REGS
 00002E 07FE                          30          BCR   B'1111',14  UNCONDITIONAL RETURN TO CALLER (OS)
                                      31 *
                                      32          LTORG             LITERAL ORGANIZATION
 000030 000000AD                      33 NUM1     DC     F'173'     FULLWORD VAR FOR NUM1
 000034 0000005D                      34 NUM2     DC     F'93'      FULLWORD VAR FOR NUM2
 000038                               35 ANSWER1  DS     F          FULLWORD STORAGE FOR NUMBER
 00003C                               36 ANSWER2  DS     F          FULLWORD STORAGE FOR NUMBER
                                      37 *
                                      38          END   ASSIGN3C
0***  NO   STATEMENTS FLAGGED -  NO   WARNINGS,  NO   ERRORS
0*** DYNAMIC CORE AREA USED:  LOW:    1436 HIGH:     420 LEAVING:  491712 FREE BYTES. AVERAGE:       47 BYTES/STMT ***
0*** ASSEMBLY TIME =    0.000 SECS,    39000 STATEMENTS/SEC ***
0*** PROGRAM EXECUTION BEGINNING - ANY OUTPUT BEFORE EXECUTION TIME MESSAGE IS PRODUCED BY USER PROGRAM ***
0BEGIN XSNAP - CALL     1 AT C0000006 USER REGISTERS
0 REGS 0-7      F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4
  REGS 8-15     F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    00000040    FFFE7960    00000000
0
0BEGIN XSNAP - CALL     2 AT E0000028 USER STORAGE
1                             CORE ADDRESSES SPECIFIED-     000038 TO 000040
 000020   F03CE060 F0380008 E1600000 000007FE    000000AD 0000005D 00000050 0000010A   *0...0...........................*
0
0BEGIN XSNAP - CALL     3 AT E000002E USER REGISTERS
0 REGS 0-7      F4F4F4F4    00000050    0000005D    000000AD    0000010A    F4F4F4F4    F4F4F4F4    F4F4F4F4
  REGS 8-15     F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    F4F4F4F4    00000040    FFFE7960    00000000
0
0*** EXECUTION TIME =    0.000 SECS.        12 INSTRUCTIONS EXECUTED -    12000 INSTRUCTIONS/SEC ***
0*** FIRST CARD NOT READ: NO CARDS READ:FILE UNOPENED
0*** AM004 - NORMAL USER TERMINATION BY RETURN ***