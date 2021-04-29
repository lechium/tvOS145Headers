/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct {
	unsigned field1[8];
} SCD_Struct_SW0;

typedef struct SWCPatternStorage {
	unsigned blocking : 1;
	unsigned hasPath : 1;
	unsigned hasFragment : 1;
	unsigned query : 2;
	unsigned caseInsensitive : 1;
	unsigned notPercentEncoded : 1;
	unsigned hasRequiredEntitlement : 1;
	0c cStrings;
} SWCPatternStorage;

typedef struct SWCSubstitutionVariable {
	unsigned terminator : 1;
	unsigned includesEmptyValue : 1;
	unsigned allValuesAreOneCharLong : 1;
	0c cStrings;
} SWCSubstitutionVariable;

typedef struct _NSZone* NSZoneRef;

typedef struct SWCFields {
	unsigned userApproval : 2;
	unsigned siteOrFrameworkApproval : 2;
	unsigned updating : 1;
	unsigned systemApplication : 1;
	unsigned enabledConfiguration : 2;
	unsigned lowBitsOfProvenance_getRidOfMeOnNextDBVersionChange : 2;
	unsigned provenance : 3;
	char relativeOrder;
} SWCFields;

