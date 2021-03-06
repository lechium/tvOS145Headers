/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTextFieldTableViewSettingsRowFormatter.h>

@class NSString, NSNumberFormatter;

@interface PKTextfieldTableViewSettingsRowCurrencyFormatter : PKTextFieldTableViewSettingsRowFormatter {

	NSString* _currencyCode;
	NSNumberFormatter* _currencyFormatter;
	NSNumberFormatter* _amountFormatter;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCurrencyCode:(id)arg1 ;
-(id)formattedValueFromInput:(id)arg1 ;
-(id)submissionValueFromFormattedInput:(id)arg1 ;
@end

