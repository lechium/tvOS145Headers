/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAppletSubcredential, NSSet, NSString, PKAppletSubcredentialEntitlement;

@interface PKSharedCredentialGroup : NSObject <NSSecureCoding> {

	BOOL _localGroup;
	PKAppletSubcredential* _credential;
	NSSet* _sharedCredentials;
	NSSet* _receipts;
	NSString* _recipientHandle;
	NSString* _recipientName;
	PKAppletSubcredentialEntitlement* _entitlement;
	long long _state;

}

@property (nonatomic,readonly) PKAppletSubcredential * credential;                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSSet * sharedCredentials;                                   //@synthesize sharedCredentials=_sharedCredentials - In the implementation block
@property (nonatomic,readonly) NSSet * receipts;                                            //@synthesize receipts=_receipts - In the implementation block
@property (nonatomic,readonly) NSString * recipientHandle;                                  //@synthesize recipientHandle=_recipientHandle - In the implementation block
@property (nonatomic,readonly) NSString * recipientName;                                    //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isLocalGroup,nonatomic,readonly) BOOL localGroup;                         //@synthesize localGroup=_localGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(PKAppletSubcredential *)credential;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(NSString *)recipientHandle;
-(NSSet *)sharedCredentials;
-(NSSet *)receipts;
-(NSString *)recipientName;
-(void)parseGroupItems;
-(id)initWithCredential:(id)arg1 sharedCredentials:(id)arg2 receipts:(id)arg3 ;
-(BOOL)isLocalGroup;
@end
