/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUIActivation/SiriUIActivation-Structs.h>
#import <SiriUIActivation/SiriPresentationViewController.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface SiriPresentationPineBoardMainScreenViewController : SiriPresentationViewController {

	NSObject*<OS_dispatch_group> _requestDictationFromSiriGroup;
	os_unfair_lock_s _dictationInProgressLock;
	BOOL _didRequestDictationStart;
	BOOL _shouldListenForSceneActivation;
	BOOL _shouldRequestDictation;
	double _buttonDownTimestamp;

}

@property (assign,setter=_setButtonDownTimestamp:,getter=_buttonDownTimestamp,nonatomic) double buttonDownTimestamp;                               //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (assign,nonatomic,__weak) id<SiriPresentationPineBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate; 
-(void)siriViewControllerDidPresentKeyboard:(id)arg1 ;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(void)siriViewController:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2 ;
-(void)siriViewControllerDidDeactivateScene:(id)arg1 ;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2 ;
-(void)siriViewController:(id)arg1 didReceiveButtonUpWithRequestOptions:(id)arg2 ;
-(void)siriViewControllerDidChangeToListeningMode:(id)arg1 ;
-(void)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(double)_buttonDownTimestamp;
-(id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2 ;
-(void)_prewarmFlamesWithPresentationFrame:(CGRect)arg1 ;
-(void)_forwardHIDButtonEventWithUsagePage:(unsigned)arg1 usage:(unsigned)arg2 type:(long long)arg3 senderID:(unsigned long long)arg4 ;
-(double)_thresholdForTriggeringABCInLaunch;
-(BOOL)_shouldShowSetupViewController;
-(BOOL)_getValueForShouldRequestDictation;
-(void)_setButtonDownTimestamp:(double)arg1 ;
@end

