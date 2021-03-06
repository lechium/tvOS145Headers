/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataAccess/DAContactsAccountProvider.h>

@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)allAccounts;
-(id)fetchedAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountForContainerWithIdentifier:(id)arg1 ;
@end

