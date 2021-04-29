//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSOwnedDataPromise.h"

#import "NSSecureCoding-Protocol.h"

@class IXPromisedStreamingZipTransferSeed;

@interface IXSPromisedStreamingZipTransfer : IXSOwnedDataPromise <NSSecureCoding>
{
}

- (unsigned long long)bytesConsumedOnDisk;	// IMP=0x000000010001b7f0
- (unsigned long long)totalBytesForProgress;	// IMP=0x000000010001b778
- (void)reset;	// IMP=0x000000010001b6e0
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001b264
- (oneway void)_remote_setArchiveBytesConsumed:(unsigned long long)arg1;	// IMP=0x000000010001b8a0

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedStreamingZipTransferSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedStreamingZipTransferSeed *seed; // @dynamic seed;

@end

