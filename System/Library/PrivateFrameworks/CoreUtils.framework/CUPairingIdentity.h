/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding> {

	NSData* _altIRK;
	NSUUID* _identifier;
	NSData* _publicKey;
	NSData* _secretKey;

}

@property (nonatomic,copy) NSData * altIRK;                  //@synthesize altIRK=_altIRK - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * publicKey;               //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy) NSData * secretKey;               //@synthesize secretKey=_secretKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(void)setSecretKey:(NSData *)arg1 ;
-(void)setAltIRK:(NSData *)arg1 ;
-(NSData *)altIRK;
-(NSData *)secretKey;
@end

