/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class CADisplayLink, NSTimer, NSLock;

@interface SUICTickMarkView : UIView {

	CADisplayLink* _displayLink;
	BOOL _shown;
	long long _currentPreferredFrameRate;
	long long _currentFrame;
	int _animState;
	NSTimer* _safetyTimer;
	BOOL _completionCalled;
	/*^block*/id _completionBlock;
	NSLock* _completionLock;
	long long _fadeInFrames;
	long long _pauseFrames;
	long long _fadeOutFrames;

}
+(void)initialize;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)setUpDisplayLink;
-(CGImageRef)imageMask:(BOOL)arg1 ;
-(void)handleSafetyTimer:(id)arg1 ;
-(void)tearDownDisplayLink;
-(void)startAnimationsForTickMark:(BOOL)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(/*^block*/id)arg5 ;
@end

