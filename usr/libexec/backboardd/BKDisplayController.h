//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion;

@interface BKDisplayController : NSObject
{
    BSCompoundAssertion *_observerAssertion;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000031b0
- (void).cxx_destruct;	// IMP=0x00000001000031a4
- (void)display:(id)arg1 didBlank:(_Bool)arg2;	// IMP=0x0000000100003058
- (unsigned int)taskPortForContextID:(unsigned int)arg1 displayUUID:(id)arg2;	// IMP=0x0000000100003050
- (unsigned int)hostContextIDForEmbeddedContextID:(unsigned int)arg1 displayUUID:(id)arg2;	// IMP=0x0000000100003048
- (struct CGPoint)convertCAScreenLocation:(struct CGPoint)arg1 toContextID:(unsigned int)arg2 displayUUID:(id)arg3;	// IMP=0x000000010000303c
- (struct CGPoint)convertReferenceLocation:(struct CGPoint)arg1 toCAScreenLocationForDisplayUUID:(id)arg2;	// IMP=0x0000000100003034
- (_Bool)contextIDAtCAScreenLocation:(struct CGPoint)arg1 displayUUID:(id)arg2 excludingContextIDs:(id)arg3 results:(out CDStruct_32a7f38a *)arg4;	// IMP=0x0000000100003024
- (id)addDisplayBlankingObserver:(id)arg1;	// IMP=0x0000000100002f5c
- (_Bool)displayIsBlanked:(id)arg1;	// IMP=0x0000000100002f3c

@end

