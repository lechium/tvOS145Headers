//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SystemDiagnosticLogAgent.h"

@interface SystemDiagnosticLogAgentiOS : SystemDiagnosticLogAgent
{
}

- (void)processMessage:(id)arg1 replyWith:(id)arg2;	// IMP=0x0000000100005e48
- (_Bool)getAccessibilityPreferences:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100005aa4
- (_Bool)getKeyboardPreferences:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100005598
- (_Bool)ASPToolTrace:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100005400
- (_Bool)_BTPHYTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100005194
- (id)_AWDTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100004cdc
- (id)_coreMediaTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100004adc
- (_Bool)_triggerWpantundTopologyGenerationWithTimeout:(long long)arg1;	// IMP=0x0000000100004874
- (_Bool)_proximityTaskWithTimeout:(long long)arg1;	// IMP=0x000000010000460c

@end

