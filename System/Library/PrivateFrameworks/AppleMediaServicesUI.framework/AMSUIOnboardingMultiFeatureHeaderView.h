/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UILabel, NSArray;

@interface AMSUIOnboardingMultiFeatureHeaderView : UIScrollView {

	BOOL _isPresentedInFormSheet;
	UILabel* _titleLabel;
	double _containerHeight;
	NSArray* _featureViews;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * featureViews;                   //@synthesize featureViews=_featureViews - In the implementation block
@property (assign,nonatomic) double containerHeight;                   //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInFormSheet;              //@synthesize isPresentedInFormSheet=_isPresentedInFormSheet - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)updateContentSize;
-(id)initWithFeatures:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSArray *)featureViews;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(void)adjustedContentInsetDidChange;
-(BOOL)isPresentedInFormSheet;
-(double)containerHeight;
-(void)setContainerHeight:(double)arg1 ;
-(void)setIsPresentedInFormSheet:(BOOL)arg1 ;
@end

