/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVPlayer, AVWeakReference, AVQueuePlayer, NSArray, AVPlayerInterstitialEvent;

@interface AVPlayerInterstitialEventObserver : NSObject {

	AVPlayer* _primaryPlayer;
	AVWeakReference* _weakReference;

}

@property (nonatomic,__weak,readonly) AVPlayer * primaryPlayer; 
@property (nonatomic,__weak,readonly) AVQueuePlayer * interstitialPlayer; 
@property (readonly) NSArray * events; 
@property (readonly) NSArray * interstitialEvents; 
@property (readonly) AVPlayerInterstitialEvent * currentEvent; 
+(id)interstitialEventObserverWithPrimaryPlayer:(id)arg1 ;
+(id)playerInterstitialEventObserverWithPrimaryPlayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)events;
-(AVPlayerInterstitialEvent *)currentEvent;
-(AVQueuePlayer *)interstitialPlayer;
-(id)initWithPrimaryPlayer:(id)arg1 ;
-(void)_addObserverListeners;
-(void)_removeObserverListeners;
-(AVPlayer *)primaryPlayer;
-(NSArray *)interstitialEvents;
@end

