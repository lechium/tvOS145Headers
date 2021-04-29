/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class AMSUICommonView;

@interface AMSUICommonCollectionViewCell : UICollectionViewCell {

	AMSUICommonView* _underlyingContentView;

}

@property (nonatomic,readonly) AMSUICommonView * underlyingContentView;              //@synthesize underlyingContentView=_underlyingContentView - In the implementation block
@property (nonatomic,readonly) AMSUICommonView * contentView; 
-(id)init;
-(void)_setup;
-(AMSUICommonView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)tintColor;
-(void)layoutSubviews;
-(AMSUICommonView *)underlyingContentView;
@end

