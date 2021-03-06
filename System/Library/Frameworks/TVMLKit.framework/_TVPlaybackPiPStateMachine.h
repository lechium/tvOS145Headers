/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@class NSHashTable, _TVPlaybackViewController, NSString;

@interface _TVPlaybackPiPStateMachine : NSObject <AVPlayerViewControllerDelegate> {

	NSHashTable* _playbackViewControllers;
	BOOL _shouldAutomaticallyDismissAtPictureInPictureStart;
	_TVPlaybackViewController* _fullScreenPlaybackViewController;
	_TVPlaybackViewController* _activePiPPlaybackViewController;
	_TVPlaybackViewController* _startingPiPPlaybackViewController;
	_TVPlaybackViewController* _stoppingPiPPlaybackViewController;

}

@property (nonatomic,readonly) _TVPlaybackViewController * startingPiPPlaybackViewController;                  //@synthesize startingPiPPlaybackViewController=_startingPiPPlaybackViewController - In the implementation block
@property (nonatomic,readonly) _TVPlaybackViewController * stoppingPiPPlaybackViewController;                  //@synthesize stoppingPiPPlaybackViewController=_stoppingPiPPlaybackViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyDismissAtPictureInPictureStart;                           //@synthesize shouldAutomaticallyDismissAtPictureInPictureStart=_shouldAutomaticallyDismissAtPictureInPictureStart - In the implementation block
@property (nonatomic,readonly) NSHashTable * playbackViewControllers;                                          //@synthesize playbackViewControllers=_playbackViewControllers - In the implementation block
@property (assign,nonatomic,__weak) _TVPlaybackViewController * fullScreenPlaybackViewController;              //@synthesize fullScreenPlaybackViewController=_fullScreenPlaybackViewController - In the implementation block
@property (nonatomic,readonly) _TVPlaybackViewController * activePiPPlaybackViewController;                    //@synthesize activePiPPlaybackViewController=_activePiPPlaybackViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1 ;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1 ;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1 ;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPiPEnabledForPlayer:(id)arg1 ;
-(_TVPlaybackViewController *)activePiPPlaybackViewController;
-(_TVPlaybackViewController *)fullScreenPlaybackViewController;
-(_TVPlaybackViewController *)startingPiPPlaybackViewController;
-(void)setFullScreenPlaybackViewController:(_TVPlaybackViewController *)arg1 ;
-(void)pipWillStart:(id)arg1 ;
-(void)pipDidStart:(id)arg1 ;
-(void)pipWillStop:(id)arg1 ;
-(void)pipDidStop:(id)arg1 ;
-(_TVPlaybackViewController *)stoppingPiPPlaybackViewController;
-(NSHashTable *)playbackViewControllers;
-(id)playbackViewControllerPassingTest:(/*^block*/id)arg1 ;
-(BOOL)shouldAutomaticallyDismissAtPictureInPictureStart;
-(id)playbackViewControllerForPictureInPictureSource:(id)arg1 ;
-(void)pictureInPictureWillStartForPlaybackViewController:(id)arg1 ;
-(void)pictureInPictureDidStartForPlaybackViewController:(id)arg1 ;
-(void)pictureInPictureWillStopForPlaybackViewController:(id)arg1 ;
-(void)pictureInPictureDidStopForPlaybackViewController:(id)arg1 ;
-(void)setShouldAutomaticallyDismissAtPictureInPictureStart:(BOOL)arg1 ;
@end

