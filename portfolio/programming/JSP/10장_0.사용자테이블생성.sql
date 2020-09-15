오라클 system계정 암호변경, 계정잠김풀기
    sysdba 접속
        C:\>sqlplus / as sysdba
    패스워드 제약일수 해제    
        SQL> ALTER PROFILE DEFAULT LIMIT PASSWORD_LIFE_TIME UNLIMITED;
    계정 암호 변경
        SQL> alter user system identified by "123456";
    계정 잠김 해제
        SQL> alter user system account unlock;
	종료
        SQL> exit;
---------------------------------------------------------
사용자 생성
    command 창에서 
	sqlplus system/123456
    create user dev identified by 123456;
    alter user dev account unlock;
    grant create view, connect, resource to dev;
	exit;
---------------------------------------------------------
테이블 생성
    command 창에서 
	sqlplus dev/123456

CREATE TABLE DEPT(    
    DEPTNO NUMBER(4)
  , DNAME VARCHAR2(10)
  , LOC VARCHAR2(9) 
);  

INSERT  INTO  DEPT	VALUES(10,  '임원실',  '서울');
INSERT  INTO  DEPT	VALUES(20,  '인사부',  '서울');
INSERT  INTO  DEPT	VALUES(30,  '생산부',  '대구');
INSERT  INTO  DEPT	VALUES(40,  '영업부',  '서울');
commit;

CREATE TABLE DEPT02 AS SELECT * FROM DEPT;

CREATE TABLE CUSTOMER(
    CODE  NUMBER(3)     PRIMARY KEY
  , NAME  VARCHAR2(30)  NOT NULL
  , EMAIL VARCHAR2(30)	NOT NULL
  , TEL   VARCHAR2(35)	NOT NULL
  , ASSET NUMBER(20,3)	NOT NULL
);
-----------------------------------------------------------
INSERT INTO CUSTOMER VALUES (
     1, '강지아', 'JEEA@SHOP.COM', '02-137-1484', 123.123);
INSERT INTO CUSTOMER VALUES (
     2, '이장미', 'ROSE@SHOP.COM', '02-523-8715', 12345678901234567.123);
INSERT INTO CUSTOMER VALUES (
     3, '김백합', 'LILY@SHOP.COM', '02-789-2359', 1.1);
INSERT INTO CUSTOMER VALUES (
     4, '홍길순', 'IMLEE@GMAIL.COM', '02-523-1234', 92345678901234567.123);
INSERT INTO CUSTOMER VALUES (
     5, '홍길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
     6, '가길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
    16, '나길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
    26, '다길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
    36, '라길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
    46, '마길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
    56, '바길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
    66, '사길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
INSERT INTO CUSTOMER VALUES (
    76, '아길동', 'imhong@GMAIL.COM', '02-555-1234', 82345678901234567.123);
COMMIT;

 