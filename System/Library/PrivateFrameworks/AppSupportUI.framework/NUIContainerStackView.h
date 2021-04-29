/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIGridArrangementContainer.h>

@class NSString;

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer> {

	NUIGridArrangement* _arrangement;
	SCD_Struct_NU18 _visibleCount;
	map<UIView *, double, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, double>>>* _customSpacings;
	struct {
		unsigned alignment : 8;
		unsigned distribution : 8;
		unsigned axis : 4;
	}  _stackViewFlags;
	double _spacing;

}

@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) long long distribution; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) double spacing;                        //@synthesize spacing=_spacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerStackViewWithAxis:(long long)arg1 arrangedSubviews:(id)arg2 ;
+(id)horizontalContainerStackViewWithArrangedSubviews:(id)arg1 ;
+(id)verticalContainerStackViewWithArrangedSubviews:(id)arg1 ;
-(void)dealloc;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(long long)distribution;
-(void)setDistribution:(long long)arg1 ;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>>*)arg1 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>>*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>>*)arg2 axis:(long long)arg3 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1 ;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)arrangedDescription;
-(double)customSpacingAfterView:(id)arg1 ;
-(void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2 ;
@end

