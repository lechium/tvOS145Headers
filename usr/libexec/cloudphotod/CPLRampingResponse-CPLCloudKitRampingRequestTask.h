//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRampingResponse.h>

#import "CKCodeOperationMessageMutation-Protocol.h"

@class NSString;

@interface CPLRampingResponse (CPLCloudKitRampingRequestTask) <CKCodeOperationMessageMutation>
- (void)substituteRecordTransports:(id)arg1;	// IMP=0x00000001000a6138
- (id)extractRecordTransports;	// IMP=0x00000001000a612c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

