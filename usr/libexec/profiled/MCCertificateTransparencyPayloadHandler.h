//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCCertificateTransparencyPayloadHandler : MCNewPayloadHandler
{
}

- (id)exceptionsDictionary;	// IMP=0x0000000100020504
- (_Bool)setExceptions:(id)arg1 outError:(id *)arg2;	// IMP=0x00000001000204a4
- (id)applicationID;	// IMP=0x00000001000202f4
- (void)_remove;	// IMP=0x00000001000202e0
- (_Bool)_installOutError:(id *)arg1;	// IMP=0x0000000100020278
- (void)unsetAside;	// IMP=0x0000000100020268
- (void)setAside;	// IMP=0x000000010002025c
- (void)remove;	// IMP=0x00000001000201e8
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00000001000201d8

@end
