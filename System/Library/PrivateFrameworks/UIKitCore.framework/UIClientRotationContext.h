/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UISnapshotView, UIWindow;

@interface UIClientRotationContext : NSObject {

	UIView* _headerView;
	UIView* _footerView;
	UIView* _contentView;
	UIView* _snapshotTargetView;
	UIView* _rotatingSnapshotView;
	UIView* _footerStartSnapshotView;
	UIView* _footerEndSnapshotView;
	BOOL _headerWasHidden;
	BOOL _footerWasHidden;
	BOOL _contentWasHidden;
	BOOL _snapshotTargetWasHidden;
	BOOL _orderKeyboardInAfterRotating;
	long long _fromOrientation;
	long long _toOrientation;
	double _duration;
	UISnapshotView* _headerSnapshotViewStart;
	UISnapshotView* _footerSnapshotViewStart;
	UISnapshotView* _contentSnapshotViewStart;
	id _rotatingClient;
	SCD_Struct_UI58 _rotationSettings;
	double contentBottomInset;
	UIWindow* _window;
	BOOL _skipClientRotationCallbacks;

}

@property (nonatomic,readonly) id rotatingClient;                           //@synthesize rotatingClient=_rotatingClient - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL skipClientRotationCallbacks;              //@synthesize skipClientRotationCallbacks=_skipClientRotationCallbacks - In the implementation block
@property (nonatomic,readonly) long long fromOrientation;                   //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (nonatomic,readonly) long long toOrientation;                     //@synthesize toOrientation=_toOrientation - In the implementation block
-(void)dealloc;
-(double)duration;
-(UIView *)contentView;
-(void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
-(void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3 ;
-(id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4 ;
-(void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(long long)arg2 ;
-(BOOL)_isHeaderTranslucent;
-(BOOL)_isFooterTranslucent;
-(void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1 ;
-(void)rotateSnapshots;
-(void)finishFirstHalfRotation;
-(void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1 ;
-(id)rotatingClient;
-(long long)fromOrientation;
-(long long)toOrientation;
-(BOOL)skipClientRotationCallbacks;
-(void)setSkipClientRotationCallbacks:(BOOL)arg1 ;
@end

