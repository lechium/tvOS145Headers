/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSMPIdentity.h>

@class NSString;

@interface IDSMPFullServiceIdentityAdmin : IDSMPIdentity

@property (nonatomic,readonly) long long identityServiceType; 
@property (nonatomic,readonly) NSString * identityServiceTypeName; 
+(id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
+(id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id*)arg3 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicServiceIdentityAdminWithError:(id*)arg1 ;
-(long long)identityServiceType;
-(NSString *)identityServiceTypeName;
@end

