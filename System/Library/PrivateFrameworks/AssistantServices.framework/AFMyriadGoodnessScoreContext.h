/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AFMyriadGoodnessScoreOverrideContext, NSSet;

@interface AFMyriadGoodnessScoreContext : NSObject {

	AFMyriadGoodnessScoreOverrideContext* _overriddenContext;
	NSSet* _reasons;
	double _mediaPlaybackInterruptedTime;

}

@property (nonatomic,copy) NSSet * reasons;                                    //@synthesize reasons=_reasons - In the implementation block
@property (assign,nonatomic) double mediaPlaybackInterruptedTime;              //@synthesize mediaPlaybackInterruptedTime=_mediaPlaybackInterruptedTime - In the implementation block
-(id)description;
-(id)init;
-(NSSet *)reasons;
-(void)setReasons:(NSSet *)arg1 ;
-(void)setOverridingContext:(id)arg1 ;
-(id)getOverridingContext;
-(double)mediaPlaybackInterruptedTime;
-(void)setMediaPlaybackInterruptedTime:(double)arg1 ;
@end

