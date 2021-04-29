/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIContainerCollectionViewCell.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@interface VideosUI.LockupCollectionViewCell : VUIContainerCollectionViewCell <VUIAuxiliaryViewSelecting> {

	 lockupLayout;
	 $__lazy_storage_$_stackingPosterView;
	 overlayView;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)selectingView;
@end

