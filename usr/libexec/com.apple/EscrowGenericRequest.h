//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LakituRequest.h"

#import "SRPClientRequest-Protocol.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface EscrowGenericRequest : LakituRequest <SRPClientRequest>
{
    _Bool _stingray;	// 8 = 0x8
    _Bool _iCDP;	// 9 = 0x9
    _Bool _silentAttempt;	// 10 = 0xa
    _Bool _useRecoveryPET;	// 11 = 0xb
    _Bool _fmipRecovery;	// 12 = 0xc
    _Bool _silentDoubleRecovery;	// 13 = 0xd
    _Bool _duplicate;	// 14 = 0xe
    NSString *_recoveryPassphrase;	// 16 = 0x10
    NSString *_iCloudEnv;	// 24 = 0x18
    NSString *_dsid;	// 32 = 0x20
    NSString *_authToken;	// 40 = 0x28
    NSString *_baseURL;	// 48 = 0x30
    NSDictionary *_escrowRecord;	// 56 = 0x38
    NSDictionary *_metadata;	// 64 = 0x40
    NSString *_encodedMetadata;	// 72 = 0x48
    NSString *_duplicateEncodedMetadata;	// 80 = 0x50
    NSNumber *_protocol;	// 88 = 0x58
    NSString *_command;	// 96 = 0x60
    NSString *_countryDialCode;	// 104 = 0x68
    NSString *_countryCode;	// 112 = 0x70
    NSString *_phoneNumber;	// 120 = 0x78
    NSString *_challengeCode;	// 128 = 0x80
    NSString *_appleID;	// 136 = 0x88
    NSString *_iCloudPassword;	// 144 = 0x90
    NSString *_recordID;	// 152 = 0x98
    NSData *_blob;	// 160 = 0xa0
    NSArray *_baseRootCertVersions;	// 168 = 0xa8
    NSArray *_trustedRootCertVersions;	// 176 = 0xb0
    NSString *_bypassToken;	// 184 = 0xb8
    NSString *_fmipUUID;	// 192 = 0xc0
    NSString *_activityUUID;	// 200 = 0xc8
    NSString *_activityLabel;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000010001894c
@property(nonatomic) _Bool duplicate; // @synthesize duplicate=_duplicate;
@property(copy, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(copy, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(copy, nonatomic) NSString *fmipUUID; // @synthesize fmipUUID=_fmipUUID;
@property(copy, nonatomic) NSString *bypassToken; // @synthesize bypassToken=_bypassToken;
@property(retain, nonatomic) NSArray *trustedRootCertVersions; // @synthesize trustedRootCertVersions=_trustedRootCertVersions;
@property(retain, nonatomic) NSArray *baseRootCertVersions; // @synthesize baseRootCertVersions=_baseRootCertVersions;
@property(retain, nonatomic) NSData *blob; // @synthesize blob=_blob;
@property(readonly, nonatomic) _Bool silentDoubleRecovery; // @synthesize silentDoubleRecovery=_silentDoubleRecovery;
@property(readonly, nonatomic) _Bool fmipRecovery; // @synthesize fmipRecovery=_fmipRecovery;
@property(readonly, nonatomic) _Bool useRecoveryPET; // @synthesize useRecoveryPET=_useRecoveryPET;
@property(readonly, nonatomic) _Bool silentAttempt; // @synthesize silentAttempt=_silentAttempt;
@property(readonly, nonatomic) _Bool iCDP; // @synthesize iCDP=_iCDP;
@property(readonly, nonatomic) _Bool stingray; // @synthesize stingray=_stingray;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, copy, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property(readonly, copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, copy, nonatomic) NSString *challengeCode; // @synthesize challengeCode=_challengeCode;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *countryDialCode; // @synthesize countryDialCode=_countryDialCode;
@property(readonly, copy, nonatomic) NSString *command; // @synthesize command=_command;
@property(readonly, nonatomic) NSNumber *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSString *duplicateEncodedMetadata; // @synthesize duplicateEncodedMetadata=_duplicateEncodedMetadata;
@property(copy, nonatomic) NSString *encodedMetadata; // @synthesize encodedMetadata=_encodedMetadata;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
- (id)_filteredMetadataForDoubleEnrollment:(id)arg1;	// IMP=0x0000000100018630
- (id)urlString;	// IMP=0x0000000100018574
- (id)urlRequest;	// IMP=0x000000010001843c
- (id)authorizationHeader;	// IMP=0x0000000100018314
- (id)authorizationHeaderWithUser:(id)arg1 password:(id)arg2 authType:(id)arg3;	// IMP=0x000000010001810c
- (id)bodyDictionary;	// IMP=0x0000000100017de8
- (id)validateInput;	// IMP=0x0000000100017a94
@property(readonly, copy, nonatomic) NSString *recordLabel;
@property(readonly, copy, nonatomic) NSString *iCloudEnv; // @synthesize iCloudEnv=_iCloudEnv;
@property(readonly, copy, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, copy, nonatomic) NSString *recoveryPassphrase; // @synthesize recoveryPassphrase=_recoveryPassphrase;
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000100017200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

