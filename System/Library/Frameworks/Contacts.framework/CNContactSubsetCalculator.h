/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNContactSubsetCalculator : NSObject
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 forMultiValueProperty:(id)arg3 ;
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 forSingleValueProperty:(id)arg3 ;
+(BOOL)_isLabeledValue:(id)arg1 availableInLabeledValues:(id)arg2 claimedIndices:(id)arg3 forMultiValueProperty:(id)arg4 ;
+(BOOL)_isLabel:(id)arg1 subsumableIntoLabel:(id)arg2 equivalencies:(id)arg3 ;
+(BOOL)isContact:(id)arg1 subsetOfContact:(id)arg2 ignoringProperties:(id)arg3 ;
@end

