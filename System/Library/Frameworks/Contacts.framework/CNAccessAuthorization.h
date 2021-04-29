/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Contacts/Contacts-Structs.h>
@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject {

	CNAuthorizationContext* _authorizer;

}

@property (nonatomic,readonly) CNAuthorizationContext * authorizer;              //@synthesize authorizer=_authorizer - In the implementation block
+(id)new;
+(id)allAuthorizationKeys;
-(id)init;
-(id)initWithAuditToken:(SCD_Struct_CN6)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg1 ;
-(id)initWithAuthorizer:(id)arg1 ;
-(BOOL)authorizeFetchRequest:(id)arg1 accessError:(id*)arg2 ;
-(void)removeUnauthorizedKeysFromFetchRequest:(id)arg1 ;
-(CNAuthorizationContext *)authorizer;
-(void)performWork:(/*^block*/id)arg1 authorizingFetchRequest:(id)arg2 failureHandler:(/*^block*/id)arg3 ;
@end

