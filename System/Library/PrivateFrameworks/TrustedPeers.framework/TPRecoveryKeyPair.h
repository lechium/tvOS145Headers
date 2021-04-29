/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface TPRecoveryKeyPair : NSObject {

	NSData* _signingKeyData;
	NSData* _encryptionKeyData;

}

@property (retain,readonly) NSData * signingKeyData;                 //@synthesize signingKeyData=_signingKeyData - In the implementation block
@property (retain,readonly) NSData * encryptionKeyData;              //@synthesize encryptionKeyData=_encryptionKeyData - In the implementation block
-(id)initWithSigningKeyData:(id)arg1 encryptionKeyData:(id)arg2 ;
-(id)initWithStableInfo:(id)arg1 ;
-(NSData *)signingKeyData;
-(NSData *)encryptionKeyData;
@end

