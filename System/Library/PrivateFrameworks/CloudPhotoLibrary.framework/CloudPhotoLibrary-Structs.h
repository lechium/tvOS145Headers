/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned retryAfterMillis : 1;
	unsigned allowed : 1;
} SCD_Struct_CP1;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned completed : 1;
} SCD_Struct_CP3;

typedef struct {
	unsigned version : 1;
	unsigned reason : 1;
	unsigned defaultHEVC : 1;
} SCD_Struct_CP4;

typedef struct {
	unsigned unknown : 1;
	unsigned quarantined : 1;
	unsigned resetting : 1;
	unsigned uploaded : 1;
	unsigned waitingForUpload : 1;
	unsigned uploading : 1;
	unsigned waitingForUpdate : 1;
	unsigned updating : 1;
	unsigned confirmed : 1;
} SCD_Struct_CP5;

typedef union {
	SCD_Struct_CP5 status;
	unsigned packedStatus;
} SCD_Union_CP6;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	unsigned centerX : 1;
	unsigned centerY : 1;
	unsigned size : 1;
	unsigned faceState : 1;
	unsigned nameSource : 1;
} SCD_Struct_CP9;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CP10;

