/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaymentDashboardCellActionHandleable.h>

@class UIImageView, PKContinuousButton, UILabel, PKPaymentPassAction, PKPaymentPass, UIColor, NSString;

@interface PKAdjustableSingleCellView : UIView <PKPaymentDashboardCellActionHandleable> {

	UIImageView* _disclosureView;
	PKContinuousButton* _actionButton;
	double _topPadding;
	BOOL _isTemplateLayout;
	UILabel* _titleView;
	UILabel* _detailView;
	UILabel* _subDetailView;
	unsigned long long _deferUpdateCounter;
	BOOL _animated;
	BOOL _enableDisclosure;
	/*^block*/id _actionHandler;
	PKPaymentPassAction* _action;
	PKPaymentPass* _pass;
	UIColor* _titleColor;
	UIColor* _detailColor;
	UIColor* _subDetailColor;
	long long _titleLineBreakMode;
	long long _detailLineBreakMode;
	long long _subDetailLineBreakMode;
	NSString* _title;
	NSString* _detail;
	NSString* _subDetail;

}

@property (nonatomic,copy) id actionHandler;                                //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) BOOL enableDisclosure;                         //@synthesize enableDisclosure=_enableDisclosure - In the implementation block
@property (nonatomic,copy) PKPaymentPassAction * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                            //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) UIColor * detailColor;                           //@synthesize detailColor=_detailColor - In the implementation block
@property (nonatomic,copy) UIColor * subDetailColor;                        //@synthesize subDetailColor=_subDetailColor - In the implementation block
@property (assign,nonatomic) long long titleLineBreakMode;                  //@synthesize titleLineBreakMode=_titleLineBreakMode - In the implementation block
@property (assign,nonatomic) long long detailLineBreakMode;                 //@synthesize detailLineBreakMode=_detailLineBreakMode - In the implementation block
@property (assign,nonatomic) long long subDetailLineBreakMode;              //@synthesize subDetailLineBreakMode=_subDetailLineBreakMode - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * detail;                               //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSString * subDetail;                            //@synthesize subDetail=_subDetail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(PKPaymentPassAction *)action;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(NSString *)detail;
-(void)setDetail:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)layoutSubviews;
-(void)beginUpdates;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(id)_titleFont;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_actionButtonTapped:(id)arg1 ;
-(void)_setupViews;
-(long long)viewType;
-(void)_performInit;
-(void)_applyStyles;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(id)_detailFont;
-(id)_subDetailFont;
-(id)_smallerDetailFont;
-(BOOL)_needsThirdLine;
-(void)_updateContent:(BOOL)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)enableDisclosure;
-(void)endUpdates:(BOOL)arg1 ;
-(void)setEnableDisclosure:(BOOL)arg1 ;
-(void)setSubDetail:(NSString *)arg1 ;
-(void)setDetailColor:(UIColor *)arg1 ;
-(void)setSubDetailColor:(UIColor *)arg1 ;
-(void)setTitleLineBreakMode:(long long)arg1 ;
-(void)setDetailLineBreakMode:(long long)arg1 ;
-(void)setSubDetailLineBreakMode:(long long)arg1 ;
-(UIColor *)detailColor;
-(UIColor *)subDetailColor;
-(long long)titleLineBreakMode;
-(long long)detailLineBreakMode;
-(long long)subDetailLineBreakMode;
-(NSString *)subDetail;
@end

