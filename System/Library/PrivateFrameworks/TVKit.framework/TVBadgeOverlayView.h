/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, TVBadgeView;

@interface TVBadgeOverlayView : UIView {

	NSString* _badgeValue;
	double _maximumBadgeWidth;
	TVBadgeView* _badgeView;

}

@property (nonatomic,retain) TVBadgeView * badgeView;               //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,copy) NSString * badgeValue;                   //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) double maximumBadgeWidth;              //@synthesize maximumBadgeWidth=_maximumBadgeWidth - In the implementation block
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(TVBadgeView *)badgeView;
-(void)setBadgeView:(TVBadgeView *)arg1 ;
-(double)maximumBadgeWidth;
-(void)setMaximumBadgeWidth:(double)arg1 ;
@end
