//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDCloudStoreShareInvitationRequestResponse-Protocol.h"

@class NSError, NSString;

@interface PDCloudStoreShareInvitationRequestGenericResponse : NSObject <PDCloudStoreShareInvitationRequestResponse>
{
    _Bool _success;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001fa000
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (unsigned long long)type;	// IMP=0x00000001001f9fe4
- (id)initWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000001001f9f64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
