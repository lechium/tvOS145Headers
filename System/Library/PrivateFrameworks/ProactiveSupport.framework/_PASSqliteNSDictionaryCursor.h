/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/_PASSqliteKeyValueCursor.h>

@class NSDictionary, NSEnumerator;

@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {

	NSDictionary* _dictionary;
	NSEnumerator* _keysEnumerator;
	id _currentKey;
	id _currentValue;
	id _valueEqualTo;

}

@property (nonatomic,retain) NSDictionary * collection; 
+(const char*)sqliteMethodName;
+(id)planningInfoForKeyConstraint:(int)arg1 ;
-(void)setCollection:(NSDictionary *)arg1 ;
-(id)currentIndexedValue;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(void)stepIndexedRow;
-(void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)finalizeConstraints;
-(id)currentIndexedKey;
@end

