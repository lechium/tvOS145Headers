/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class NSLayoutConstraint, MKButtonWithTargetArgument;

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorTableViewCell {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	MKButtonWithTargetArgument* _button;

}

@property (nonatomic,readonly) MKButtonWithTargetArgument * button;              //@synthesize button=_button - In the implementation block
+(id)_font;
+(double)defaultHeight;
-(MKButtonWithTargetArgument *)button;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
@end

