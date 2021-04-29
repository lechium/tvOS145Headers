/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKEvent.h>

@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent {

	TISKSessionSamples* _sessionSamples;

}

@property (nonatomic,retain) TISKSessionSamples * sessionSamples;              //@synthesize sessionSamples=_sessionSamples - In the implementation block
-(id)description;
-(id)privateDescription;
-(void)reportToSession:(id)arg1 ;
-(id)init:(id)arg1 emojiSearchMode:(BOOL)arg2 order:(long long)arg3 ;
-(TISKSessionSamples *)sessionSamples;
-(void)setSessionSamples:(TISKSessionSamples *)arg1 ;
@end
