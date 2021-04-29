/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNContactPickerContentViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentDelegate.h>

@class NSString;

@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
-(id)_filteredContact:(id)arg1 withKeys:(id)arg2 ;
-(id)_filteredProperty:(id)arg1 ;
@end

