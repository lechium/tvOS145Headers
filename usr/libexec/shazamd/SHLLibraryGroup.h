//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSMutableCopying-Protocol.h"
#import "SHLLibraryItem-Protocol.h"

@class NSMutableArray, NSString, SHLLibraryItemMetadata;

__attribute__((visibility("hidden")))
@interface SHLLibraryGroup : NSObject <SHLLibraryItem, NSMutableCopying>
{
    SHLLibraryItemMetadata *_metadata;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSMutableArray *_tracksToSave;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002d0e0
- (void).cxx_destruct;	// IMP=0x000000010002d438
@property(retain, nonatomic) NSMutableArray *tracksToSave; // @synthesize tracksToSave=_tracksToSave;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) SHLLibraryItemMetadata *metadata; // @synthesize metadata=_metadata;
- (_Bool)validIdentifier:(id)arg1;	// IMP=0x000000010002d3ec
@property(readonly) unsigned long long hash;
- (_Bool)isEqualGroup:(id)arg1;	// IMP=0x000000010002d304
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002d284
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002d248
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002d20c
- (id)initWithLibraryGroup:(id)arg1;	// IMP=0x000000010002d0e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002d01c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002ce7c
- (id)_initWithIdentifier:(id)arg1 metadata:(id)arg2 tracksToSave:(id)arg3;	// IMP=0x000000010002cd10
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2;	// IMP=0x000000010002ccfc
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010002cce4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

