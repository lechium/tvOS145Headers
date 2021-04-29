/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MLKeyManager : NSObject
+(id)syncQueue;
+(BOOL)isModelEncrypted:(id)arg1 ;
+(id)extractKeyIdentifierFromModelAtURL:(id)arg1 usesCodeSigningIdentityForEncryption:(BOOL*)arg2 error:(id*)arg3 ;
+(id)createPersistentKeyBlobForKeyID:(id)arg1 usesCodeSigningIdentityForEncryption:(BOOL)arg2 error:(id*)arg3 ;
+(id)loadDecryptionKeyForModelAtURL:(id)arg1 error:(id*)arg2 ;
+(id)decryptSessionForModelAtURL:(id)arg1 error:(id*)arg2 ;
@end
