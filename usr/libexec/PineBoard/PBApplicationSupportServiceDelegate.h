//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISApplicationSupportServiceDelegate-Protocol.h"

@class NSString, UISApplicationSupportService;

@interface PBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate>
{
    UISApplicationSupportService *_service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010010959c
@property(readonly, nonatomic) UISApplicationSupportService *service; // @synthesize service=_service;
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(_Bool)arg3 forClient:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100109130
- (id)service:(id)arg1 initializeClient:(id)arg2;	// IMP=0x0000000100108868
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100108734
- (id)init;	// IMP=0x00000001001085e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

