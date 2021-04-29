//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMTTextSequence-Protocol.h"

@class NSMutableArray, NSNumber, NSString;

@interface SMTTextSequenceInference : NSObject <SMTTextSequence>
{
    NSMutableArray *_sequence;	// 8 = 0x8
    NSNumber *_target;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007f44
- (id)target;	// IMP=0x0000000100007f3c
- (id)sequence;	// IMP=0x0000000100007f34
- (void)addWordWithInputId:(unsigned long long)arg1;	// IMP=0x0000000100007ea4
- (void)resetWithBOS:(unsigned long long)arg1;	// IMP=0x0000000100007db8
- (id)initWithLength:(unsigned long long)arg1 BOS:(unsigned long long)arg2;	// IMP=0x0000000100007ce8
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x0000000100007c70
- (id)init;	// IMP=0x0000000100007c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
