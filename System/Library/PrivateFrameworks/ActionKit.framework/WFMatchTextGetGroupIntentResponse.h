/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentResponse.h>

@class NSArray, NSNumber;

@interface WFMatchTextGetGroupIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;                              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSArray * text; 
@property (nonatomic,copy) NSNumber * noMatchIndex; 
@property (nonatomic,copy) NSNumber * rangeErrorGroupNumber; 
@property (nonatomic,copy) NSNumber * rangeErrorGroupCount; 
+(id)noMatchIntentResponseWithNoMatchIndex:(id)arg1 ;
+(id)rangeErrorIntentResponseWithRangeErrorGroupNumber:(id)arg1 rangeErrorGroupCount:(id)arg2 ;
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end

