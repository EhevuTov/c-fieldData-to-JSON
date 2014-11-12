#ifndef CRITERIA_VALUE_H
#define CRITERIA_VALUE_H

//#include <afxtempl.h>
// typedef unsigned char	byte;
// typedef int				int32;
// typedef	short			int16;




enum EntryType
{
	ENTRY_NONE     =0,
	ENTRY_FROM     =1,
	ENTRY_TO       =2,
//	ENTRY_X_FROM   =3,
//	ENTRY_X_TO     =4,
	ENTRY_EQUAL    =5,
	ENTRY_NOT_EQUAL=6,
};

enum PresenceType
{
	PRESENCE_ABSENT =0,
	PRESENCE_PRESENT=1,
	PRESENCE_IGNORE =2,
};

enum DataType
{
	TYPE_NONE        =0,
	TYPE_BINARY		 =1,
	TYPE_DIGITS		 =2,
	TYPE_DIGITS_NPA	 =3,
	TYPE_DIGITS_NXX	 =4,
	TYPE_DIGITS_LINE =5,
	TYPE_ASCII       =6,
	TYPE_DIGITS_ESN	 =7,
	TYPE_ENUM		 =8,
	TYPE_PNT_CODE	 =9,
	TYPE_DURATION	 =10,
	TYPE_DATE_TIME	 =11,
    TYPE_IP_ADDRESS  =12,
    TYPE_BYTES       =13,
    TYPE_DIGITS_BCD  =14,
    TYPE_HOT_NUMBER  =15
};

const int MAX_VAL_SIZE=81;



#endif
