/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol PKPassFooterContentViewDelegate;
@class PKPass, PKLinkedAppIconView, UIButton, UIView, PKPaymentPass;

@interface PKPassFooterContentView : UIView {

	BOOL _physicalButtonRequired;
	BOOL _invalidated;
	BOOL _requestPileSuppression;
	long long _style;
	id<PKPassFooterContentViewDelegate> _delegate;
	PKPass* _pass;
	PKLinkedAppIconView* _appIconView;
	UIButton* _infoButton;
	UIView* _bottomRule;
	long long _coachingState;

}

@property (nonatomic,readonly) long long style;                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassFooterContentViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPass * pass;                                                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) PKLinkedAppIconView * appIconView;                                        //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                                                    //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIView * bottomRule;                                                      //@synthesize bottomRule=_bottomRule - In the implementation block
@property (getter=isPassAuthorized,nonatomic,readonly) BOOL passAuthorized; 
@property (getter=isPhysicalButtonRequired,nonatomic,readonly) BOOL physicalButtonRequired;              //@synthesize physicalButtonRequired=_physicalButtonRequired - In the implementation block
@property (nonatomic,readonly) long long coachingState;                                                  //@synthesize coachingState=_coachingState - In the implementation block
@property (nonatomic,readonly) BOOL invalidated;                                                         //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) BOOL requestPileSuppression;                                              //@synthesize requestPileSuppression=_requestPileSuppression - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<PKPassFooterContentViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassFooterContentViewDelegate>)arg1 ;
-(long long)style;
-(BOOL)invalidated;
-(PKPass *)pass;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(PKPaymentPass *)paymentPass;
-(id)initWithPass:(id)arg1 ;
-(long long)coachingState;
-(BOOL)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(BOOL)requestPileSuppression;
-(void)showFullScreenBarcode;
-(BOOL)isPhysicalButtonRequired;
-(void)_setRequestPileSuppression:(BOOL)arg1 ;
-(UIView *)bottomRule;
-(PKLinkedAppIconView *)appIconView;
-(void)coachingStateDidChange;
-(void)_setCoachingState:(long long)arg1 ;
-(void)_setPhysicalButtonRequired:(BOOL)arg1 ;
-(id)_buttonWithTitle:(id)arg1 ;
-(void)_infoButtonPressed:(id)arg1 ;
@end

