//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSDRegistrationListener : NSObject
{
    NSMutableSet *_completionBlocks;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010026b02c
- (void).cxx_destruct;	// IMP=0x000000010026b840
@property(retain, nonatomic) NSMutableSet *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void)registrationController:(id)arg1 allRegistrationsSucceeded:(id)arg2;	// IMP=0x000000010026b6c8
- (void)_callBlocksWithResult:(_Bool)arg1 registrations:(id)arg2 error:(id)arg3;	// IMP=0x000000010026b508
- (void)removeBlockForIdentifier:(id)arg1;	// IMP=0x000000010026b4a4
- (id)addBlockForRegistrationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010026b3bc
- (void)dealloc;	// IMP=0x000000010026b33c
- (id)init;	// IMP=0x000000010026b1c0

@end
