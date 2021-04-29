/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 28;
} SCD_Struct_PF2;

typedef struct {
	unsigned field1;
	double field2;
	unsigned long long field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	SCD_Struct_PF2 field8;
	int field9;
	void field10;
	unsigned field11;
	void field12;
	void field13;
} SCD_Struct_PF3;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_PF4;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned val[8];
} SCD_Struct_NS6;

typedef struct objc_method* objc_methodRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct {
	void field1;
	id field2;
	id field3;
	id field4;
	id field5;
} SCD_Struct_NS13;

typedef struct {
	int field1;
	void field2;
	id field3;
	unsigned long long field4;
	unsigned char field5;
	unsigned long long field6;
	void field7;
	unsigned char field8[32];
	char* field9;
	_moFactoryClassFlags field10;
} SCD_Struct_NS14;

typedef struct {
	id field1;
	SEL field2;
	void field3;
} SCD_Struct_NS15;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct __CFSet* CFSetRef;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_NS18;

typedef struct __CFBitVector* CFBitVectorRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct double_quad_uint {
	unsigned long long high64;
	unsigned long long low64;
} double_quad_uint;

typedef struct {
	int field1;
	void field2;
	id field3;
	unsigned long long field4;
	unsigned char field5;
	unsigned long long field6;
	void field7;
	id field8;
	char* field9;
	_moFactoryClassFlags field10;
} SCD_Struct_NS23;

typedef struct sqlite3_intarray* sqlite3_intarrayRef;

