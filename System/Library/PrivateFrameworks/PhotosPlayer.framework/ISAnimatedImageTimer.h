/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/ISObservable.h>

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

@interface ISAnimatedImageTimer : ISObservable {

	CADisplayLink* _displayLink;
	_ISAnimatedImageTimerForwardingProxy* _displayLinkProxy;
	double _timestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)sharedTimer;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(id)mutableChangeObject;
-(void)hasObserversDidChange;
-(void)_updateDisplayLink;
-(void)_fireTimerWithInterval:(double)arg1 ;
-(void)_setTimestamp:(double)arg1 ;
-(void)_iosInitialization;
-(void)_iosUpdateDisplayLink;
-(void)_iosAnimationTimerFired:(id)arg1 ;
-(void)_iosDealloc;
@end
