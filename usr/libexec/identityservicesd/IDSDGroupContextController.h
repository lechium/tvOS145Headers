//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSGroupContextDaemonProtocol-Protocol.h"
#import "IDSRegistrationCenterListener-Protocol.h"

@class CUTPromiseSeal, ENGroupContext;

@interface IDSDGroupContextController : NSObject <IDSGroupContextDaemonProtocol, IDSRegistrationCenterListener>
{
    ENGroupContext *_messagesGroupContext;	// 8 = 0x8
    CUTPromiseSeal *_seal;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010041ca28
- (void).cxx_destruct;	// IMP=0x0000000100421404
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(retain, nonatomic) ENGroupContext *messagesGroupContext; // @synthesize messagesGroupContext=_messagesGroupContext;
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100420a58
- (void)qSetupSeal;	// IMP=0x00000001004209b0
- (void)_messagesGroupContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100420850
- (void)centerUpdatedRegistrationIdentities:(id)arg1;	// IMP=0x0000000100420440
- (void)deleteAllCachedValuesForGroupWithID:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001004201d4
- (void)deleteAllKnownGroupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010041ffc4
- (void)fetchAllKnownGroups:(CDUnknownBlockType)arg1;	// IMP=0x000000010041fd0c
- (void)latestCachedGroupWithStableID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010041fa44
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010041f57c
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010041f108
- (void)groupFromPublicDataRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010041ec88
- (void)publicDataRepresentationForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010041e7f0
- (void)fetchGroupWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010041e1b0
- (void)upsertGroupWithInfo:(id)arg1 previousGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010041d3cc
- (void)groupContextForProtectionSpace:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010041ce9c
- (id)registrationCenter;	// IMP=0x000000010041ce68
- (void)dealloc;	// IMP=0x000000010041cdec
- (id)init;	// IMP=0x000000010041cbbc

@end

