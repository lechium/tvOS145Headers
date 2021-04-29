//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface APSProtocolMessage : NSObject
{
    int _command;	// 8 = 0x8
    NSMutableData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004fc20
- (id)copyMessageData;	// IMP=0x000000010004fb80
- (void)appendEightByteItem:(unsigned char)arg1 bytes:(unsigned long long)arg2;	// IMP=0x000000010004fb30
- (void)appendFourByteItem:(unsigned char)arg1 bytes:(unsigned int)arg2;	// IMP=0x000000010004fae0
- (void)appendTwoByteItem:(unsigned char)arg1 bytes:(unsigned short)arg2;	// IMP=0x000000010004fa88
- (void)appendOneByteItem:(unsigned char)arg1 byte:(unsigned char)arg2;	// IMP=0x000000010004fa30
- (void)appendItem:(unsigned char)arg1 string:(id)arg2;	// IMP=0x000000010004f9cc
- (void)appendItem:(unsigned char)arg1 data:(id)arg2;	// IMP=0x000000010004f944
- (void)_appendEightBytes:(unsigned long long)arg1;	// IMP=0x000000010004f90c
- (void)_appendFourBytes:(unsigned int)arg1;	// IMP=0x000000010004f8d4
- (void)_appendTwoBytes:(unsigned short)arg1;	// IMP=0x000000010004f89c
- (void)_appendOneByte:(unsigned char)arg1;	// IMP=0x000000010004f868
- (id)initWithCommand:(int)arg1;	// IMP=0x000000010004f7fc

@end
