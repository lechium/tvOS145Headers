//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, PBRestrictionServiceRequest, TVSStateMachine;

@interface PBRestrictionServiceRequestManager : NSObject
{
    TVSStateMachine *_stateMachine;	// 8 = 0x8
    NSMutableArray *_pendingServiceRequestsQueue;	// 16 = 0x10
    NSMutableDictionary *_pendingTokenToRequestMapping;	// 24 = 0x18
    PBRestrictionServiceRequest *_currentRequest;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x0000000100190ecc
+ (void)initialize;	// IMP=0x0000000100190e58
- (void).cxx_destruct;	// IMP=0x0000000100196c04
@property(retain, nonatomic) PBRestrictionServiceRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) NSMutableDictionary *pendingTokenToRequestMapping; // @synthesize pendingTokenToRequestMapping=_pendingTokenToRequestMapping;
@property(readonly, nonatomic) NSMutableArray *pendingServiceRequestsQueue; // @synthesize pendingServiceRequestsQueue=_pendingServiceRequestsQueue;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (_Bool)_isSettingRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x0000000100196a74
- (_Bool)_isContentTypeRestrictedByProfile:(unsigned long long)arg1;	// IMP=0x0000000100196854
- (_Bool)_isContentType:(unsigned long long)arg1 allowedWithRating:(id)arg2;	// IMP=0x000000010019657c
- (_Bool)_isBooleanSettingType:(unsigned long long)arg1;	// IMP=0x0000000100196514
- (id)_featureNameForSetting:(unsigned long long)arg1;	// IMP=0x0000000100196478
- (id)_featureNameForContentType:(unsigned long long)arg1;	// IMP=0x000000010019634c
- (id)_dequeueNextServiceRequest;	// IMP=0x0000000100196128
- (void)_enqueueIncomingRequest:(id)arg1;	// IMP=0x0000000100195edc
- (void)_validatePINWithRequest:(id)arg1 postCompletionEvent:(_Bool)arg2;	// IMP=0x0000000100195cdc
- (void)_checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x0000000100195b30
- (void)_authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x00000001001957ac
- (void)_validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x00000001001951b8
- (void)_validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x0000000100194a00
- (void)_initializeRestrictionServiceStateMachine;	// IMP=0x0000000100191a34
- (void)cancelRequestWithToken:(id)arg1;	// IMP=0x00000001001918f0
- (void)authorizeRestrictionsWithRequest:(id)arg1;	// IMP=0x00000001001917ac
- (void)checkRestrictionSettingWithRequest:(id)arg1;	// IMP=0x0000000100191668
- (void)validateRestrictionForSettingWithRequest:(id)arg1;	// IMP=0x0000000100191524
- (_Bool)requestPassesAgeRestriction:(id)arg1;	// IMP=0x0000000100191464
- (void)validateRestrictionForContentTypesWithRequest:(id)arg1;	// IMP=0x0000000100191320
- (void)validatePINWithRequest:(id)arg1;	// IMP=0x0000000100191104
- (id)_init;	// IMP=0x0000000100190fd8
- (id)init;	// IMP=0x0000000100190fa0

@end

