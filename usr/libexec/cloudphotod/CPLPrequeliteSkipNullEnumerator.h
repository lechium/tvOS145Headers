//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@protocol NSFastEnumeration;

@interface CPLPrequeliteSkipNullEnumerator : NSObject <NSFastEnumeration>
{
    id <NSFastEnumeration> _enumerator;	// 8 = 0x8
    unsigned long long _sizeOfItemPtr;	// 16 = 0x10
    id *_itemPtr;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000427e0
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010004268c
- (void)dealloc;	// IMP=0x0000000100042640
- (id)initWithEnumerator:(id)arg1;	// IMP=0x00000001000425c8

@end

