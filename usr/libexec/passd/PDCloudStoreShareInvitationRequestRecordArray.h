//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDCloudStoreShareInvitationRequestGenericResponse.h"

@class PKCloudRecordArray;

@interface PDCloudStoreShareInvitationRequestRecordArray : PDCloudStoreShareInvitationRequestGenericResponse
{
    PKCloudRecordArray *_cloudStoreRecords;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001fa1e0
@property(readonly, nonatomic) PKCloudRecordArray *cloudStoreRecords; // @synthesize cloudStoreRecords=_cloudStoreRecords;
- (unsigned long long)type;	// IMP=0x00000001001fa1c8
- (id)initWithCloudStoreRecords:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001001fa130

@end

