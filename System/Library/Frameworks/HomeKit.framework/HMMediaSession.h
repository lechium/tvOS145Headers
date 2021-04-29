/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HMMediaSessionDelegate.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMMediaSessionDelegate;
@class NSUUID, HMAudioControl, NSString, _HMMediaSession, HMMediaProfile;

@interface HMMediaSession : NSObject <_HMMediaSessionDelegate, HMObjectMerge, NSSecureCoding> {

	NSUUID* _uuid;
	HMAudioControl* _audioControl;
	NSString* _mediaUniqueIdentifier;
	NSString* _routeUID;
	id<HMMediaSessionDelegate> _delegate;
	_HMMediaSession* _mediaSession;
	HMMediaProfile* _mediaProfile;

}

@property (nonatomic,retain) _HMMediaSession * mediaSession;                //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (__weak) HMMediaProfile * mediaProfile;                           //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (nonatomic,readonly) NSString * routeUID;                         //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (__weak) id<HMMediaSessionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long playbackState; 
@property (readonly) long long shuffleState; 
@property (readonly) long long repeatState; 
@property (copy,readonly) NSString * mediaUniqueIdentifier;                 //@synthesize mediaUniqueIdentifier=_mediaUniqueIdentifier - In the implementation block
@property (readonly) HMAudioControl * audioControl;                         //@synthesize audioControl=_audioControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMMediaSessionDelegate>)delegate;
-(void)setDelegate:(id<HMMediaSessionDelegate>)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMMediaProfile *)mediaProfile;
-(long long)playbackState;
-(NSString *)routeUID;
-(id)messageTargetUUID;
-(void)_unconfigure;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(_HMMediaSession *)mediaSession;
-(void)configure:(id)arg1 messageTargetUUID:(id)arg2 ;
-(id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 shuffleState:(long long)arg4 repeatState:(long long)arg5 mediaUniqueIdentifier:(id)arg6 ;
-(void)updateMediaState:(id)arg1 ;
-(void)setMediaSession:(_HMMediaSession *)arg1 ;
-(HMAudioControl *)audioControl;
-(void)refreshPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2 ;
-(void)mediaSessionDidUpdate:(id)arg1 ;
-(long long)shuffleState;
-(long long)repeatState;
-(NSString *)mediaUniqueIdentifier;
-(void)mediaSession:(id)arg1 didUpdateRouteUID:(id)arg2 ;
-(void)updatePlaybackState:(id)arg1 ;
-(id)playbackStateDescription;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updatePlaybackState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMediaProfile:(HMMediaProfile *)arg1 ;
@end

