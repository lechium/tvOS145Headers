/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@interface VideosUI.CanonicalInfoCardCell : VUIFocusableCollectionViewCell <VUIAuxiliaryViewSelecting> {

	 layout;
	 cornerRadius;
	 cardView;

}
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateBackgroundAndHighlightColor;
@end
