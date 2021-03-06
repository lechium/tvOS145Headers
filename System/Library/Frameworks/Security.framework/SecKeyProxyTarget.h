/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Security/Security-Structs.h>
#import <Security/SecKeyProxyProtocol.h>

@class NSData, SecKeyProxy;

@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol> {

	id _key;
	NSData* _certificate;
	SecKeyProxy* _publicKeyProxy;

}

@property (nonatomic,readonly) _SecKey* key; 
-(_SecKey*)key;
-(void)initializeWithReply:(/*^block*/id)arg1 ;
-(void)getBlockSizeWithReply:(/*^block*/id)arg1 ;
-(void)getAttributesWithReply:(/*^block*/id)arg1 ;
-(void)getExternalRepresentationWithReply:(/*^block*/id)arg1 ;
-(void)getDescriptionWithReply:(/*^block*/id)arg1 ;
-(void)getAlgorithmIDWithReply:(/*^block*/id)arg1 ;
-(void)getPublicKey:(/*^block*/id)arg1 ;
-(void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithKey:(id)arg1 certificate:(id)arg2 ;
@end

