//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LibraryResultEnumerator-Protocol.h"

@class NSError;

@interface LibraryErrorResultEnumerator : NSObject <LibraryResultEnumerator>
{
    NSError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000a50f0
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001000a50e8
@property(readonly) long long resultComplexity;
- (id)initWithError:(id)arg1;	// IMP=0x00000001000a5068

@end

