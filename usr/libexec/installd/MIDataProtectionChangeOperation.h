//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIDataProtectionChangeOperation : NSObject
{
    int _newClass;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    NSArray *_urls;	// 24 = 0x18
    unsigned long long _operationType;	// 32 = 0x20
}

+ (id)dataProtectionChangeOperationForURL:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3;	// IMP=0x00000001000208f0
+ (id)dataProtectionChangeOperationForURLs:(id)arg1 settingClass:(int)arg2 changeType:(unsigned long long)arg3;	// IMP=0x0000000100020884
- (void).cxx_destruct;	// IMP=0x00000001000214f4
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) int newClass; // @synthesize newClass=_newClass;
@property(readonly, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)performChangeOperation;	// IMP=0x0000000100021398
- (_Bool)_runChangeOperationWasLocked:(_Bool *)arg1 withError:(id *)arg2;	// IMP=0x00000001000209d4
- (id)initWithURLs:(id)arg1 newClass:(int)arg2 changeType:(unsigned long long)arg3;	// IMP=0x00000001000207f4

@end

