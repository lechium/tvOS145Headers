//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DaemonProtocolDataProvider.h"

@class NSURL;

@interface GratisClaimProtocolDataProvider : DaemonProtocolDataProvider
{
    NSURL *_redirectedClaimURL;	// 80 = 0x50
}

@property(copy) NSURL *redirectedClaimURL; // @synthesize redirectedClaimURL=_redirectedClaimURL;
- (_Bool)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100186dc0
- (void)dealloc;	// IMP=0x0000000100186d70

@end

