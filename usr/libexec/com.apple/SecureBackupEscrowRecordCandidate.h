//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SecureBackupEscrowRecordMetadataHolder-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface SecureBackupEscrowRecordCandidate : NSObject <SecureBackupEscrowRecordMetadataHolder>
{
    NSDictionary *_recordContents;	// 8 = 0x8
    NSString *_sosPeerID;	// 16 = 0x10
    NSData *_sosBackupKeybagPassword;	// 24 = 0x18
    NSData *_sosBackupKeybagDigest;	// 32 = 0x20
    NSString *_timestamp;	// 40 = 0x28
    NSString *_bottleID;	// 48 = 0x30
    NSData *_escrowedSPKI;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010004d26c
@property(retain) NSData *escrowedSPKI; // @synthesize escrowedSPKI=_escrowedSPKI;
@property(retain) NSString *bottleID; // @synthesize bottleID=_bottleID;
@property(retain) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSData *sosBackupKeybagDigest; // @synthesize sosBackupKeybagDigest=_sosBackupKeybagDigest;
@property(retain) NSData *sosBackupKeybagPassword; // @synthesize sosBackupKeybagPassword=_sosBackupKeybagPassword;
@property(retain) NSString *sosPeerID; // @synthesize sosPeerID=_sosPeerID;
@property(retain) NSDictionary *recordContents; // @synthesize recordContents=_recordContents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

