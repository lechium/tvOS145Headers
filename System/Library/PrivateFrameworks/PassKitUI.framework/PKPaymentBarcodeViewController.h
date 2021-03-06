/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class PKRightAngleRotatingView, UILabel, UIButton, UILayoutGuide, UIImageView, PKPaymentPass, NSData;

@interface PKPaymentBarcodeViewController : UIViewController {

	PKRightAngleRotatingView* _barcodeView;
	UILabel* _disclaimerText;
	UIButton* _closeButton;
	UILayoutGuide* _barcodeGuide;
	UIImageView* _compactBankLogoView;
	PKPaymentPass* _pass;
	SCD_Struct_PK36 _viewSizeInfo;
	NSData* _barcodeData;

}

@property (nonatomic,retain) NSData * barcodeData;              //@synthesize barcodeData=_barcodeData - In the implementation block
-(void)invalidate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(id)initWithPass:(id)arg1 ;
-(void)_closeButtonPressed:(id)arg1 ;
-(SCD_Struct_PK36)_barcodePadding;
-(CGSize)_barcodeSize;
-(void)setBarcodeData:(NSData *)arg1 ;
-(NSData *)barcodeData;
@end

