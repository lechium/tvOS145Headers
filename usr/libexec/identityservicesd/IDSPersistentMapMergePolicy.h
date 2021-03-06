//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSPersistentMapMergePolicy : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    unsigned long long _policy;	// 16 = 0x10
}

+ (id)prioritizeMemoryPolicy;	// IMP=0x000000010010879c
+ (id)ditchMemoryPolicy;	// IMP=0x0000000100108760
- (void).cxx_destruct;	// IMP=0x0000000100108bb8
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (id)processedDictionaryForDisk:(id)arg1 andMemory:(id)arg2;	// IMP=0x0000000100108968
- (id)initWithPolicyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100108888
- (id)initWithStandardPolicy:(unsigned long long)arg1;	// IMP=0x00000001001087d4

@end

