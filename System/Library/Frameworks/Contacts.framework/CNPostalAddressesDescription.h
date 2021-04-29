/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNCompoundMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNPostalAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isNonnull;
-(id)CNValueForContact:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(Class)labeledValueClass;
-(/*^block*/id)dictionaryTransform;
-(/*^block*/id)fromDictionaryTransform;
-(id)summarizationKeys;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
@end

