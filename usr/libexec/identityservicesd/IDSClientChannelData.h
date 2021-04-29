//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSClientChannelData : NSObject
{
    NSData *_metadataData;	// 8 = 0x8
    unsigned int _metadataSize;	// 16 = 0x10
    CDStruct_78c9ccae *_packetBuffer;	// 24 = 0x18
    const char *_metadata;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100050fe4
@property(readonly, nonatomic) unsigned int metadataSize; // @synthesize metadataSize=_metadataSize;
@property(readonly, nonatomic) const char *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) CDStruct_78c9ccae *packetBuffer; // @synthesize packetBuffer=_packetBuffer;
- (void)dealloc;	// IMP=0x0000000100050f3c
- (id)initWithPacketBuffer:(CDStruct_78c9ccae *)arg1 metadata:(const char *)arg2 metadataSize:(unsigned int)arg3;	// IMP=0x0000000100050d68
- (id)initWithBytesBuffer:(char *)arg1 bufferSize:(unsigned int)arg2 metadata:(const char *)arg3 metadataSize:(unsigned int)arg4;	// IMP=0x0000000100050b94

@end

