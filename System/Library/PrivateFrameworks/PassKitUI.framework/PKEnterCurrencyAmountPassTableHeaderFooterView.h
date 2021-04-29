/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol PKEnterCurrencyAmountPassViewDelegate;
@class PKEnterCurrencyAmountPassView;

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView {

	id<PKEnterCurrencyAmountPassViewDelegate> _delegate;
	PKEnterCurrencyAmountPassView* _amountPassView;

}

@property (assign,nonatomic,__weak) id<PKEnterCurrencyAmountPassViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKEnterCurrencyAmountPassView * amountPassView;                       //@synthesize amountPassView=_amountPassView - In the implementation block
-(id<PKEnterCurrencyAmountPassViewDelegate>)delegate;
-(void)setDelegate:(id<PKEnterCurrencyAmountPassViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)_bottomPadding;
-(id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2 ;
-(id)initWithCurrenyAmount:(id)arg1 ;
-(PKEnterCurrencyAmountPassView *)amountPassView;
@end

