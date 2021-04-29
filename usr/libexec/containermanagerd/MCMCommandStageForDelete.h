//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMCommand-Protocol.h"

@class NSArray, NSString;

@interface MCMCommandStageForDelete : NSObject <MCMCommand>
{
    _Bool _useLocking;	// 8 = 0x8
    NSArray *_containerIdentities;	// 16 = 0x10
    CDUnknownBlockType _onError;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x000000010001af2c
+ (unsigned long long)command;	// IMP=0x000000010001af24
+ (id)commandForStageForDeleteWithContainerIdentities:(id)arg1 useLocking:(_Bool)arg2 onError:(CDUnknownBlockType)arg3;	// IMP=0x000000010001aea8
- (void).cxx_destruct;	// IMP=0x000000010001ae78
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(nonatomic) _Bool useLocking; // @synthesize useLocking=_useLocking;
@property(retain, nonatomic) NSArray *containerIdentities; // @synthesize containerIdentities=_containerIdentities;
- (_Bool)fromQueue:(id)arg1 executeWithError:(unsigned long long *)arg2;	// IMP=0x0000000100019fd4
- (id)initWithContainerIdentities:(id)arg1 useLocking:(_Bool)arg2 onError:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019f1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

