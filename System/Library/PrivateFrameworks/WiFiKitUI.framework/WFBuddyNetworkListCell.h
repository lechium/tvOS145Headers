/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKitUI/WFNetworkListCell.h>

@class NSLayoutConstraint;

@interface WFBuddyNetworkListCell : WFNetworkListCell {

	NSLayoutConstraint* _trailingImageViewConstraint;
	NSLayoutConstraint* _topLabelConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * trailingImageViewConstraint;              //@synthesize trailingImageViewConstraint=_trailingImageViewConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * topLabelConstraint;                       //@synthesize topLabelConstraint=_topLabelConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomLabelConstraint;                    //@synthesize bottomLabelConstraint=_bottomLabelConstraint - In the implementation block
-(void)setSubtitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(NSLayoutConstraint *)trailingImageViewConstraint;
-(void)setTrailingImageViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topLabelConstraint;
-(void)setTopLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomLabelConstraint;
-(void)setBottomLabelConstraint:(NSLayoutConstraint *)arg1 ;
@end

