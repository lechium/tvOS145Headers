//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import "_DASHostExtensionContextProtocol-Protocol.h"

@class NSString, _DASPlugin;

@interface _DASExtensionHostContext : NSExtensionContext <_DASHostExtensionContextProtocol>
{
    _DASPlugin *_contextPlugin;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000010006d828
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000010006d7a4
- (void).cxx_destruct;	// IMP=0x000000010006db9c
@property(retain) _DASPlugin *contextPlugin; // @synthesize contextPlugin=_contextPlugin;
- (void)activityCompletedWithStatus:(unsigned char)arg1;	// IMP=0x000000010006dab8
- (id)remoteContextWithError:(id *)arg1;	// IMP=0x000000010006d8f8
- (int)pid;	// IMP=0x000000010006d8ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

