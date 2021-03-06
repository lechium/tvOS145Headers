//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDCloudStoreShareInvitationRequest.h"

@class NSString;

@interface PDCloudStoreShareInvitationRequestDeclineRequest : PDCloudStoreShareInvitationRequest
{
    _Bool _shouldAlertRecipient;	// 48 = 0x30
    NSString *_handle;	// 56 = 0x38
    NSString *_zoneName;	// 64 = 0x40
    NSString *_containerName;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000f07a8
@property(readonly, copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(nonatomic) _Bool shouldAlertRecipient; // @synthesize shouldAlertRecipient=_shouldAlertRecipient;
- (id)description;	// IMP=0x00000001000f058c
- (_Bool)canCoalesceRequest:(id)arg1;	// IMP=0x00000001000f043c
- (id)initWithHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f0348

@end

