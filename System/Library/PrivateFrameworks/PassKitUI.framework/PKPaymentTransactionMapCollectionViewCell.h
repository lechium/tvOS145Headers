/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UIActivityIndicatorView, PKDashboardTransactionMapItem, PKTransactionMapView, UILabel;

@interface PKPaymentTransactionMapCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _disclosureView;
	UIActivityIndicatorView* _spinner;
	BOOL _showDisclosureIndicator;
	BOOL _showSpinner;
	PKDashboardTransactionMapItem* _item;
	PKTransactionMapView* _mapView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) PKDashboardTransactionMapItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) PKTransactionMapView * mapView;                  //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL showDisclosureIndicator;                      //@synthesize showDisclosureIndicator=_showDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                  //@synthesize showSpinner=_showSpinner - In the implementation block
-(void)setItem:(PKDashboardTransactionMapItem *)arg1 ;
-(PKDashboardTransactionMapItem *)item;
-(void)prepareForReuse;
-(PKTransactionMapView *)mapView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setShowSpinner:(BOOL)arg1 ;
-(BOOL)showSpinner;
-(double)maxWidthForTransactionCellInWidth:(double)arg1 ;
-(void)_updateSpinnerAndDisclosureIndicator;
-(void)setShowDisclosureIndicator:(BOOL)arg1 ;
-(BOOL)showDisclosureIndicator;
@end
