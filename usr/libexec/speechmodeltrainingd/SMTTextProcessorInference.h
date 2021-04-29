//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SMTTextProcessor-Protocol.h"

@class NSMutableArray, NSString, SMTKaldiVocab;

@interface SMTTextProcessorInference : NSObject <SMTTextProcessor>
{
    NSMutableArray *_text;	// 8 = 0x8
    SMTKaldiVocab *_vocab;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100005e84
- (id)textSequence;	// IMP=0x0000000100005e7c
- (void)addText:(id)arg1;	// IMP=0x0000000100005e18
- (void)resetWithBOS:(unsigned long long)arg1;	// IMP=0x0000000100005dc8
- (id)initWithLength:(unsigned long long)arg1 vocab:(id)arg2 BOS:(unsigned long long)arg3;	// IMP=0x0000000100005d44
- (id)initWithVocab:(id)arg1;	// IMP=0x0000000100005cb0
- (id)init;	// IMP=0x0000000100005c98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
