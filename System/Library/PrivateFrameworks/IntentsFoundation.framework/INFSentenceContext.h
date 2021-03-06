/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface INFSentenceContext : NSObject {

	NSNumber* _number;
	unsigned long long _gender;

}

@property (nonatomic,copy) NSNumber * number;                        //@synthesize number=_number - In the implementation block
@property (assign,nonatomic) unsigned long long gender;              //@synthesize gender=_gender - In the implementation block
+(id)sentenceContext;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(id)combinedWithContext:(id)arg1 ;
@end

