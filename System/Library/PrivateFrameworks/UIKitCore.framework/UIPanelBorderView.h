/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPanelBorderReplicatingView, NSString;

@interface UIPanelBorderView : UIView {

	BOOL _draggable;
	BOOL _observesTime;
	long long _statusBarAvoidance;
	UIPanelBorderReplicatingView* _replicatingView;
	NSString* _backdropGroupName;

}

@property (nonatomic,retain) UIPanelBorderReplicatingView * replicatingView;              //@synthesize replicatingView=_replicatingView - In the implementation block
@property (assign,nonatomic) BOOL observesTime;                                           //@synthesize observesTime=_observesTime - In the implementation block
@property (nonatomic,retain) NSString * backdropGroupName;                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long statusBarAvoidance;                                //@synthesize statusBarAvoidance=_statusBarAvoidance - In the implementation block
@property (assign,getter=isDraggable,nonatomic) BOOL draggable;                           //@synthesize draggable=_draggable - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDraggable:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isDraggable;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(long long)statusBarAvoidance;
-(UIPanelBorderReplicatingView *)replicatingView;
-(void)setReplicatingView:(UIPanelBorderReplicatingView *)arg1 ;
-(id)_cachedBackdropGroupName;
-(void)setStatusBarAvoidance:(long long)arg1 ;
-(BOOL)observesTime;
-(void)setObservesTime:(BOOL)arg1 ;
@end

