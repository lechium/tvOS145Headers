/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/_TVLockupContentView.h>

@class UIColor, _TVUICardFloatingContentView, UIView;

@interface _TVCardContentView : _TVLockupContentView {

	UIColor* _floatingContentViewBackgroundColor;
	_TVUICardFloatingContentView* _floatingContentView;
	UIView* __customSubviewContainerView;

}

@property (nonatomic,retain) _TVUICardFloatingContentView * floatingContentView;              //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,retain) UIView * _customSubviewContainerView;                            //@synthesize _customSubviewContainerView=__customSubviewContainerView - In the implementation block
@property (nonatomic,retain) UIColor * floatingContentViewBackgroundColor;                    //@synthesize floatingContentViewBackgroundColor=_floatingContentViewBackgroundColor - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets focusSizeIncrease; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setFocusSizeIncrease:(NSDirectionalEdgeInsets)arg1 ;
-(NSDirectionalEdgeInsets)focusSizeIncrease;
-(_TVUICardFloatingContentView *)floatingContentView;
-(id)effectiveContentView;
-(void)setLockupViewState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_createFloatingContentView;
-(void)setFloatingContentView:(_TVUICardFloatingContentView *)arg1 ;
-(void)setFloatingContentViewBackgroundColor:(UIColor *)arg1 ;
-(void)_createContainerView;
-(void)_addContainerView:(id)arg1 ;
-(UIColor *)floatingContentViewBackgroundColor;
-(UIView *)_customSubviewContainerView;
-(void)set_customSubviewContainerView:(UIView *)arg1 ;
@end
