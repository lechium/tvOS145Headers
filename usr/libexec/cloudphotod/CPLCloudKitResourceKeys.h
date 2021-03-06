//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CPLCloudKitResourceKeys : NSObject
{
    unsigned long long _resourceType;	// 8 = 0x8
    NSString *_prefix;	// 16 = 0x10
    NSString *_fileSizeKey;	// 24 = 0x18
    NSString *_fileUTIKey;	// 32 = 0x20
    NSString *_widthKey;	// 40 = 0x28
    NSString *_heightKey;	// 48 = 0x30
    NSString *_fingerprintKey;	// 56 = 0x38
    NSString *_expungedStateKey;	// 64 = 0x40
    NSString *_expungedDateKey;	// 72 = 0x48
    NSString *_resourceKey;	// 80 = 0x50
    NSString *_dynamicKey;	// 88 = 0x58
}

+ (unsigned long long)resourceTypeForFieldName:(id)arg1;	// IMP=0x00000001000be9d4
+ (id)resourceKeysForResourceType:(unsigned long long)arg1;	// IMP=0x00000001000be96c
- (void).cxx_destruct;	// IMP=0x00000001000bed20
@property(readonly, nonatomic) NSString *dynamicKey; // @synthesize dynamicKey=_dynamicKey;
@property(readonly, nonatomic) NSString *resourceKey; // @synthesize resourceKey=_resourceKey;
@property(readonly, nonatomic) NSString *expungedDateKey; // @synthesize expungedDateKey=_expungedDateKey;
@property(readonly, nonatomic) NSString *expungedStateKey; // @synthesize expungedStateKey=_expungedStateKey;
@property(readonly, nonatomic) NSString *fingerprintKey; // @synthesize fingerprintKey=_fingerprintKey;
@property(readonly, nonatomic) NSString *heightKey; // @synthesize heightKey=_heightKey;
@property(readonly, nonatomic) NSString *widthKey; // @synthesize widthKey=_widthKey;
@property(readonly, nonatomic) NSString *fileUTIKey; // @synthesize fileUTIKey=_fileUTIKey;
@property(readonly, nonatomic) NSString *fileSizeKey; // @synthesize fileSizeKey=_fileSizeKey;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)initWithPrefix:(id)arg1 resourceType:(unsigned long long)arg2;	// IMP=0x00000001000bea80

@end

