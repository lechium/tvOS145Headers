/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSURL, NSNumber;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent {

	BOOL _requestingPlaybackInitialization;
	NSURL* _stationURL;
	NSNumber* _privateListeningOverride;

}

@property (nonatomic,readonly) NSURL * stationURL;                                                                           //@synthesize stationURL=_stationURL - In the implementation block
@property (getter=isRequestingPlaybackInitialization,nonatomic,readonly) BOOL requestingPlaybackInitialization;              //@synthesize requestingPlaybackInitialization=_requestingPlaybackInitialization - In the implementation block
@property (nonatomic,readonly) NSNumber * privateListeningOverride;                                                          //@synthesize privateListeningOverride=_privateListeningOverride - In the implementation block
-(NSURL *)stationURL;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSNumber *)privateListeningOverride;
-(BOOL)isRequestingPlaybackInitialization;
@end
