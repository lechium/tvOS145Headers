//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface EscrowService : NSObject
{
    NSObject<OS_dispatch_group> *_group;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_recoverQueue;	// 16 = 0x10
}

+ (_Bool)isFatalError:(id)arg1;	// IMP=0x0000000100046b9c
+ (id)createEscrowBlobWithCertificate:(id)arg1 escrowRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100046760
+ (id)doubleEnrollmentRecordFromPrimaryRecord:(id)arg1;	// IMP=0x00000001000463e4
+ (id)certificateRequest:(id)arg1 duplicate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000426ac
- (void).cxx_destruct;	// IMP=0x000000010004aef0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recoverQueue; // @synthesize recoverQueue=_recoverQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
- (void)verifyCertificateWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004aa50
- (void)getCountrySMSCodesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004a83c
- (void)listSMSTargetsWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004a628
- (void)changeSMSTargetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004a350
- (void)startSMSChallengeWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004a020
- (void)updateRecordMetadataWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049cfc
- (void)_deleteRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100049984
- (void)deleteRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049600
- (void)updateRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049508
- (void)_performDoubleRecoveryStingrayWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x0000000100048f28
- (void)_performDoubleRecoveryICDPWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x00000001000487cc
- (void)_performPostEnrollSilentRecoveryWithRequest:(id)arg1;	// IMP=0x00000001000484d4
- (void)recoverRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000480e0
- (void)_recoverRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010004761c
- (void)_srpInitHelper:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100047324
- (void)_recoverWithVersion:(int)arg1 req:(id)arg2 duplicate:(_Bool)arg3 sesWrapper:(id)arg4 srpInitResponse:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100046bc8
- (_Bool)processPrerecord:(id)arg1 outerRequest:(id)arg2 escrowRequest:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100045e7c
- (void)storeRecordWithCertDataRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045304
- (void)_storeRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100044d44
- (void)storeRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044494
- (id)fetchCachedCertificateWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100043c7c
- (_Bool)cacheStoredCertificate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100043a88
- (id)keychainBaseQueryWithEnvironment:(id)arg1 andBaseURL:(id)arg2;	// IMP=0x0000000100043920
- (void)fetchCertificatesAndDuplicateRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043104
- (void)fetchCertificatesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004303c
- (void)_fetchCertificatesWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100042bac
- (void)getAccountInfoWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042404
- (id)init;	// IMP=0x0000000100042368
- (id)_getBypassToken;	// IMP=0x00000001000421d8
- (void)_removeBypassToken;	// IMP=0x00000001000420ac
- (void)_saveBypassToken:(id)arg1;	// IMP=0x0000000100041f48

@end

