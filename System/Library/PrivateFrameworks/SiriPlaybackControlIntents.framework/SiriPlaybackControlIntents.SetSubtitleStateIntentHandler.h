/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SetSubtitleStateIntentHandling.h>

@interface SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;
	 aceServiceHelper;

}
-(id)init;
-(void)handleSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDeviceForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveLanguageForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

