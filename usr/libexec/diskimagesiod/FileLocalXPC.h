//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BackendXPC.h"

@interface FileLocalXPC : BackendXPC
{
    int _fileDescriptor;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000255f4
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100025c2c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000257bc
- (id)initWithURL:(id)arg1 fileOpenMode:(unsigned short)arg2;	// IMP=0x00000001000255fc

@end

