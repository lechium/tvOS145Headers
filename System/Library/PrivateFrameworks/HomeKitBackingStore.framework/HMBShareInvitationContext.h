/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CKUserIdentityLookupInfo;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding> {

	BOOL _shouldGrantWriteAccess;
	NSUUID* _participantClientIdentifier;
	CKUserIdentityLookupInfo* _lookupInfo;

}

@property (readonly) CKUserIdentityLookupInfo * lookupInfo;                  //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (copy,readonly) NSUUID * participantClientIdentifier;              //@synthesize participantClientIdentifier=_participantClientIdentifier - In the implementation block
@property (assign) BOOL shouldGrantWriteAccess;                              //@synthesize shouldGrantWriteAccess=_shouldGrantWriteAccess - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(id)attributeDescriptions;
-(id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2 ;
-(void)setShouldGrantWriteAccess:(BOOL)arg1 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2 ;
-(id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2 ;
-(NSUUID *)participantClientIdentifier;
-(BOOL)shouldGrantWriteAccess;
@end

