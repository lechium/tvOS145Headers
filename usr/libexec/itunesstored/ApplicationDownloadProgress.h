//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class ApplicationHandle;

@interface ApplicationDownloadProgress : NSObject <NSCopying>
{
    ApplicationHandle *_applicationHandle;	// 8 = 0x8
    long long _completedUnitCount;	// 16 = 0x10
    long long _totalUnitCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100196770
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(copy, nonatomic) ApplicationHandle *applicationHandle; // @synthesize applicationHandle=_applicationHandle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001966b8

@end
