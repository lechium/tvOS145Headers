//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMDeviceLockCommand.h>

#import "DMDRequestProvidingCommand-Protocol.h"

@class NSString;

@interface CEMDeviceLockCommand (DMDAdditions) <DMDRequestProvidingCommand>
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x0000000100004774
- (_Bool)dmf_requestExecutesWithoutReturning;	// IMP=0x000000010000476c
- (id)dmf_executeOperationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100004764
- (id)dmf_executeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000046bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

