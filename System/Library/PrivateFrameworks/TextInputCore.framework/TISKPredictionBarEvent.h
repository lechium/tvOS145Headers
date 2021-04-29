/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKTimestampEvent.h>

@class NSString;

@interface TISKPredictionBarEvent : TISKTimestampEvent {

	BOOL _emojiPrediction;
	NSString* _emojiBucketCategory;

}

@property (assign,nonatomic) BOOL emojiPrediction;                        //@synthesize emojiPrediction=_emojiPrediction - In the implementation block
@property (nonatomic,retain) NSString * emojiBucketCategory;              //@synthesize emojiBucketCategory=_emojiBucketCategory - In the implementation block
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(double)arg1 emojiPrediction:(BOOL)arg2 emojiSearchMode:(BOOL)arg3 order:(long long)arg4 emojiBucketCategory:(id)arg5 ;
-(BOOL)emojiPrediction;
-(void)setEmojiPrediction:(BOOL)arg1 ;
-(NSString *)emojiBucketCategory;
-(void)setEmojiBucketCategory:(NSString *)arg1 ;
@end

