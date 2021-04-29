/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TIAnalyticsFieldSpec;

@interface FieldSpecTuple : NSObject {

	NSString* _key;
	TIAnalyticsFieldSpec* _fieldSpec;

}

@property (nonatomic,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) TIAnalyticsFieldSpec * fieldSpec;              //@synthesize fieldSpec=_fieldSpec - In the implementation block
+(id)tupleWithKey:(id)arg1 eventSpec:(id)arg2 ;
-(NSString *)key;
-(TIAnalyticsFieldSpec *)fieldSpec;
@end
