/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface SeymourUI.SummaryContentSummaryView : UIView {

	 thumbnailDimensions;
	 thumbnailView;
	 bookmarkButton;
	 labels;
	 layoutGuide;
	 layoutGuideConstraints;
	 layoutGuideSecondaryConstraints;
	 labelsBottomConstraint;
	 bookmarkButtonBottomConstraint;
	 thumbnailWidthConstraint;
	 thumbnailHeightConstraint;
	 lastBounds;
	 onBookmarkTapped;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)bookmarkButtonTapped;
@end

