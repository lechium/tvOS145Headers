//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PCSRegistryOperation;

@interface PCSRegistryOperationPair : NSObject
{
    PCSRegistryOperation *_actualOperation;	// 8 = 0x8
    PCSRegistryOperation *_finishOperation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000071d0
@property(retain) PCSRegistryOperation *finishOperation; // @synthesize finishOperation=_finishOperation;
@property(retain) PCSRegistryOperation *actualOperation; // @synthesize actualOperation=_actualOperation;
- (id)description;	// IMP=0x0000000100007104
- (id)init:(id)arg1 finish:(id)arg2;	// IMP=0x0000000100007060

@end

