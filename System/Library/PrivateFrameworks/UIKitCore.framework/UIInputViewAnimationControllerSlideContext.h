/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIInputViewSetPlacement;

@interface UIInputViewAnimationControllerSlideContext : NSObject {

	UIView* _snapshot;
	UIInputViewSetPlacement* _endPlacement;
	CGRect _snapshotEndFrame;

}

@property (nonatomic,retain) UIView * snapshot;                                   //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) CGRect snapshotEndFrame;                             //@synthesize snapshotEndFrame=_snapshotEndFrame - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * endPlacement;              //@synthesize endPlacement=_endPlacement - In the implementation block
-(void)dealloc;
-(void)setSnapshot:(UIView *)arg1 ;
-(UIView *)snapshot;
-(void)setSnapshotEndFrame:(CGRect)arg1 ;
-(void)setEndPlacement:(UIInputViewSetPlacement *)arg1 ;
-(CGRect)snapshotEndFrame;
-(UIInputViewSetPlacement *)endPlacement;
@end

