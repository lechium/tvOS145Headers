/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class UILabel;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {

	UILabel* _environmentLabel;

}
+(id)applePayBarButtonItem;
+(id)cardOnFileBarButtonItemForRequestor:(unsigned long long)arg1 ;
+(id)_leftBarButtonItemWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didUpdateInterfaceStyle;
@end

