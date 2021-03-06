/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTDiagnosticProvider.h>

@class NSString;

@interface RTKeychainManager : NSObject <RTDiagnosticProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)sendDiagnosticsToURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)encryptionKeyWithSize:(long long)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeEncryptionKeyWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)createSymmetricKeyWithSize:(long long)arg1 identifier:(id)arg2 storeInKeychain:(BOOL)arg3 error:(id*)arg4 ;
-(id)_keySpecifierWithBitSize:(long long)arg1 ;
-(id)_randomKeyWithSpecifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setKey:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)_removeItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_keyForIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateKey:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateKeyWithIdentifier:(id)arg1 keyData:(id)arg2 keySize:(long long)arg3 error:(id*)arg4 ;
-(int)_copySecItemMatchingQuery:(id)arg1 result:(id*)arg2 ;
-(int)_addSecItemWithAttributes:(id)arg1 result:(id*)arg2 ;
-(int)_deleteSecItemMatchingQuery:(id)arg1 ;
-(int)_updateSecItemMatchingQuery:(id)arg1 attributes:(id)arg2 ;
@end

