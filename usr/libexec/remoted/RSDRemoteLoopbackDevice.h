//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RSDRemoteDevice.h"

@interface RSDRemoteLoopbackDevice : RSDRemoteDevice
{
}

- (int)connectToService:(char *)arg1 withTimeout:(unsigned int)arg2;	// IMP=0x00000001000182f0
- (int)listenForService:(char *)arg1 port:(char **)arg2;	// IMP=0x00000001000180f0
- (void)needsConnect;	// IMP=0x00000001000180ec
- (_Bool)connectable;	// IMP=0x00000001000180a4
- (unsigned int)type;	// IMP=0x000000010001809c

@end

