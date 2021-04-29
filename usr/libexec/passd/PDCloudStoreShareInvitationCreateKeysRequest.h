//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDCloudStoreShareInvitationRequest.h"

@class NSString;

@interface PDCloudStoreShareInvitationCreateKeysRequest : PDCloudStoreShareInvitationRequest
{
    long long _permission;	// 48 = 0x30
    NSString *_handle;	// 56 = 0x38
    NSString *_zoneName;	// 64 = 0x40
    NSString *_containerName;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000efeb8
@property(readonly, copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) long long permission; // @synthesize permission=_permission;
- (id)description;	// IMP=0x00000001000efcac
- (_Bool)canCoalesceRequest:(id)arg1;	// IMP=0x00000001000efb50
- (id)initWithHandle:(id)arg1 permission:(long long)arg2 zoneName:(id)arg3 containerName:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000efa44

@end
