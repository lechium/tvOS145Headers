/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canCreateContacts;
	BOOL _canDeleteContacts;
	BOOL _canCreateGroups;

}

@property (nonatomic,readonly) BOOL canCreateContacts;              //@synthesize canCreateContacts=_canCreateContacts - In the implementation block
@property (nonatomic,readonly) BOOL canDeleteContacts;              //@synthesize canDeleteContacts=_canDeleteContacts - In the implementation block
@property (nonatomic,readonly) BOOL canCreateGroups;                //@synthesize canCreateGroups=_canCreateGroups - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCanCreateContacts:(BOOL)arg1 canDeleteContacts:(BOOL)arg2 canCreateGroups:(BOOL)arg3 ;
-(BOOL)canCreateContacts;
-(BOOL)canDeleteContacts;
-(BOOL)canCreateGroups;
@end

