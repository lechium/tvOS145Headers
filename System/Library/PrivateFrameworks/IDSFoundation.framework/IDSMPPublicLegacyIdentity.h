/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPPublicIdentityRef publicIdentity; 
+(BOOL)supportsSecureCoding;
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(SecMPPublicIdentityRef)_createPublicIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SecMPPublicIdentityRef)publicIdentity;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)signAndProtectData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(id)initWithPublicIdentity:(SecMPPublicIdentityRef)arg1 ;
@end

