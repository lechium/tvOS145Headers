//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IDSPipelineComponent.h"

@class IDSEncryptionController;

@interface IDSEncryptionComponent : IDSPipelineComponent
{
    IDSEncryptionController *_encryptionController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001fb298
- (_Bool)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1;	// IMP=0x00000001001fb1e0
- (_Bool)_shouldAutoBugCaptureForECError:(id)arg1;	// IMP=0x00000001001fb164
- (_Bool)shouldForwardErrorForEncryptionType:(long long)arg1 forceECC:(_Bool)arg2;	// IMP=0x00000001001fb11c
- (id)runIndividuallyWithInput:(id)arg1;	// IMP=0x00000001001f9bf4
- (id)initWithEncryptionController:(id)arg1;	// IMP=0x00000001001f9b18

@end

