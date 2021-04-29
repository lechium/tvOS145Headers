/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPassFooterContentViewDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKUIForegroundActiveArbiterDeactivationObserver.h>

@protocol OS_dispatch_source, OS_dispatch_group, PKPassFooterViewDelegate;
@class PKPassFooterContentView, NSObject, PKPaymentSessionHandle, PKPassFooterViewConfiguration, NSString;

@interface PKPassFooterView : UIView <PKPassFooterContentViewDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver> {

	PKPassFooterContentView* _contentView;
	PKPassFooterContentView* _fadingContentView;
	BOOL _fadingContentViewNeedsDidHide;
	NSObject*<OS_dispatch_source> _sessionStartTimer;
	BOOL _isBackgrounded;
	BOOL _isAssistantActive;
	BOOL _acquiringSession;
	unsigned long long _sessionToken;
	NSObject*<OS_dispatch_group> _sessionDelayGroup;
	PKPaymentSessionHandle* _sessionHandle;
	BOOL _invalidated;
	unsigned char _visibility;
	unsigned char _contentViewVisibility;
	BOOL _physicalButtonRequired;
	PKPassFooterViewConfiguration* _configuration;
	long long _coachingState;
	id<PKPassFooterViewDelegate> _delegate;

}

@property (nonatomic,readonly) PKPassFooterViewConfiguration * configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (getter=isPassAuthorized,nonatomic,readonly) BOOL passAuthorized; 
@property (getter=isPhysicalButtonRequired,nonatomic,readonly) BOOL physicalButtonRequired;              //@synthesize physicalButtonRequired=_physicalButtonRequired - In the implementation block
@property (nonatomic,readonly) long long coachingState;                                                  //@synthesize coachingState=_coachingState - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassFooterViewDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL requestPileSuppression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<PKPassFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassFooterViewDelegate>)arg1 ;
-(PKPassFooterViewConfiguration *)configuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK6)arg2 ;
-(long long)coachingState;
-(BOOL)isPassAuthorized;
-(void)configureWithConfiguration:(id)arg1 context:(id)arg2 options:(SCD_Struct_PK38)arg3 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(BOOL)requestPileSuppression;
-(void)showFullScreenBarcode;
-(BOOL)isPhysicalButtonRequired;
-(void)_lostModeButtonTapped;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned)arg2 ;
-(BOOL)isPassFooterContentViewInGroup:(id)arg1 ;
-(void)passFooterContentViewDidAuthorizeTransaction:(id)arg1 ;
-(void)_setCoachingState:(long long)arg1 ;
-(void)passFooterContentViewRequestsSessionSuppression:(id)arg1 ;
-(void)passFooterContentViewDidAuthenticate:(id)arg1 ;
-(void)passFooterContentView:(id)arg1 didAuthorizeAndRetrieveDecryptedBarcode:(id)arg2 ;
-(void)passFooterContentViewDidInvalidateAuthorizedBarcode:(id)arg1 ;
-(void)_setPhysicalButtonRequired:(BOOL)arg1 ;
-(void)passFooterContentViewDidChangePhysicalButtonRequirement:(id)arg1 ;
-(void)passFooterContentViewDidChangeCoachingState:(id)arg1 ;
-(void)passFooterContentViewDidChangePileSuppressionRequirement:(id)arg1 ;
-(unsigned long long)suppressedContentForContentView:(id)arg1 ;
-(void)_advanceContentViewVisibilityToState:(unsigned char)arg1 animated:(BOOL)arg2 ;
-(void)_advanceVisibilityToState:(unsigned char)arg1 animated:(BOOL)arg2 ;
-(void)_configureWithConfiguration:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(void)_endSessionStartTimer;
-(void)_endSession;
-(void)_updateForNonForegroundActivePresentationAnimated:(BOOL)arg1 ;
-(void)_updateForForegroundActivePresentationIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_setContentView:(id)arg1 animated:(BOOL)arg2 ;
-(id)_messageForPaymentApplicationState;
-(id)_messageContentViewFromMessage:(id)arg1 ;
-(void)_configureForPersonalizedPaymentApplicationWithContext:(id)arg1 ;
-(void)_configureForValueAddedServiceWithContext:(id)arg1 ;
-(id)_messageForRestrictedState;
-(id)_messageForPeerPaymentZeroBalance;
-(id)_messageForPeerPaymentLockedByOwner;
-(void)_acquireContactlessInterfaceSessionWithSessionToken:(unsigned long long)arg1 shouldForceSessionAcquisition:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(long long)_acquireContactlessInterfaceSessionErrorActionForError:(id)arg1 ;
-(BOOL)_canApplyContentViewForPersonalizedApplication;
-(id)_messageForUnavailableState;
-(void)_startContactlessInterfaceSessionWithContext:(id)arg1 shouldForceSessionAcquisition:(BOOL)arg2 sessionAvailable:(/*^block*/id)arg3 sessionUnavailable:(/*^block*/id)arg4 ;
-(BOOL)_canApplyContentViewForValueAddedService;
-(void)_commitContentViewAnimated:(BOOL)arg1 ;
@end

