//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface OwnerInfos : NSObject
{
    NSMutableArray *_allInfos;	// 8 = 0x8
    id _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100006300
@property(readonly, nonatomic) __weak id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *allInfos; // @synthesize allInfos=_allInfos;
- (unsigned long long)numberOfOwnersOtherThanPid:(int)arg1;	// IMP=0x00000001000061a0
- (void)addInfos:(id)arg1;	// IMP=0x0000000100006190
- (void)addInfo:(id)arg1;	// IMP=0x0000000100006180
- (id)initWithInfo:(id)arg1 context:(id)arg2;	// IMP=0x00000001000060c4

@end
