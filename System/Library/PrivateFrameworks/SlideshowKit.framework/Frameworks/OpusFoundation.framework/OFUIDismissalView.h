/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OFUIDismissalViewDelegate;
@interface OFUIDismissalView : UIView {

	id<OFUIDismissalViewDelegate> _dismissalViewDelegate;
	BOOL _inPassthroughHitTest;

}

@property (assign,nonatomic) id<OFUIDismissalViewDelegate> dismissalViewDelegate;              //@synthesize dismissalViewDelegate=_dismissalViewDelegate - In the implementation block
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDismissalViewDelegate:(id<OFUIDismissalViewDelegate>)arg1 ;
-(id<OFUIDismissalViewDelegate>)dismissalViewDelegate;
@end

