/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIPickerView.h>
#import <UIKit/UIWebFormControl.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol UIWebSelectedItemPrivate;
@class DOMHTMLSelectElement, NSArray, NSString;

@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

	DOMHTMLSelectElement* _selectNode;
	NSArray* _optionItems;
	id<UIWebSelectedItemPrivate> _selectedOptionItem;
	long long _selectedIndex;
	id<UIWebSelectedItemPrivate> _optionToSelectWhenDone;
	long long _indexToSelectWhenDone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithDOMHTMLSelectElement:(id)arg1 allItems:(id)arg2 ;
@end

