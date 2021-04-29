/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIButtonBarDelegate.h>

@class _UIButtonBar, UIVisualEffectView, NSLayoutConstraint, _UIButtonBarButtonVisualProvider, UIBlurEffect, NSArray, NSString;

@interface _UIGroupedBar : UIView <_UIButtonBarDelegate> {

	_UIButtonBar* _leftBar;
	_UIButtonBar* _centerBar;
	_UIButtonBar* _rightBar;
	UIVisualEffectView* _backgroundView;
	NSLayoutConstraint* _centeringConstraint;
	NSLayoutConstraint* _leadingLimitConstraint;
	NSLayoutConstraint* _trailingLimitConstraint;
	BOOL _independentGroupSizes;
	double _margin;
	double _minimumInterItemSpace;
	double _minimumInterGroupSpace;
	double _leadingBarSizeLimit;
	double _trailingBarSizeLimit;
	_UIButtonBarButtonVisualProvider* _visualProvider;
	UIBlurEffect* _backgroundEffect;

}

@property (nonatomic,copy) NSArray * leadingBarButtonGroups; 
@property (nonatomic,copy) NSArray * centerBarButtonGroups; 
@property (nonatomic,copy) NSArray * trailingBarButtonGroups; 
@property (assign,nonatomic) BOOL independentGroupSizes;                                   //@synthesize independentGroupSizes=_independentGroupSizes - In the implementation block
@property (assign,nonatomic) double margin;                                                //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) double minimumInterItemSpace;                                 //@synthesize minimumInterItemSpace=_minimumInterItemSpace - In the implementation block
@property (assign,nonatomic) double minimumInterGroupSpace;                                //@synthesize minimumInterGroupSpace=_minimumInterGroupSpace - In the implementation block
@property (assign,nonatomic) double leadingBarSizeLimit;                                   //@synthesize leadingBarSizeLimit=_leadingBarSizeLimit - In the implementation block
@property (assign,nonatomic) double trailingBarSizeLimit;                                  //@synthesize trailingBarSizeLimit=_trailingBarSizeLimit - In the implementation block
@property (nonatomic,copy) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
@property (nonatomic,copy) UIBlurEffect * backgroundEffect;                                //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_debug;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)margin;
-(void)setMargin:(double)arg1 ;
-(void)layoutSubviews;
-(void)layoutMarginsDidChange;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)didMoveToSuperview;
-(NSArray *)leadingBarButtonGroups;
-(NSArray *)trailingBarButtonGroups;
-(void)setTrailingBarButtonGroups:(NSArray *)arg1 ;
-(void)setLeadingBarButtonGroups:(NSArray *)arg1 ;
-(UIBlurEffect *)backgroundEffect;
-(void)_updateVisualProvider;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(double)minimumInterItemSpace;
-(double)minimumInterGroupSpace;
-(void)setMinimumInterGroupSpace:(double)arg1 ;
-(void)setBackgroundEffect:(UIBlurEffect *)arg1 ;
-(void)buttonBarWillUpdateLayout:(id)arg1 ;
-(void)_updateBarMargins;
-(NSArray *)centerBarButtonGroups;
-(void)setCenterBarButtonGroups:(NSArray *)arg1 ;
-(void)setIndependentGroupSizes:(BOOL)arg1 ;
-(void)setLeadingBarSizeLimit:(double)arg1 ;
-(void)setTrailingBarSizeLimit:(double)arg1 ;
-(void)validateAllItems;
-(void)_setButtonAlpha:(double)arg1 ;
-(BOOL)independentGroupSizes;
-(double)leadingBarSizeLimit;
-(double)trailingBarSizeLimit;
@end

