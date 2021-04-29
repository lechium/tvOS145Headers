//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SMTGlobalNNLM : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _shouldStop;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0000000100007868
- (void).cxx_destruct;	// IMP=0x0000000100007c4c
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
- (void)trainModelWithRecipe:(id)arg1 attachments:(id)arg2 coreduetData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007aac
- (void)cancel;	// IMP=0x0000000100007a34
- (void)readCoreDuetData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000079dc
- (id)deviceFormattedlanguage:(id)arg1;	// IMP=0x000000010000795c
- (id)compressedAttachmentURLFromRecipe:(id)arg1 attachments:(id)arg2;	// IMP=0x0000000100007958
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000078c8

@end

