/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFEncryptionOperation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation, _SFKeySpecifier, NSString;

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying> {

	id _wrappedKeyEncryptionOperationInternal;

}

@property (nonatomic,copy) SFRSAEncryptionOperation * keyWrappingOperation; 
@property (nonatomic,copy) SFSymmetricEncryptionOperation * sessionEncryptionOperation; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFRSAEncryptionOperation *)keyWrappingOperation;
-(SFSymmetricEncryptionOperation *)sessionEncryptionOperation;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFKeySpecifier *)encryptionKeySpecifier;
-(id)initWithKeyWrappingOperation:(id)arg1 ;
-(id)initWithKeyWrappingOperation:(id)arg1 sessionEncryptionOperation:(id)arg2 ;
-(void)setKeyWrappingOperation:(SFRSAEncryptionOperation *)arg1 ;
-(void)setSessionEncryptionOperation:(SFSymmetricEncryptionOperation *)arg1 ;
@end

