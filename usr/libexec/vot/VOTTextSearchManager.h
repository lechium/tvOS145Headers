//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString, NSString, VOTBrailleManager;

@interface VOTTextSearchManager : NSObject
{
    NSMutableArray *_history;	// 8 = 0x8
    NSMutableString *_buffer;	// 16 = 0x10
    long long _bufferIndex;	// 24 = 0x18
    long long _historyIndex;	// 32 = 0x20
    _Bool _textSearchModeIsOn;	// 40 = 0x28
    VOTBrailleManager *_brailleManager;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x0000000100101e60
+ (void)initialize;	// IMP=0x0000000100101e28
- (void).cxx_destruct;	// IMP=0x0000000100102f98
@property(readonly, nonatomic) _Bool textSearchModeIsOn; // @synthesize textSearchModeIsOn=_textSearchModeIsOn;
@property(retain, nonatomic) VOTBrailleManager *brailleManager; // @synthesize brailleManager=_brailleManager;
- (void)_updateBrailleWithBuffer;	// IMP=0x0000000100102d5c
- (void)handleReplaceRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(long long)arg3;	// IMP=0x0000000100102c94
- (void)handleTextSearchEvent:(id)arg1;	// IMP=0x0000000100102b98
- (void)_handleLetter:(id)arg1;	// IMP=0x0000000100102828
- (void)_handleDelete:(id)arg1;	// IMP=0x0000000100102540
- (void)_handleArrowKey:(id)arg1;	// IMP=0x00000001001024b0
- (void)_handleUpDownMovement:(id)arg1;	// IMP=0x0000000100102350
- (void)_handleRightLeftMovement:(id)arg1;	// IMP=0x000000010010213c
@property(copy, nonatomic) NSString *currentSearchValue; // @dynamic currentSearchValue;
- (void)endTextSearchSession;	// IMP=0x0000000100102084
- (void)beginNewTextSearchSession;	// IMP=0x0000000100102038
- (void)_syncSearchBufferHistory;	// IMP=0x0000000100101f94
- (id)init;	// IMP=0x0000000100101e6c

@end
