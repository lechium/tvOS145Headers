//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMApplicationStoreMacOSDeclaration.h>

#import "DMDRequestProvidingConfiguration-Protocol.h"

@class NSString;

@interface CEMApplicationStoreMacOSDeclaration (DMDAdditions) <DMDRequestProvidingConfiguration>
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x00000001000020cc
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000020bc
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000020b0
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000203c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

