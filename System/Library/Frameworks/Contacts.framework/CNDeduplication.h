/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNDeduplication : NSObject
+(id)os_log;
-(void)deduplicateContainer:(id)arg1 store:(id)arg2 ;
-(void)deduplicateKeeping:(id)arg1 deleting:(id)arg2 store:(id)arg3 ;
-(id)contactsForGroup:(id)arg1 store:(id)arg2 ;
-(id)identifierSetFromContacts:(id)arg1 ;
-(void)addContactsForIds:(id)arg1 toGroup:(id)arg2 usingRequest:(id)arg3 store:(id)arg4 ;
-(void)deduplicateAllContainers:(id)arg1 ;
@end

