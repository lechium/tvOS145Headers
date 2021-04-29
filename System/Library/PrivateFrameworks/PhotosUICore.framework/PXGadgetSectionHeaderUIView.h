/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UILabel, UIButton, UIView, PXGadgetSectionHeader, NSString;

@interface PXGadgetSectionHeaderUIView : UICollectionReusableView <PXChangeObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	UILabel* _titleLabel;
	UIButton* _accessoryButton;
	UIView* _divider;
	PXGadgetSectionHeader* _headerModel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * accessoryButton;                     //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,readonly) UIView * divider;                               //@synthesize divider=_divider - In the implementation block
@property (nonatomic,retain) PXGadgetSectionHeader * headerModel;              //@synthesize headerModel=_headerModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sizingLabel;
+(double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(BOOL)arg5 ;
+(double)_heightThatFitsFirstToLastBaselineWithText:(id)arg1 width:(double)arg2 font:(id)arg3 ;
+(double)_preferredHeightForText:(id)arg1 fittingWidth:(double)arg2 style:(unsigned long long)arg3 dividerHidden:(BOOL)arg4 ;
+(double)_preferredHeightOfButtonWithType:(unsigned long long)arg1 width:(double)arg2 ;
+(id)_sizingButton;
+(id)_accessoryButtonFont;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIView *)divider;
-(void)_updateTitle;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)configureTitleLabel:(id)arg1 ;
-(void)setHeaderModel:(PXGadgetSectionHeader *)arg1 ;
-(void)_updateAccessoryButton;
-(void)configureAccessoryButton:(id)arg1 ;
-(void)_buttonPressed;
-(UIButton *)accessoryButton;
-(PXGadgetSectionHeader *)headerModel;
@end

