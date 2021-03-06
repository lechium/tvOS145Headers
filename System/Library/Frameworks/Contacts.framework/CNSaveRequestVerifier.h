/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNSaveRequestVerifier : NSObject
+(id)insertedAndUpdatedContactsForSaveRequest:(id)arg1 ;
+(BOOL)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4 ;
+(BOOL)isValidSaveRequest:(id)arg1 error:(id*)arg2 ;
+(BOOL)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3 ;
@end

