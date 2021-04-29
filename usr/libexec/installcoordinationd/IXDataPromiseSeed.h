//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _creatorIdentifier;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    unsigned long long _totalBytesNeededOnDisk;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002e120
- (void).cxx_destruct;	// IMP=0x000000010002e278
@property(nonatomic) unsigned long long totalBytesNeededOnDisk; // @synthesize totalBytesNeededOnDisk=_totalBytesNeededOnDisk;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) unsigned long long creatorIdentifier; // @synthesize creatorIdentifier=_creatorIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e128
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002dfb4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002de38

@end

