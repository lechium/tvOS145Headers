//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMetrics;

__attribute__((visibility("hidden")))
@interface WLDUTSPushHandler : NSObject
{
    AMSMetrics *_metricsController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000d4f0
@property(retain, nonatomic) AMSMetrics *metricsController; // @synthesize metricsController=_metricsController;
- (void)_reportMetrics:(id)arg1;	// IMP=0x000000010000d35c
- (void)handleNotification:(id)arg1;	// IMP=0x000000010000ce28
- (_Bool)shouldHandleNotification:(id)arg1;	// IMP=0x000000010000cd40

@end
