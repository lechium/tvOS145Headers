//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AnalyticsConfigurationObserverDelegate-Protocol.h"

@interface SignpostReporterConfigObserverDelegate : NSObject <AnalyticsConfigurationObserverDelegate>
{
    CDUnknownBlockType _callbackBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100006b3c
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void)observer:(id)arg1 didChangeConfiguration:(id)arg2 type:(id)arg3;	// IMP=0x0000000100006aa4
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006a30

@end

