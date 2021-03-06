//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordZone.h>

#import "AMSCloudDataRecordZone-Protocol.h"

@class NSString;
@protocol AMSCloudDataRecordZoneIdentifier;

@interface CKRecordZone (amsaccountsd) <AMSCloudDataRecordZone>
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic, getter=isDefaultRecordZone) _Bool defaultRecordZone;
@property(readonly, nonatomic) id <AMSCloudDataRecordZoneIdentifier> identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

