//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSUBootFirmwareUpdater.h"

@class DevNodeWriter;

@interface NVMEiBootUpdater : MSUBootFirmwareUpdater
{
    DevNodeWriter *_writer;	// 80 = 0x50
}

@property(retain) DevNodeWriter *writer; // @synthesize writer=_writer;
- (_Bool)_copyIBICFromPath:(char *)arg1 withOptions:(struct __CFDictionary *)arg2 intoArray:(const struct __CFArray **)arg3 withError:(struct __CFError **)arg4;	// IMP=0x000000010002d2b4
- (_Bool)updateBootFirmwareWithCallback:(struct ramrod_update_callbacks *)arg1 context:(struct firmware_update_context *)arg2 error:(id *)arg3;	// IMP=0x000000010002ccf8
- (_Bool)generateFirmwareImagesWithCallback:(struct ramrod_update_callbacks *)arg1 context:(struct firmware_update_context *)arg2;	// IMP=0x000000010002ccc4
- (void)dealloc;	// IMP=0x000000010002cc74
- (id)initWithApNonce:(id)arg1;	// IMP=0x000000010002cc00

@end

