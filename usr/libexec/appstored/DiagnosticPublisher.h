//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DiagnosticPublisher : NSObject
{
    _Bool _enableDiagnostics;	// 8 = 0x8
}

+ (id)publisherWithServiceClient:(id)arg1;	// IMP=0x00000001000908b4
+ (id)publisherWithRequestToken:(id)arg1;	// IMP=0x0000000100090850
- (void)logCode:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100090920

@end
