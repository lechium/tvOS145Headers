/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSString;

@interface PPSQLColumnMapping : NSObject {

	const PPCompactStringArrayRef _columnAliases;
	const PPCompactStringArrayRef _tableColumnNamesFromSchema;
	NSString* _uniqueTableName;

}
-(void)dealloc;
-(id)initWithStatement:(id)arg1 ;
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)indexForColumnAlias:(const char*)arg1 ;
@end

