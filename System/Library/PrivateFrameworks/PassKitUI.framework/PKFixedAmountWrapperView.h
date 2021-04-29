/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UITableView, UIPickerView;

@interface PKFixedAmountWrapperView : UIView {

	UITableView* _tableView;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
-(void)layoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
@end
