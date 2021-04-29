/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNInstantMessageAddress : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _username;
	NSString* _service;
	NSString* _userIdentifier;
	NSString* _teamIdentifier;
	NSArray* _bundleIdentifiers;

}

@property (nonatomic,copy) NSString * username;                      //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * service;                       //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg1 ;
+(id)localizedStringForService:(id)arg1 ;
+(id)instantMessageAddressWithDictionaryRepresentation:(id)arg1 ;
+(/*^block*/id)Username;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userIdentifier;
-(NSString *)username;
-(id)dictionaryRepresentation;
-(NSString *)service;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(void)setService:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(id)initWithUsername:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 teamIdentifier:(id)arg4 bundleIdentifiers:(id)arg5 ;
-(id)initWithUsername:(id)arg1 service:(id)arg2 ;
@end

